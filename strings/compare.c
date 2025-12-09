#include <stdio.h>
int main()
{
    char st1[20], st2[20];
    int i, flag = 0;
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    for(i = 0; st1[i] != '\0' || st2[i] != '\0'; i++)
    {
        if(st1[i] != st2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Both strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
