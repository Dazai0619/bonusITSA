#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int element;
    char input[20];
    scanf("%d",&element);

    while (element--)
    {
        int sum = 0,counter,count,len;
        for (count = 0;count < 2;count++)
        {
            long num = 0,temp[20];
            scanf("%s",input);
            len = strlen(input);
            for (counter = 0;counter < len;counter++)
                temp[counter] = (input[counter] - '0');
            for (counter = 0;counter < len;counter++)
                num |= (temp[counter] << (len - 1 - counter));
            sum += num;
        }
        printf("%d\n",sum);
    }
    return 0;
}
