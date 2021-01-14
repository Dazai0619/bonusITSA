#include <stdio.h>

int main()
{
    long long int num[100] = {0};
    int input,counter;

    num[0] = 1;
    num[1] = num[2] = 2;

    for(counter = 3;counter <= 90;counter++)
        num[counter] = num[counter - 1] / 4 + num[counter - 2] / 2 + num[counter - 3];

    while(scanf("%d",&input) == 1)
        printf("%lld\n",num[input]);

    return 0;
}
