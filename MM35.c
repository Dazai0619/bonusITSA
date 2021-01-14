#include <stdio.h>

int main()
{
    int element,pow;
    scanf("%d",&element);
    while (scanf("%d",&element) == 1)
    {
        for (int num = 2;element >= num;num++)
        {
            pow = 0;
            while (element % num == 0)
            {
                element /= num;
                pow++;
            }
            if (pow > 0)
            {
                printf("%d",num);
                if (pow > 1)
                    printf("^%d",pow);
                if (element > 1)
                    printf("*");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
