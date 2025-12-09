#include <stdio.h>

int main()
{
    char st[20];
    int count = 0, i;

    printf("Enter a string:\n");
    gets(st);

    for(i = 0; st[i] != '\0'; i++)
    {
        count++;
    }

    printf("Size of the string = %d", count);

    return 0;
}
