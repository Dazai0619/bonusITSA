#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[10000];
    while (fgets(input,10000,stdin))
    {
        int len = strlen(input);
        for (int counter = 0;counter < len;counter++)
        {
            if (isalpha(input[counter]))
            {
                if ((input[counter]>='A' && ((input[counter] + 13) <= 'Z')) || (input[counter] >= 'a' && ((input[counter] + 13) <= 'z')))
                    printf("%c",input[counter] + 13);
                else
                    printf("%c",input[counter] + 13 - 26);
            }
            else
                printf("%c",input[counter]);
        }
        printf("\n");
    }
    return 0;
}