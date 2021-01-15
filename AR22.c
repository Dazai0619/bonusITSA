#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];

    scanf("%s",input);
    int len = strlen(input);

    char output[1000];
    for(int counter = 0;counter < len;counter++)
        output[counter] = input[counter] - 3;   //將每個字母decode
    for(int counter = 0;counter < len;counter++)
        printf("%c",output[counter]);

    printf("\n");

    return 0;
}
