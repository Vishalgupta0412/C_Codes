#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, frequency = 0;
    printf("enter string:");
    gets(str);
    printf("enter frequency search:");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
            frequency++;
    }
    printf("frequency=%d\n", frequency);
    return 0;
}