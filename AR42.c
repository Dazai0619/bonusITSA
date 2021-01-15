#include <stdio.h>

#define MAX 1024
#define MIN -1

int main()
{
    int num,max = MIN,min = MAX;
    for (int counter = 0;counter < 10;counter++)
    {
        scanf("%d",&num);
        if (num > max)  //如果大於目前的最大值
            max = num;  //取代最大值
        if (num < min)  //如果小於目前的最小值
            min = num;  //取代最小值
    }
    printf("Largest number = %d\n",max);
    printf("Smallest number = %d\n",min);

    return 0;
}
