#include <stdio.h>
int main()
{
    char st[30], ch;
    int i, flag = 0;
    printf("Enter the string:\n");
    gets(st);
    printf("Enter the character to search:\n");
    scanf("%c", &ch);
    for(i = 0; st[i] != '\0'; i++)
    {
        if(st[i] == ch)
        {
            printf("Character found at position: %d\n", i + 1);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Character not found in the string\n");
    }
  return 0;
}
