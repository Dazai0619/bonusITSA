#include<stdio.h>

int main()
{
    int narray[20000],num,temp,first = 0,counter,counter_one;
    while (scanf("%d",&num) == 1)
    {
        if (num == 0)   //若無輸入
            break;  //結束

        if (first)  //如果該行已輸出完畢
            printf("\n");   //換行
        else    //剛進迴圈時不換行
            first = 1;

        for (counter = 0;counter < num;counter++)
            scanf("%d",&(narray[counter]));

        for(counter = 0;counter < num - 1;counter++)    //進行bubble sort    
        {
            for(counter_one = 0;counter_one < num - counter - 1;counter_one++)
            {
                if (narray[counter_one + 1] > narray[counter_one])  //將位於後面且較大的數字移到前面
                {
                    temp = narray[counter_one];
                    narray[counter_one] = narray[counter_one + 1];
                    narray[counter_one + 1] = temp;
                }
            }
        }

        for (counter = 0;counter < num;counter++)
            printf("%d %d\n",(counter + 1),narray[counter]);    //印出排序好的index跟數字
        
        first = 0;  //歸零換行flag
    }
    return 0;
}
