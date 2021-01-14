#include <stdio.h>

int main()
{
    int count[3010] = {0},num[3010],absolute,len,flag = 0,counter;
    scanf("%d",&len);
    for (counter = 0;counter < len;counter++)
        scanf("%d",num + counter);
    for (counter = 0;counter < (len - 1);counter++)
    {
        absolute = (num[counter] > num[counter + 1]) ? num[counter] - num[counter + 1] : num[counter + 1] - num[counter];
        if (absolute < len)
            count[absolute]++;
        else
            break;
    }
    for(counter = 1;counter < len;counter++)
    {
        if (count[counter] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Not jolly\n");
    else
        printf("Jolly\n");

    return 0;
}
