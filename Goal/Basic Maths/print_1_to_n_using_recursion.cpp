#include<stdio.h>

void printNos(int N)
{
    if(N < 1){
        return;
    }
    N--;
    printNos(N); 
    printf("%d ",N + 1);
}

int main(){
    int N; 
    scanf("%d", &N);
    printNos(N);
    return 0;
}