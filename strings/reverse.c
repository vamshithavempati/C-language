#include <stdio.h>

int main()
{
    char st[20], rev[20];
    int i, j = 0, len = 0;
    printf("Enter a string:\n");
    gets(st);
    for(i = 0; st[i] != '\0'; i++)
    {
        len++;
    }
    for(i = len - 1; i >= 0; i--)
    {
        rev[j] = st[i];
        j++;
    }
    rev[j] = '\0';
    printf("Reversed string = %s", rev);
    return 0;
