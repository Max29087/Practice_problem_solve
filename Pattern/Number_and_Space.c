#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1 , m=1 ; j <= i && m < n ; j++,m++)
        {
            printf("%d",m);
        }
        for (int k = 1; k <= n-i; k++)
        {
            printf("_");
        }
        int temp=i;
        for (int l = temp; l >=1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    
    return 0;
}