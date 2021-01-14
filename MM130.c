#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int num[100];
    int counter = 0;
    while (scanf("%d",&num[counter]) != EOF)
        counter++;
    qsort(num,counter,sizeof(num[0]),cmp);

    if (counter % 2 != 0)
        printf("%d\n",num[(counter - 1) / 2]);
    else
    {
        float mid = (num[(counter / 2) - 1] + num[(counter / 2)]) / 2 ;
        printf("%f\n",mid);
    }
    return 0;
}
