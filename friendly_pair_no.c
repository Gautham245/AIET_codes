#include<stdio.h>
int main()
{
    //fill the code
    int num1, num2;
    printf("Enter any two no : \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum1 = 0, sum2 = 0;
    for(int i = 1; i < num1; i++)
    {
        if(num1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for(int i = 1; i < num2; i++)
    {
        if(num2 % i == 0)
        {
            sum2 = sum2 + i;
        }
    }
    if(sum1 == num1 && sum2 == num2)
        printf("Friendly Pair\n");
    else
        printf("Not Friendly Pair\n");
    return 0;
}
