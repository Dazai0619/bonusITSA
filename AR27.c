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
        check[tmp] = true;  //標記目前有的
    for (int counter = 1;counter <= num;counter++)
    {
        if (!check[counter])	//如果沒有	
        {
            if(first)	//如果是奇數個：不印空格
            {
                printf("%d",counter);
				first = 0;
			}
            else	//如果是偶數個：印空格
            {
                printf(" %d",counter);
				first = 1;
			}            
        }
    }
    printf("\n");
    return 0;
}
