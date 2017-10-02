#include <stdlib.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("輸入2個數值");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("%d為%d的倍數", a, b);
	}
	else
	{
		printf("%d不為%d的倍數", a, b);
	}
	system("pause");
	return 0;
}