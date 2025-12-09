#include <stdio.h>
int main()
{
    char str[200];
    int i, characters = 0, words = 1, lines = 1;
    printf("Enter the text :\n");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        characters++;
        if(str[i] == ' ' || str[i] == '\t')
        {
            words++;
        }
        if(str[i] == '\n')
        {
            lines++;
            words++;
        }
    }
printf("Number of characters = %d\n", characters);
    printf("Number of words = %d\n", words);
    printf("Number of lines = %d\n", lines);
    return 0;
}
