#include <stdio.h>

int main()
{
    int element;
    scanf("%d",&element);
    int fac = 1;
    int ans[element];

    for (int counter = 0;counter < element;counter++)
    {
        int num;
        scanf("%d",&num);
        for (int counter_one = 1;counter_one <= num;counter_one++)  //相乘
            fac *= counter_one;
        ans[counter] = fac;
        fac = 1;
    }

    for (int counter = 0;counter < element;counter++)
        printf("%d\n",ans[counter]);

    return 0;
}
