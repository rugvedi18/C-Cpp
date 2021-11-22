#include <stdio.h>

int main()
{
    int num, i, n = 2, flag = 0;

    printf("Enter number to check prime or not: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Enter positive number \n");
        return 0;
    }
    if (num == 2)
    {
        printf("2 is Prime \n");
        return 0;
    }
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("Number is not prime \n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is prime \n", num);
    }
}
