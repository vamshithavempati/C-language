#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20], st2[20];
    int result;
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    result = strcmp(st1, st2);
    if(result == 0)
        printf("Both strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
