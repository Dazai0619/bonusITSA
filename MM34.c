#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX 10000

int gcd(int a,int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b,(a % b));
}

int main()
{
    int data_num;
    scanf("%d",&data_num);
    while(data_num--)
    {
        int max = -1,min = MAX,num,input;
        scanf("%d",&num);
        while (num--)
        {
            scanf("%d",&input);
            if (max < input)
                max = input;
            if (min > input)
                min = input;
        }
        printf("%d\n",gcd(max,min));
    }
    return 0;
}
