#include <stdio.h>

int main()
{
    int adult_num,adult_fare,children_num,children_fare,senior_num,senior_fare;

    scanf("%d%d",&adult_num,&adult_fare);
    scanf("%d%d",&children_num,&children_fare);
    scanf("%d%d",&senior_num,&senior_fare);

    int sum = adult_num * adult_fare + children_num * children_fare + senior_num * senior_fare;
    printf("%d\n",sum);

    return 0;
}
