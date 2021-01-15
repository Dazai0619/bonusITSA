#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)    //用於qsort的比較函式
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int num[100];
    int counter = 0;
    while (scanf("%d",&num[counter]) != EOF)
        counter++;
    qsort(num,counter,sizeof(num[0]),cmp);  //由小排到大

    if (counter % 2 != 0)   //若共有奇數個數字
        printf("%d\n",num[(counter - 1) / 2]);
    else    //若共有偶數個數字
    {
        float mid = (num[(counter / 2) - 1] + num[(counter / 2)]) / 2 ;
        printf("%f\n",mid);
    }
    return 0;
}
