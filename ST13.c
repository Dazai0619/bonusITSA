#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 10000

int main()
{
    char string[MAX],answer[MAX];
    int count[30] = {0},tmp[30] = {0},num,is_ans_flag,counter;
    scanf("%s",string);

    for (counter = 0;counter < strlen(string);counter++)    //紀錄欲比較的單字的每個字母數
    {
        if (isupper(string[counter]))   //若此字母為大寫
            count[(string[counter] - 'A')]++;   //相對應的字母計數器+1
        else    //此字母為小寫
            count[(string[counter] - 'a')]++;   //相對應的字母計數器+1
    }

    scanf("%d",&num);
    while (num--)
    {
        is_ans_flag = 1;
        scanf("%s",answer);
        for (counter = 0;counter < 26;counter++)    
            tmp[counter] = count[counter];

        for (counter = 0;counter < strlen(answer);counter++)
        {
            if (isupper(answer[counter]))   //若此字母為大寫
                tmp[(answer[counter] - 'A')]--; //用string的字母數-1
            else    //此字母為小寫
                tmp[(answer[counter] - 'a')]--; //用string的字母數-1
        }
        for (counter = 0;counter < 26;counter++)    //如果字母數相同最後應該皆為0
        {
            if (tmp[counter])   //如果不為0
                is_ans_flag = 0;    //不同
        }

        if (is_ans_flag)    //如果相同
            printf("%s\n",answer);  //印出字串
    }
}
