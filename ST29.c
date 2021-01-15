#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[1050];
    while (scanf("%s",input) != EOF)
    {
        int counter,count,num_counter = 0,output_counter = 0;
        char output[1050],num[10];

        for (count = 0; count < strlen(input);count++)
        {
            if (input[count] >= '0' && input[count] <= '9') //如果是數字
            {
                num[num_counter++] = input[count];  //放入num中
                num[num_counter] = '\0';    //字串結束
            }
            else    //如果是字母
            {
                output[output_counter++] = input[count];    //放入output中
                output[output_counter] = '\0';  //字串結束
                if ((input[count+1] >= '0' && input[count+1] <= '9') || input[count+1] == '\0') //如果input[count]下一個是數字或是字串結束
                {
                    counter = atoi(num);    //將num轉成整數存至counter裡
                    while (counter--)
                        printf("%s",output);    //印出counter個output
                    
                    //計數器歸零
                    num_counter = 0;
                    output_counter = 0;
                }
            }
        }
        printf("\n");
    }
}
