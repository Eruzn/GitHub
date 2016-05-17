#include <stdio.h>

float taxifee(int time, int miles)
{
	float money;
	if (miles <= 3)
	{
		money = 13 + 1;
		printf("起步车费为%f\n元", money);
	}
	else
	{
		if (time >= 23 || time < 5)
		{
			money = 13 + 1 + (miles - 3)*2.3*1.2;
			printf("夜间车费为%f\n元", money);
		}
		else
		{
			money = 13 + 1 + (miles - 3)*2.3;
			printf("日间车费为%f\n元", money);
		}
	}
	return money;
}

int main()
{
	printf("总共车费为%.1f\n元", taxifee(9, 12) + taxifee(18, 12));
	return 0;
}
