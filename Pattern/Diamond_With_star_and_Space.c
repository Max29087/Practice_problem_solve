#include <stdio.h>
//problem 12
int main()
{
    int n, i,j,k,x;
    scanf("%d",&n);
    x=n/2;
    for(i=1;i<=x+1;i++)
    {
        for(j=1;j<=x+1-i;j++)
        {
            printf("_");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("_");
        }
        for(k=1;k<=2*(x-i)+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
