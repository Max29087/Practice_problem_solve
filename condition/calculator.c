#include<stdio.h>
int main()
{
    double number1,number2;
    char operator;
    scanf("%lf",&number1);
    scanf(" %c",&operator);
    scanf("%lf",&number2);
    if (operator=='*')
    {
        double multiplication = number1 * number2;
        printf("Multiplication: %.3lf\n",multiplication);
    }
    else if (operator=='/')
    {
        if (number2==0)
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        else
        {
            double division = number1 / number2;
            printf("Division: %.3lf\n",division);
        }
    }
    else if (operator=='+')
    {
        double sum = number1 + number2;
        printf("Sum: %.3lf\n",sum);
    }
    else
    {
        double minus = number1 - number2;
        printf("Minus: %.3lf\n",minus);
    }
    return 0;
}