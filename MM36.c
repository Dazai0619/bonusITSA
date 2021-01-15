#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)	//判斷是否為質數
{
	if (num == 1)	//若num為1
		return 0;	//不是質數
    else
    {
		for (int counter = 2;counter < num;counter++)
		{
			if (num % counter == 0)	//若可被小於num的數字整除
				return 0;	//不是質數
		}
	}
	return 1;
}

int main()
{
	int number;
	scanf("%d",&number);
	while (number != 0)	//若number為0則代表停止輸入
    {
        int count = 0;
        for (int counter = 2;counter < number;counter++)
            if (is_prime(counter))	//如果counter是質數
                count++;	//質數個數+1
        printf("%d\n",count);	//印出小於number的質數個數
        scanf("%d",&number);	//繼續讀取number
    }
    return 0;
}


