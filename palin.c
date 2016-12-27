#include<stdio.h>
#include<conio.h>
int main()
{

    char *a;
    int len,i,flag=0;
    printf("\n enter the string");
    scanf("%c",&a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==a[len-i-1])
          flag=flag+1;
    }
    if(flag==len)
       {
         printf("\n number is not palindrome");
    }
    else
        printf("\n number is palindrome");
            return 0;
        }

