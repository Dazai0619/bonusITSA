#include <stdio.h>

int main()
{
    double temperature;	
    while (scanf("%lf",&temperature) == 1)	//若偵測到一個輸入
    {
        printf("Fahrenheit = %.2lf\n",temperature*((double)9 / (double)5) + 32);	//印出華氏的度數(攝氏 * (9/5) + 32 = 華氏)
        printf("Absolute temperature = %.2lf\n",temperature + 273.15);	//印出絕對溫度度數(絕對溫度 = 攝氏 * 273.15)
    }
    return 0;
}
