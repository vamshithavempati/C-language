#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20], st2[20];
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    strcat(st1, st2);
    printf("Concatenated string = %s", st1);
    return 0;
}
