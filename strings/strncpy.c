#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20], st2[20];
    int n;
    printf("Enter a string:\n");
    gets(st1);
    printf("Enter number of characters to copy:\n");
    scanf("%d", &n);
    strncpy(st2, st1, n);
    st2[n] = '\0';  
    printf("Copied string = %s", st2);
    return 0;
}
