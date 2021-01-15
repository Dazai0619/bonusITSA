#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NUM 100110

typedef struct work
{
    int time;
    int deadline;
}Work;

int cmp(const void* a,const void* b)    //用於qsort的比較程式
{
    return (((Work*)a)->deadline - ((Work*)b)->deadline);   //依照該工作的截止時間由小到大排序
}

int main()
{
    int ncase;
    scanf("%d", &ncase);

    while (ncase--)
    {
        Work warray[NUM];
        int num,sum = 0,counter;
        scanf("%d",&num);
        for (counter = 0;counter < num;counter++)
            scanf("%d",&(warray[counter].time));    //依序放入所需時間
        for (counter = 0;counter < num;counter++)
            scanf("%d",&(warray[counter].deadline));    //依序放入該工作的截止時間
        qsort(warray,num,sizeof(Work),cmp);     //使用qsort排序
        for (counter = 0;counter < num;counter++)
        {
            sum += warray[counter].time;    //將每項工作所需時間加總
            if (sum > warray[counter].deadline) //若累積所需時間大於截止時間
                break;  //離開迴圈(此時counter一定不等於num)
        }
        if (counter == num) //若是迴圈順利跑完則counter一定會等於num(counter++後回到第33行後判斷已等於num然後離開for迴圈)
            printf("Yes\n");
        else    
            printf("No\n");
    }
    return 0;
}
