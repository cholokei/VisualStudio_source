// #include ������ ��ũ�� ��� ���� ���� - scanf ��� �޽��� �ذ�
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	/* �̽������� ���� */
	printf("ĳ���� ���� - Ŀ���� ���� ���� �� ������ �̵�\r\n"); // \r
	printf("���� ����\n����Ű\n"); // \n
	printf("��Ű\t��Ű\n"); // \t
	printf("Ư������ \"ū����ǥ\" \'��������ǥ\' �齽����\\ \n"); /* \" \' \\ */
	printf("�齺���̽�\b�齺���̽�\n"); // \b
	printf("�˶� - �߼Ҹ�\a\n"); // \a

	/* printf �ʵ��� �����ϱ� */
	printf("/%10d/ /%10d/ /%10d/ \n", 100, 200, 300);
	printf("/%-10d/ /%-10d/ /%-10d/ \n", 100, 200, 300);
	printf("/%+10d/ /%+10d/ /%+10d/ \n", 100, 200, 300);

	/* �ִ� ��� �ڸ� �� ���� */
	printf("/%.8d/ \n", 123);
	printf("/%10.8d/ \n", 123);

	/* scanf �Լ� */
	printf("������ �� �� ���� �Է��ϼ���\n");
	int val_a, val_b, sum;
	scanf("%d%d", &val_a, &val_b);
	sum = val_a + val_b;
	printf("%d + %d = %d \n", val_a, val_b, sum);
	
	printf("�������� �Է��ϼ���");	
	int radius;
	scanf("%d\n", &radius);

	return 0;
}