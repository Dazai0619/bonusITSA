#include <stdio.h>

int main()
{
    long input_one,input_two;
    while (scanf("%ld%ld",&input_one,&input_two) == 2)  //若偵測到有2個輸入後
        printf("%ld\n",input_one - input_two > 0 ? (input_one - input_two) : (input_two - input_one));  //判斷input_one - input_two是否大於0，是則輸出input_one - input_two，否則反之
    return 0;
}
