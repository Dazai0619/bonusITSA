#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mile;
    while (scanf("%d",&mile) != EOF)
    {
        double km;
        km = mile * 1.6;    //1英哩=1.6公里
        printf("%.1lf\n",km);
    }
    return 0;
}
