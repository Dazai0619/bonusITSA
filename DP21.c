#include<stdio.h>
#define MAX 100

void initialize(int fib[])
{
    fib[0] = 1;
    fib[1] = 1;

    for(int counter = 2;counter < MAX;counter++)
    {
        fib[counter] += fib[counter - 1];
        fib[counter] += fib[counter - 2];
    }
}

int main()
{
    int fib[MAX] = {0};
    initialize(fib);

    int num;
    scanf("%d",&num);

    while(num--)
    {
        int input;
        scanf("%d",&input);
        printf("%d\n",fib[input - 1]);
    }

    return 0;
}
