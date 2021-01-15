#include <stdio.h>

double result(int num)
{
    double counter,sum = 0;
    if (num % 2 == 0)   //若input為偶數
    {
        for (counter = 2;counter <= num;counter += 2)   //依照題幹指示計算
            sum = sum + 1/counter;
    }
    else    //若input為奇數
        for (counter = 1;counter <= num;counter += 2)   //依照題幹指示計算
            sum = sum + 1/counter;
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%.11f\n",result(num));  //輸出計算後的結果到小數點後11位
    return 0;
}
