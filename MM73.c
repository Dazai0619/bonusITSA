#include <stdio.h>

int main()
{
    double temperature;
    while (scanf("%lf",&temperature) == 1)
    {
        printf("Fahrenheit = %.2lf\n",temperature*((double)9 / (double)5) + 32);
        printf("Absolute temperature = %.2lf\n",temperature + 273.15);
    }
    return 0;
}
