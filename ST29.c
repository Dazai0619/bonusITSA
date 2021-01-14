#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[1050];
    while (scanf("%s",input) != EOF)
    {
        int counter,count,num_counter = 0,output_counter = 0;
        char output[1050],num[10];

        for (count = 0; count < strlen(input);count++)
        {
            if (input[count] >= '0' && input[count] <= '9')
            {
                num[num_counter++] = input[count];
                num[num_counter] = '\0';
            }
            else
            {
                output[output_counter++] = input[count];
                output[output_counter] = '\0';
                if ((input[count+1] >= '0' && input[count+1] <= '9') || input[count+1] == '\0')
                {
                    counter = atoi(num);
                    while (counter--)
                        printf("%s",output);
                    num_counter = 0;
                    output_counter = 0;
                }
            }
        }
        printf("\n");
    }
}
