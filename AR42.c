#include <stdio.h>

#define MAX 1024
#define MIN -1

int main()
{
    int num,max = MIN,min = MAX;
    for (int counter = 0;counter < 10;counter++)
    {
        scanf("%d",&num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("Largest number = %d\n",max);
    printf("Smallest number = %d\n",min);

    return 0;
}
