#include<stdio.h>
#include<conio.h>
int main()
{

    int num,temp;
    printf("\n enter the number");
    scanf("%d",&num);
    printf("\n reversed number is");
    while(num!=0)
    {

        temp=num%10;
        printf("%d",temp);
        num=num/10;
    }
    return 0;

    }

