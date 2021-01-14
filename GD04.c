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

int cmp(const void* a,const void* b)
{
    return (((Work*)a)->deadline - ((Work*)b)->deadline);
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
            scanf("%d",&(warray[counter].time));
        for (counter = 0;counter < num;counter++)
            scanf("%d",&(warray[counter].deadline));
        qsort(warray,num,sizeof(Work),cmp);
        for (counter = 0;counter < num;counter++)
        {
            sum += warray[counter].time;
            if (sum > warray[counter].deadline)
                break;
        }
        if (counter == num)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
