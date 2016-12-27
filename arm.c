#include<stdio.h>
#include<conio.h>
int main()
{
    int num,n,r,result = 0;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        result+=r*r*r;
        n/=10;
    }

    if(result==num)
        printf("%d is an armstrong number.",num);
else
        printf("%d is not an armstrong number.",num);
return 0;
}

