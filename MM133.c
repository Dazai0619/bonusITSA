#include <stdio.h>

double result(int num)
{
    double counter,sum = 0;
    if (num % 2 == 0)
    {
        for (counter = 2;counter <= num;counter += 2)
            sum = sum + 1/counter;
    }
    else
        for (counter = 1;counter <= num;counter += 2)
            sum = sum + 1/counter;
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%.11f\n",result(num));
    return 0;
}
