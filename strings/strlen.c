#include <stdio.h>
#include <string.h>
int main()
{
    char st[20];
    int len;
    printf("Enter a string:\n");
    gets(st);
    len = strlen(st);
    printf("Length of the string = %d", len);
    return 0;
}
