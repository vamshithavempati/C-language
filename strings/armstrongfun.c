#include <stdio.h>
#include <math.h>
int isArmstrong(int n);     
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if(isArmstrong(n==n))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}
int isArmstrong(int n)
{
    int temp = n, r, sum = 0;
    while(temp > 0)
    {
        r = temp % 10;               
        sum = sum + (r * r * r);    
        temp = temp / 10;              
    }
    if(sum == n)
        return 1;
    else
  return 0;
}
