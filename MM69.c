#include <stdio.h>

int main()
{
    float height,weight;
    scanf("%f %f",&height,&weight);
    height = height / 100;  //輸入為公分，需換算為公尺
    float bmi;
    bmi = weight / (height * height);   //計算BMI值
    printf("%.1f ",bmi);
    
    //印出與BMI相對應的結果
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
