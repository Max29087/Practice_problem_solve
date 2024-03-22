#include <stdio.h>
// #include<string.h>
int main()
{
    int count = 0;
    char str[100];
    printf("Enter a String:");
    fgets(str, 100, stdin);
    fflush(stdin);
    // scanf("%s",str);
    while (str[count] != '\0')
    {
        count++;
        printf("%c Length of the string: %d\n", str[count], count);
    }
    printf("Length of the string: %d\n", count);
    return 0;
}