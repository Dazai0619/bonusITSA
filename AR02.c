#include <stdio.h>
#define MAX 4096

int main()
{
    int num[3];
    scanf("%d%d%d",&num[2],&num[1],&num[0]);    //將index值作為次方數依序讀入數字

    int tmp[MAX],result[MAX],times,highest = 0;
    scanf("%d",&times);     //讀取次方數
    tmp[0] = 1;     //確保等一下相乘不會影響值
    for(int counter = 0;counter < times;counter++)
    {
        for(int counter_one = 0;counter_one <= highest + 2;counter_one++)
            result[counter_one] = 0;    //歸零
        for(int counter_one = 0;counter_one <= highest;counter_one++)   //highest為0時：將數字放入tmp中；不為0時：從個位數開始依序進行乘法
            for(int count = 0;count < 3;count++)    
                result[counter_one + count] += tmp[counter_one] * num[count];   
        for(int counter_one = 0;counter_one <= highest + 2;counter_one++)
            tmp[counter_one] = result[counter_one];     //將結果放入result
        highest += 2;   //最高位數加2
    }
    for(int counter = highest;counter >= 0;counter--)   //從最高位數開始印出
    {
        printf("%d",result[counter]);
        if(counter)
            printf(" ");
    }
    printf("\n");

    return 0;
}
