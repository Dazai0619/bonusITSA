#include <stdio.h>

int main()
{
    int element,pow;
    scanf("%d",&element);
    while (scanf("%d",&element) == 1)   //因為是一行一行輸出所以覆蓋前面的部分(不需要)
    {
        for (int num = 2;element >= num;num++)  //num需小於element(找element的因數)
        {
            pow = 0;
            while (element % num == 0)  //若num為element的因數
            {
                element /= num; //除以num
                pow++;  //該num的次方數+1
            }
            if (pow > 0)
            {
                printf("%d",num);
                if (pow > 1)    //若次方大於1
                    printf("^%d",pow);  //印出次方數
                if (element > 1)    //若element還未被整除
                    printf("*");    //繼續找下一個因數
                else    //若element已被整除
                    printf("\n");   //換行
            }
        }
    }
    return 0;
}
