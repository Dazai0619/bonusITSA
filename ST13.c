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

    for (counter = 0;counter < strlen(string);counter++)
    {
        if (isupper(string[counter]))
            count[(string[counter] - 'A')]++;
        else
            count[(string[counter] - 'a')]++;
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
            if (isupper(answer[counter]))
                tmp[(answer[counter] - 'A')]--;
            else
                tmp[(answer[counter] - 'a')]--;
        }
        for (counter = 0;counter < 26;counter++)
        {
            if (tmp[counter])
                is_ans_flag = 0;
        }

        if (is_ans_flag)
            printf("%s\n",answer);
    }
}
