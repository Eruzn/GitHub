#include <stdio.h>

float taxifee(int time, int miles)
{
	float money;
	if (miles <= 3)
		money = 13 + 1;
  else
		if (time >= 23 || time < 5)
			money = 13 + 1 + (miles - 3)*2.3*1.2;
		else
			money = 13 + 1 + (miles - 3)*2.3;
	return money;
}

int main()
{
	printf("总共车费为%.1f元\n", taxifee(9, 12) + taxifee(18, 12));
	return 0;
}
