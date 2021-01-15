#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d",&num);
    while (num != 1)    //若數字不為1
    {
        if (num % 2)    //如果已無法整除2則繼續往下進行
            break;
        else
            num /= 2;   //除以2
    }
    while (num != 1)    //若數字仍不為1
    {
        if (num % 3)    //如果已無法整除3則繼續往下進行
            break;
        else
            num /= 3;   //除以3
    }
    while (num != 1)    //若數字仍不為1
    {
        if (num % 5)    //如果已無法整除5則繼續往下進行
            break;
        else
            num /= 5;   //除以5
    }
    if (num != 1)   //若仍剩下不為1的因數
        printf("Irregular number!\n");
    else    //如果該數字能用2、3、5整除
        printf("Regular number!\n");

    return 0;
}
