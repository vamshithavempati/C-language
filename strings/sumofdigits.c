#include <stdio.h>
int sumDigits(int n);   
int main()
{
    int num, result;
    printf("Enter a number:\n");
    scanf("%d", &num);
    result = sumDigits(num);  
    printf("Sum of digits = %d\n", result);
    return 0;
}

int sumDigits(int n)
{
    int sum = 0, r;
    while(n > 0)
  {
        r = n % 10;      
        sum = sum + r; 
        n = n / 10;      
    }
    return sum;
}
