#include<stdio.h>
#include<conio.h>
int main()
{

    int n,temp;
    printf("\n enter the number");
    scanf("%d",&n);
    printf("\n reversed number is");
    while(n!=0)
    {

        temp=n%10;
        printf("%d",temp);
        n=n/10;
    }
    return 0;

    }

