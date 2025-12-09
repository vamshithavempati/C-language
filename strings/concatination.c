#include <stdio.h>
int main()
{
    char st1[20], st2[20];
    int i, j;
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    for(i = 0; st1[i] != '\0'; i++);
    for(j = 0; st2[j] != '\0'; j++)
    {
        st1[i] = st2[j];
        i++;
    }
    st1[i] = '\0';
    printf("Concatenated string = %s", st1);
    return 0;
}
