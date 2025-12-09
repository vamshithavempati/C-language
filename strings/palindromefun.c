#include <stdio.h>
int reverse(int n);    
int main()
{
    int num, rev;
    printf("Enter a number:\n");
    scanf("%d", &num);
    rev = reverse(num);    
    if(num == rev)
        printf("%d is a Palindrome number\n", num);
    else
        printf("%d is not a Palindrome number\n", num);
    return 0;
}

int reverse(int n)
{
    int r, rev = 0;
    while(n > 0)
  {
        r = n % 10;          
        rev = rev * 10 + r; 
        n = n / 10;            
    }
    return rev;
}
