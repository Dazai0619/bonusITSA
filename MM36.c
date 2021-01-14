#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
	if (num == 1)
		return 0;
    else
    {
		for (int counter = 2;counter < num;counter++){
			if (num % counter == 0)
				return 0;
		}
	}
	return 1;
}

int main()
{
	int number;
	scanf("%d",&number);
	while (number != 0)
    {
        int count = 0;
        for (int counter = 2;counter < number;counter++)
            if (is_prime(counter))
                count++;
        printf("%d\n",count);
        scanf("%d",&number);
    }
    return 0;
}


