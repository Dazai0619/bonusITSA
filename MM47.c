#include <stdio.h>

int main()
{
    int adult_num,adult_fare,children_num,children_fare,senior_num,senior_fare;
    
    //依序讀取人數及所需費用
    scanf("%d%d",&adult_num,&adult_fare);
    scanf("%d%d",&children_num,&children_fare);
    scanf("%d%d",&senior_num,&senior_fare);

    int sum = adult_num * adult_fare + children_num * children_fare + senior_num * senior_fare; //計算總費用
    printf("%d\n",sum);

    return 0;
}
