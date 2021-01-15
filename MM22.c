#include <stdio.h>

int main()
{
    int count[3010] = {0},num[3010],absolute,len,flag = 0,counter;
    scanf("%d",&len);   //有len個數
    for (counter = 0;counter < len;counter++)
        scanf("%d",num + counter); 
    for (counter = 0;counter < (len - 1);counter++)
    {
        absolute = (num[counter] > num[counter + 1]) ? num[counter] - num[counter + 1] : num[counter + 1] - num[counter];   //若num[counter] > num[counter + 1]：absolute = num[counter] - num[counter + 1]；否則為num[counter + 1] - num[counter]
        if (absolute < len) //若absolute小於數字總數(差須在1~(數字總數 - 1)之間)
            count[absolute]++;  //用absolute當作檢查的index值並+1
        else    
            break;
    }
    for(counter = 1;counter < len;counter++)
    {
        if (count[counter] == 0)    //若有在1~(len - 1)之間沒出現的差值
        {
            flag = 1;   //不是jolly 
            break;
        }
    }
    if (flag)
        printf("Not jolly\n");
    else
        printf("Jolly\n");

    return 0;
}
