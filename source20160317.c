#include <stdio.h>

int main(void)
{
	int a; // ����
	a = 123; // �Ϲݹ�
	// �Ϲ������� ������ �Ϲݹ����� �տ� �����
	float b = 3.14F;
	char c = 'S';
	char d[19] = "sourcetest20160317"; // ����, ���ڴ� 1����Ʈ
	char e[7] = "�׽�Ʈ"; // �ѱ��� 2����Ʈ ����
	float sum = a + b;

	printf("a = %d\n", a);
	printf("b = %f\n", b);
	printf("c = %c\n", c);
	printf("d = %s\n", d);
	printf("e = %s\n", e);
	printf("a + b = %f\n", sum);

	return 0;
	// return ���� ������ ������� ����
}