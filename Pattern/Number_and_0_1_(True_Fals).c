#include <stdio.h>
//problem 9
int main()
{
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            for (int k = 1; k <=n; k++)
            {
                if (k%2!=0)
                {
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
        else{
            for (int k = 1; k <=n; k++)
            {
                if (k%2!=0)
                {
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}