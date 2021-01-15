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
                temp[counter] = (input[counter] - '0'); //將input的每個數字從字元轉換成數字
            for (counter = 0;counter < len;counter++)
                num |= (temp[counter] << (len - 1 - counter));  //以位元運算(OR)來做加總，index是counter的數字實際上是第(len - 1 - counter)位數，所以做左移的動作
            sum += num; //將求得的數字加總
        }
        printf("%d\n",sum); //印出答案
    }
    return 0;
}
