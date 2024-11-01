#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

void Push(char STACK[],int *top,char value)
{ if((*top)>10000)
  {
    printf("STACK is full");
    return;
  }
  (*top)++;
  STACK[(*top)]=value;
}

char Pop(char STACK[],int *top)
{ 
    if((*top)==0)
    {
        printf("STACK is EMPTY");
        return -1;
    }
char temp=STACK[(*top)];
 (*top)--;
 return temp;
}

int Prec(char ch)
{
  if(ch=='+'||ch=='-')
   return 1;
  if(ch=='*'||ch=='/')
   return 2;
  if(ch=='^')
  return 3;  
}

void Infix_to_Postfix(char Infix[],char Postfix[])
{   
  // printf("mew\n");
  
    int k=1;
    int post_ind=-1;
    char stack[10000];
    int top=0;
    char *ch;
    ch=Infix;
    while (*ch!='\0')
    { //printf("mewbb\n");
     if(isalnum(*ch))
     {
        Postfix[++post_ind]=(*ch);
        //printf("mewww%d\n",++k);
     }  
     else if((*ch)=='(')
      {
       
        Push(stack,&top,(*ch));
      }
     else if((*ch)=='+'|| (*ch)=='-'||(*ch)=='*'||(*ch)=='/'||(*ch)=='^')
      { 
        while (Prec(stack[top])>=Prec((*ch)))
        {
          Postfix[++post_ind]=Pop(stack,&top);
        }

        Push(stack,&top,(*ch));
      }

      else if((*ch)==')')
      {
        while ((stack[top])!='(')
        {
          Postfix[++post_ind]=Pop(stack,&top);
        }
        char c=Pop(stack,&top);
        //printf("mew\n");
        
      }
      else
      {ch++;//printf("mew\n");
      }
    }
    
}

int main()
{
  char Infix[20],PostFix[1000];
  scanf("%s",Infix);
  Infix_to_Postfix(Infix,PostFix);
  printf("\n%s\n",PostFix);
}