#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NUM 10010

int main()
{
    int job,machine,work_time,time[NUM] = {0},counter,counter_one,min,max;
    scanf("%d%d",&job,&machine);

    for (counter = 0;counter < job;counter++)
    {
        scanf("%d",&work_time);
        for (min = 0,counter_one = 1;counter_one < machine;counter_one++)
            if (time[counter_one] < time[min])
                min = counter_one;
        time[min] += work_time;
    }

    for(max = 0,counter = 1;counter < machine;counter++)
        if (time[max] < time[counter])
            max = counter;
    printf("%d\n",time[max]);
}
