#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];
    while (scanf("%s",input) != EOF)
    {
        int len = strlen(input);
        int ans = 0;
        for(int i = 0;i < len;i++)
            ans = ans * 26 + (input[i] - 'A' + 1);
        printf("%d\n",ans);
    }
    return 0;
}
