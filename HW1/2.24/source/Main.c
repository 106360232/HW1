#include <stdlib.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("块计:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf("%d案计", a);
	}
	if (b == 1)
	{
		printf("%d计", a);
	}
	system("pause");
	return 0;
}