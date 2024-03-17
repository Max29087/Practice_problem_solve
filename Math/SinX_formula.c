#include <stdio.h>
#include <math.h>
int main()
{
    float sinX = 0;
    float a;
    float x_in, x;
    float x1 = 1;
    float arr[25];
    printf("Enter the valu of X : ");
    scanf("%f", &x_in);
    // This loop use for find-out the value of factorial and X power N.
    for (int i = 1, m = 0; i < 12; i += 2, m++)
    {
        for (int j = 1; j <= i; j++)
        {
            x1 *= j; // This loop Use for find-out Factorial value.
        }
        x = pow(x_in, i); // Value of X power N.

        a = (x / x1); // Valu of (X power N) / (Factorial).

        arr[m] = a; // Store the vale of 'a' in an array.[a=(X power N) / (Factorial)].

        x1 = 1; // x1=1 becouse we are in a loop. If we not do this x1 count his privious value.
    }
    int g;
    float sum_of_even_index = 0;
    float sum_of_odd_index = 0;
    for (int i = 1, g = 0; i < 12; i += 2, g++) // This loop is use for find-out the sum of even and odd value index.
    {
        if (g % 2 == 0) // Check the even index and sum all value of the even index.
        {
            sum_of_even_index += arr[g];
        }
        else // Or odd Index and sum all value of the even index.
        {
            sum_of_odd_index += arr[g];
        }
    }
    sinX = sum_of_even_index - sum_of_odd_index; // Calculate Sinx by adding sum of even and odd index.
    printf("SinX=%.3f\n", sinX);
    return 0;
}
