#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    getchar();
    char str1[100];
    char str2[100]="YES";
    char str3[100]="YEs";
    char str4[100]="YeS";
    char str5[100]="yES";
    char str6[100]="Yes";
    char str7[100]="yEs";
    char str8[100]="yeS";
    char str9[100]="yes";



    int i,c;

    for(i = 0; i < n; i++)
        {
            gets(str1);
        }

        for(i=0;i<n;i++)
            {
            c=strcmp(str1,(str2 || str3 || str4 || str5 || str6 || str7 || str8 || str9));
            if(c==0)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
            }


    return 0;


}




