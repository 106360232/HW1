#include <stdlib.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("��J2�Ӽƭ�");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("%d��%d������", a, b);
	}
	else
	{
		printf("%d����%d������", a, b);
	}
	system("pause");
	return 0;
}