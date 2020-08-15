#include <stdio.h>
#define SWNM 2
#define VAL_A 2
#define VAL_B 4

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int (*func[4])(int, int) = { add, sub, mul, div };
	switch (SWNM)
	{
	case 0:
		printf("%d", (*func[SWNM])(VAL_A, VAL_B));
		break;
	case 1:
		printf("%d", (*func[SWNM])(VAL_A, VAL_B));
		break;
	case 2:
		printf("%d", (*func[SWNM])(VAL_A, VAL_B));
		break;
	case 3:
		printf("%d", (*func[SWNM])(VAL_A, VAL_B));
		break;
	default:
		printf("choose 0~3");
		break;
	}
}