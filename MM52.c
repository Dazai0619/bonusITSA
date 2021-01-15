#include<stdio.h>

int main()
{
    long long int perfect[7] =  //先將perfect number準備好
    {
        6, 28, 496,
        8128, 33550336,
        8589869056,137438691328
    };

    int num;
    scanf("%d",&num);

    //印出所有小於num的perfect number
    for (int counter = 0;counter < 7;counter++) 
        if (perfect[counter] < num) 
            printf("%d\n",perfect[counter]);

    return 0;
}
