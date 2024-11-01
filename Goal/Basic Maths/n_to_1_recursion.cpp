#include<stdio.h>

void printNos(int N)
{
    if(N < 1){
        return;
    }
    printf("%d ",N);
    N--;
    printNos(N); 
    
}

int main(){
    int N; 
    scanf("%d", &N);
    printNos(N);
    return 0;
}