#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20], st2[20];
    printf("Enter a string:\n");
    gets(st1);
    strcpy(st2, st1);
    printf("Copied string = %s", st2);
    return 0;
}
