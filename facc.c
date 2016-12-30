#include<stdio.h>
#include<conio.h>
int main()
{
        int j=1,f=1,n;
    printf("\n enter the number");
    scanf("%d",&n);
    while(j<=n)
    {
        f=f*j;
        j++;
    }
    printf("\n factorial number of %d is %d",n,f);
    return 0;
}
