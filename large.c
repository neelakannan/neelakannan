#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,large;
printf("enter the 1 number");
scanf("%d",&a);
printf("enter the 2 number");
scanf("%d",&b);
printf("enter the 3 number");
scanf("%d",&c);
large=a>b?(a>c?a:c):(b>c?b:c);
printf("\n large number is %d",large);
return 0;
}
