#include <stdio.h>
#define MAX 4096

int main()
{
    int num[3];
    scanf("%d%d%d",&num[2],&num[1],&num[0]);

    int tmp[MAX],result[MAX],times,highest = 0;
    scanf("%d",&times);
    tmp[0] = 1;
    for(int counter = 0;counter < times;counter++)
    {
        for(int counter_one = 0;counter_one <= highest + 2;counter_one++)
            result[counter_one] = 0;
        for(int counter_one = 0;counter_one <= highest;counter_one++)
            for(int count = 0;count < 3;count++)
                result[counter_one + count] += tmp[counter_one] * num[count];
        for(int counter_one = 0;counter_one <= highest + 2;counter_one++)
            tmp[counter_one] = result[counter_one];
        highest += 2;
    }
    for(int counter = highest;counter >= 0;counter--)
    {
        printf("%d",result[counter]);
        if(counter)
            printf(" ");
    }
    printf("\n");

    return 0;
}
