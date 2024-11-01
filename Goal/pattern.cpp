#include<bits/stdc++.h>
using namespace std;

// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
void pattern_1(int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << "* ";
            }
            cout << endl;
        }
}
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
void pattern_2(int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << "* ";
            }
            cout << endl;
        }
}
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
void pattern_3(int n){
     for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}
// 1
// 22
// 333
// 4444
// 55555
void pattern_4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
         cout << endl;
    }
   
}
// *****
// ****
// ***
// **
// *
void pattern_5(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout <<  endl;
    }
}
// 12345
// 1234
// 123
// 12
// 1
void pattern_6(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << j;
        } 
        cout << endl;
    }
}
//     *    
//    ***   
//   *****  
//  ******* 
// *********
void pattern_7(int n){
    for(int i = 1; i <= n; i++){
        //space
        for(int j = n; j > i; j--){
            cout << " ";
        }
        //star
        for(int j = 1; j <= (2 * i - 1); j++){
            cout << "*";
        }
        //space
        for(int j = n; j > i; j--){
            cout << " ";
        }
        cout << endl;
    }
}
// *********
//  ******* 
//   *****  
//    ***   
//     *    
void pattern_8(int n){
    for(int i = 1; i <= n; i++){
        //space
        for(int j = 1; j < i; j++){
            cout << " ";
        }

        //star
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            cout << "*";
        }

        //space
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
//      *      
//     * *     
//    * * *    
//   * * * *   
//  * * * * *  
//  * * * * *  
//   * * * *   
//    * * *    
//     * *     
//      *   
void pattern_9(int n) {
        for(int i = 1; i <= n; i++){
            //space
            for(int j = n; j >= i; j--){
                cout << " ";
            }
            
            //star
            for(int j = 1; j <= 2 * i - 1; j+= 2){
                cout << "*";
                cout << " ";
            }
            
            //space
            for(int j = n; j >= i; j--){
                cout << " ";
            }
            cout << endl;
        }
        
        for(int i = 1; i <= n; i++){
            //space
            for(int j = 1; j <= i; j++){
                cout << " ";
            }
            
            //star
            for(int j = n; j <= 2 * n - i; j++){
                cout << "*";
                cout << " ";
            }
            
            //space
            for(int j = 1; j <= i; j++){
                cout << " ";
            }
            cout << endl;
        }
        //or call pattern 7 & apttern 8
    }
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *   
void pattern_9using_7_8(int n){
    pattern_7(n);
    pattern_8(n);
}
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
void pattern_10(int n){
    for(int i = 1; i <= n; i++){
        //star
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i < n; i++){
        //star
        for(int j = i; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }

}
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
void pattern_11(int n){
    for(int i = 1; i <= n; i++){
        if(i %2 != 0){
            for(int j = 1; j <= i; j++){
                if(j %2 != 0){
                    cout << "1 ";
                }else{
                    cout << "0 "; 
                }
            }
            cout << endl;
        }
        else{
            for(int j = 1; j <= i; j++){
                if(j %2 != 0){
                    cout << "0 ";
                }else{
                    cout << "1 ";
                }
            }
            cout << endl;
        }
    }

}
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern_12(int n){
    int space = 2 * (n - 1);
    for(int i = 1; i <= n; i++){
        //numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        //space
        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        //numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

}
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
void pattern_13(int n){
    int ch = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}
// A
// AB
// ABC
// ABCD
// ABCDE
void pattern_14(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 65; j < 65 + i; j++){
            cout << char(j);
        }
        cout << endl;
    }

}
// ABCDE
// ABCD
// ABC
// AB
// A
void pattern_15(int n){
    for(int i = 0; i < n; i++){
        for(int j = 65; j < 65 + (n - i); j++){
            cout << char(j);
        }
        cout << endl;
    }

}
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
void pattern_16(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
}
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA
void pattern_17(int n){
     for(int i = 1; i <= n; i++){
        //space
        for(int j = n; j > i; j--){
            cout << " ";
        }
        //alphabet
        char ch = 'A';
        int alpha = (2 * i - 1);
        for(int j = 1; j <= alpha; j++){
            cout << ch;
            if(j < ((alpha + 1) / 2)){
                ch++;
            }
            else{
                ch--;
            }
        }
        //space
        for(int j = n; j > i; j--){
            cout << " ";
        }
        cout << endl;
    }
}
// E
// ED
// EDC
// EDCB
// EDCBA
void pattern_18(int n){
    int ch = 65;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << char(ch + n - j - 1);
        }
        cout << endl;
    }
}
// E
// DE
// CDE
// BCDE
// ABCDE
void pattern_18modified(int n){
    int ch = 65;
    int j;
    for(int i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout << char(ch + n - i - 1);
            ch ++;
        }
        ch -= j;
        cout << endl;
    }
}
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void pattern_19(int n){
    for(int i = 0 ; i < n; i++){
        //stars
        for(int j = n; j > i; j--){
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }
        //stars
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;

    }
    for(int i = 0 ; i < n; i++){
        //stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        //spaces
        int space = 2 * n - 2;
        for(int j = 2 * i; j < space; j++){
            cout << " ";
        }
        //stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void pattern_20(int n){
    for(int i = 0 ; i < n; i++){
        //stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        //spaces
        int space = 2 * n - 2;
        for(int j = 2 * i; j < space; j++){
            cout << " ";
        }
        //stars
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1 ; i < n; i++){
        //stars
        for(int j = n; j > i; j--){
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }
        //stars
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;

    }
}
// *****
// *   *
// *   *
// *   *
// *****
void pattern_21(int n){
    for(int i = 0; i < n; i++){
        //star
        if( i == 0){
            for(int j = 0; j < n; j++){
                cout <<"*";
            }
            //cout << endl;
        }
        //star
        else if( i == (n - 1)){
            for(int j = 0; j < n; j++){
                cout <<"*";
            }
            cout << endl;
        }
        else{
             //space
            for(int j = 0; j < n; j++){
                if(j == 0){
                    cout << "*";
                }
                else if(j == (n - 1)){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
// *****
// *   *
// *   *
// *   *
// *****
void pattern_21striver(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == (n - 1) || j == (n - 1)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
void pattern_22(int n){
    for(int i = 0; i < 2 * n - 1; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;

            cout << (n- min(min(top, bottom), min(right, left)));
        }
        cout << endl;
    }
}
int main()
{
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pattern_21striver(n);
    }
}