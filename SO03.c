#include <stdio.h>
#include <stdlib.h>
#define NUM 10010

int compare(const void *a,const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    while(1)
    {
        int num,enemy[NUM],solder[NUM],count = 0,counter,counter_one;
        scanf("%d",&num);
        if (num == 0)
            break;
        for (counter = 0;counter < num;counter++)
            scanf("%d",enemy + counter);
        for(counter = 0;counter < num;counter++)
            scanf("%d",solder + counter);
        qsort(enemy,num,sizeof(int),compare);
        qsort(solder,num,sizeof(int),compare);
        counter = 0;
        counter_one = 0;
        while (counter_one < num)
        {
            if (enemy[counter] < solder[counter_one])
            {
                count++;
                counter++;
                counter_one++;
            }
            else
                counter_one++;
        }
        printf("%d\n",count);
    }
    return 0;
}
