#include <stdio.h>
#include <stdlib.h>
#define NUM 10010

int compare(const void *a,const void *b)    //用於qsort的比較函式
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    while(1)
    {
        int num,enemy[NUM],solder[NUM],count = 0,counter,counter_one;
        scanf("%d",&num);
        if (num == 0)   //若輸入為0
            break;  //停止輸出
        for (counter = 0;counter < num;counter++)
            scanf("%d",enemy + counter);
        for(counter = 0;counter < num;counter++)
            scanf("%d",solder + counter);
        qsort(enemy,num,sizeof(int),compare);   //將enemy以力量值由小至大排序
        qsort(solder,num,sizeof(int),compare);  //將solder以力量值由小至大排序
        
        //計數器歸零
        counter = 0;
        counter_one = 0;
        while (counter_one < num)
        {
            if (enemy[counter] < solder[counter_one])   //若enemy的力量值小於solder
            {
                count++;    //勝利數+1
                
                //繼續往後比較(若是之後的enemy亦可被現在的solder擊敗那也可以被更強的solder擊敗)
                counter++;  
                counter_one++;
            }
            else    //若此場未奪勝則繼續找更強的solder
                counter_one++;
        }
        printf("%d\n",count);   //印出此次勝利數
    }
    return 0;
}
