#include <stdlib.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("輸入一個數值:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf("%d為偶數", a);
	}
	if (b == 1)
	{
		printf("%d為奇數", a);
	}
	system("pause");
	return 0;
}