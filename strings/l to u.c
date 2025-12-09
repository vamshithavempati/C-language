#include <stdio.h>
int main()
{
    char st[30];
    int i;
    printf("Enter the text:\n");
    gets(st);
    for(i = 0; st[i] != '\0'; i++)
    {
        if(st[i] >= 'a' && st[i] <= 'z')
        {
            st[i] = st[i] - 32;
        }
    }
    puts(st);
    return 0;
}
