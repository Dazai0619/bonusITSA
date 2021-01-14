#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int num,tmp,first = 1;
    bool check[100000] = {0};

    scanf("%d",&num);
    while (scanf("%d",&tmp) == 1)
        check[tmp] = true;
    for (int counter = 1;counter <= num;counter++)
    {
        if (!check[counter])
        {
            if(first)
                printf("%d",counter);
            else
                printf(" %d",counter);

            first = 0;
        }
    }
    printf("\n");
    return 0;
}
