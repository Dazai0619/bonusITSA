#include<stdio.h>

int main()
{
    int perfect[7] =    //先將perfect number寫出來
    {
        6, 28, 496,
        8128, 33550336,
        8589869056,
        137438691328
    };

    int element;
    scanf("%d",&element);
    int ans[element];
    for (int counter = 0;counter < element ;counter++)  //將紀錄的flag歸零
        ans[counter] = 0;
    for (int counter = 0 ;counter < element ;counter++)
    {
        int num;
        scanf("%d",&num);
        for (int counter_one = 0;counter_one < 7;counter_one++) //判斷是否為perfect number
            if (num == perfect[counter_one])    //如果是
                ans[counter] = 1;   //註記
    }
    for (int counter = 0 ; counter < element ; counter++)
    {
        if (ans[counter] == 1)
            printf("perfect\n");
        else
            printf("nonperfect\n");
    }
    return 0;
}
