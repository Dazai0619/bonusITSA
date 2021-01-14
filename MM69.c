#include <stdio.h>

int main()
{
    float height,weight;
    scanf("%f %f",&height,&weight);
    height = height / 100;
    float bmi;
    bmi = weight / (height * height);
    printf("%.1f ",bmi);
    if (bmi < 18.5)
        printf("underweight\n");
    else if (bmi < 24)
        printf("normal\n");
    else if (bmi < 27)
        printf("overweight\n");
    else if (bmi < 30)
        printf("mild obesity\n");
    else if (bmi < 35)
        printf("moderate obesity\n");
    else
        printf("severe obesity\n");
}
