#include <stdio.h>

int main()
{
    int days;
    scanf("%d",&days);

    int year[days],month[days],date[days];
    for (int counter = 0;counter < days;counter++)
        scanf("%d %d %d",&year[counter],&month[counter],&date[counter]);

    int ans[days];
    for(int counter = 0;counter < days;counter++)
    {
        if(month[counter] == 1 || month[counter] == 2)
        {
            month[counter] += 12;
            year[counter]--;
        }
        ans[counter] = (date[counter] + 2 * month[counter] + 3 * (month[counter] + 1) / 5 + year[counter] + year[counter] / 4 - year[counter] / 100 + year[counter] / 400) % 7;
    }
    for(int counter = 0;counter < days;counter++)
        printf("%d\n",((ans[counter] + 2) % 7));
    return 0;
}
