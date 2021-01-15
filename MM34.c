#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX 10000

int gcd(int a,int b)    //求a、b最大公因數
{
    if (a % b == 0) //若a可整除b
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
            if (max < input)    //若input大於目前最大值
                max = input;    //替換最大值
            if (min > input)    //若input小於目前最小值
                min = input;    //替換最小值
        }
        printf("%d\n",gcd(max,min));    //得max跟min的最大公因數
    }
    return 0;
}
