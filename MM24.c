#include <stdio.h>

int main()
{
    long input_one,input_two;
    while (scanf("%ld%ld",&input_one,&input_two) == 2)
        printf("%ld\n",input_one - input_two > 0 ? (input_one - input_two) : (input_two - input_one));
    return 0;
}
