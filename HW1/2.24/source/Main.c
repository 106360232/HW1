#include <stdlib.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("��J�@�Ӽƭ�:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
	{
		printf("%d������", a);
	}
	if (b == 1)
	{
		printf("%d���_��", a);
	}
	system("pause");
	return 0;
}