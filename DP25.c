#include <stdio.h>

int main()
{
    long long int num[100] = {0};
    int input,counter;

    num[0] = 1;
    num[1] = num[2] = 2;

    for(counter = 3;counter <= 90;counter++)    //將題目指定範圍之數列計算出來，建立該遞迴函式之解
        num[counter] = num[counter - 1] / 4 + num[counter - 2] / 2 + num[counter - 3];

    while(scanf("%d",&input) == 1)  //若偵測到1個輸入
        printf("%lld\n",num[input]);    //印出

    return 0;
}
