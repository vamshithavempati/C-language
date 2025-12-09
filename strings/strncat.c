#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20], st2[20];
    int n;
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    printf("Enter number of characters to append:\n");
    scanf("%d", &n);
    strncat(st1, st2, n);
    printf("Resultant string = %s", st1);
    return 0;
}
