#include<bits/stdc++.h>
#define START 1
#define END 180000      // Maximum 100000

using namespace std;

const int M = 300;      // Order of B+ Tree
int searchTime;

struct node {
    int size;
    bool leaf;
    node **pointer;
    node *parent, *next;
    string *word;
    string *meaning;

    node(int M) {
        size = 0;
        leaf = true;
        parent = next = NULL;
        word = new string[M];
        meaning = new string[M];
        pointer = new node*[M+1];
        for(int i = 0; i <= M; i++)
            pointer[i] = NULL;
    }
};

node *root = new node(M);

// insert key and internal node to parent
void insert_to_parent(node *parent, string word, node *right) {
    int i = parent->size - 1;
    while(i >= 0) {
        if(parent->word[i] <= word)
            break;
        else {
            parent->word[i+1] = parent->word[i];
            parent->pointer[i+2] = parent->pointer[i+1];
        }
        i -= 1;
    }
    parent->word[i+1] = word;
    parent->pointer[i+2] = right;
    parent->size++;
}

// find leaf node that stores the key "word"
node *find_leaf_node(string word) {
    node *tmp_root = root;
    searchTime = 0;
    while(!tmp_root->leaf) {
        searchTime++;
        int i = 0;
        for(; i < tmp_root->size; i++) {
            if(word < tmp_root->word[i])
                break;
        }
        tmp_root = tmp_root->pointer[i];
    }
    return tmp_root;
}

// update internal node after inserting leaf node, if needed
void insert_internal_node(node *parent, string word, node *left, node *right) {
    // new root should create
    if(parent == NULL) {
        parent = new node(M);
        parent->word[0] = word;
        parent->pointer[0] = left;
        parent->pointer[1] = right;
        parent->size = 1;
        parent->leaf = false;
        root = parent;
        left->parent = parent;
        right->parent = parent;
        return;
    }

    right->parent = parent;
    insert_to_parent(parent, word, right);
    if(parent->size == M) {
        node *new_node = new node(M);
        new_node->leaf = false;

        int i, j = 0;
        for(i = parent->size-(M-1)/2; i < M; i++, j++) {
            new_node->word[j] = parent->word[i];
            if(j == 0) {
                new_node->pointer[0] = parent->pointer[i];
                new_node->pointer[0]->parent = new_node;
            }
            new_node->pointer[j+1] = parent->pointer[i+1];
            new_node->pointer[j+1]->parent = new_node;
        }

        parent->size -= ((M-1)/2 + 1);
        new_node->size = (M-1)/2;
        // not new_leaf->word[0]
        insert_internal_node(parent->parent, parent->word[parent->size], parent, new_node);
    }
}

// insert data at leaf node
void insert_into_bPlusTree(string word, string meaning) {
    node *leaf = find_leaf_node(word);

    int i = leaf->size - 1;
    while(i >= 0) {
        if(leaf->word[i] <= word)
            break;
        else {
            leaf->word[i+1] = leaf->word[i];
            leaf->meaning[i+1] = leaf->meaning[i];
        }
        i--;
    }

    leaf->word[i+1] = word;
    leaf->meaning[i+1] = meaning;
    leaf->size++;

    if(leaf->size == M) {
        node *new_leaf = new node(M);

        int i, j = 0;
        for(i = leaf->size - M/2; i < M; i++, j++) {
            new_leaf->word[j] = leaf->word[i];
            new_leaf->meaning[j] = leaf->meaning[i];
        }

        leaf->size -= M/2;
        new_leaf->size = M/2;
        new_leaf->next = leaf->next;
        leaf->next = new_leaf;
        insert_internal_node(leaf->parent, new_leaf->word[0], leaf, new_leaf);
    }
}

string search_from_bPlusTree(string word) {
    node *leaf = find_leaf_node(word);

    for(int i = 0; i < leaf->size; i++) {
        if(word == leaf->word[i]) {
            cout << "search time = (" << searchTime << " + " << i+1 << ")\n";
            return leaf->meaning[i];
        }
    }
    return "not found!!!";
}


int main() {
    string word, meaning;
    root = new node(M);

    ifstream read ;
    read.open("input2.txt");
    if(!read.is_open()) {
        cout << "Failed to open " << "input.txt" << " file!!!!!";
        exit(1);
    }

    for(int i = START-1 ; i<END; i++) {
        string word;
        read >> word;
        getline(read,meaning);
        insert_into_bPlusTree(word, meaning);
    }
    read.close();

    while(true) {
        cout << "Enter a word: ";
        cin >> word;
        meaning = search_from_bPlusTree(word);
        cout << "Meaning = " << meaning << endl;
    }

    return 0;
}
