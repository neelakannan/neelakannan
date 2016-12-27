#include<stdio.h>
#include<conio.h>
int main()
{
        int a,i,flag=0;
    printf("\n enter the number");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
        if(flag==0)
{
            printf("\n %d number is prime",a);
}
        else
            printf("\n %d number is not prime",a);
return 0;
}    }
