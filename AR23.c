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
            if (isalpha(input[counter]))    //確認是否為字母
            {
                if ((input[counter]>='A' && ((input[counter] + 13) <= 'Z')) || (input[counter] >= 'a' && ((input[counter] + 13) <= 'z')))   //如果該字母在轉換後仍是字母
                    printf("%c",input[counter] + 13);   //'A'跟'N'中間差了13
                else
                    printf("%c",input[counter] + 13 - 26);		//減去26使其仍表示字母
            }
            else
                printf("%c",input[counter]);
        }
        printf("\n");
    }
    return 0;
}
