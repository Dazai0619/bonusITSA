#include<stdio.h>

int main()
{
    int narray[20000],num,temp,first = 0,counter,counter_one;
    while (scanf("%d",&num) == 1)
    {
        if (num == 0)
            break;

        if (first)
            printf("\n");
        else
            first = 1;

        for (counter = 0;counter < num;counter++)
            scanf("%d",&(narray[counter]));

        for(counter = 0;counter < num - 1;counter++)
        {
            for(counter_one = 0;counter_one < num - counter - 1;counter_one++)
            {
                if (narray[counter_one + 1] > narray[counter_one])
                {
                    temp = narray[counter_one];
                    narray[counter_one] = narray[counter_one + 1];
                    narray[counter_one + 1] = temp;
                }
            }
        }

        for (counter = 0;counter < num;counter++)
            printf("%d %d\n",(counter + 1),narray[counter]);
    }
    return 0;
}
