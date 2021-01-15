#include <stdio.h>

int main()
{
    long long num[50] = {0};
    int n,ncase;

    num[1] = num[2] = 1;   
    for (int counter = 3;counter <= 45;counter++)   //計算Fibonacci數列(題目說到第45個
        num[counter] = num[counter - 2] + num[counter - 1];

    scanf("%d",&ncase);     
    while (ncase--)
    {
        scanf("%d",&n);
        printf("%lld\n",num[n]);    //印出數列中第n個數字
    }
    return 0;
}
