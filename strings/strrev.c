#include <stdio.h>
#include <string.h>
int main()
{
    char st[20];
    printf("Enter a string:\n");
    gets(st);
    strrev(st);
    printf("Reversed string = %s", st);
    return 0;
}
