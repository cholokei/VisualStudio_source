#include <stdio.h>

/* �̸��� ���� */
int test123(int);

int main(void)
{
	
	int a = 5;
	int b = 7;
	printf("a = %d \nb = %d \n", a, b);
	b = test123(a);
	printf("a = %d \nb = %d \n", a, b);
	b = test123(b);
	printf("a = %d \nb = %d \n", a, b);
	
	printf("�ȳ��ϼ���\ntest\n");
	return 0;
}

/* ������ �̸��� ���� �Լ��� �ؿ��� ���� */

int test123(int num)
{
	num = num * 4;
	return num;
}
