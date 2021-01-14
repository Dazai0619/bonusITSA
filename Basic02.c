#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mile;
    while (scanf("%d",&mile) != EOF)
    {
        double km;
        km = mile * 1.6;
        printf("%.1lf\n",km);
    }
    return 0;
}
