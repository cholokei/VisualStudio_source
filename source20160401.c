#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

// void main(void) �̷��� ���� return 0 �� �Ƚᵵ ��
int main(void)
{	
	/* �ּ� ������ */
	int a = 1, b = 2;
	printf("���� a�� �� = %d\n", a);
	printf("���� b�� �� = %d\n", b);
	printf("���� a�� �ּ� = %p\n", &a); // %p�� ������ ����� �ּ� ��� 
	printf("���� b�� �ּ� = %p\n", &b); // ���ۻ���(&) �ݵ�� ���̱�


	/* feet ��ȯ */
	float a, b, feet = 30.48;
	printf("cm���� �Է� : ");
	scanf("%f", &a); // %, &
	b = a / feet;
	printf("�Է��� ���� %.4f feet\n", b);


	/* �ִ� ���ϱ� */
	int a, b, c, max;
	printf("ù��° ���� �Է� : ");
	scanf("%d", &a);
	printf("�ι�° ���� �Է� : ");
	scanf("%d", &b);
	printf("����° ���� �Է� : ");
	scanf("%d", &c);
	max = (a >= b ? a : b);
	max = (max >= c ? max : c);
	// �ٸ����
	// max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
	printf("���� ū ���� %d\n", max);


	/* ���� ���� */
	int input, a1, b1, c1, d1;
	printf("�ݾ� �Է� : ");
	scanf("%d", &input);
	a1 = input / 50000;
	b1 = (input - a1 * 50000) / 10000;
	c1 = (input - a1 * 50000 - b1 * 10000) / 5000;
	d1 = (input - a1 * 50000 - b1 * 10000 - c1 * 5000) / 1000;
	// �ٸ� ���
	// b1 = (input % 50000) / 10000;
	// c1 = (input % 10000) / 5000;
	// d1 = (input % 5000) / 1000;
	printf("%d���� 5���� %d��, ���� %d��, 5õ�� %d��, õ�� %d��\n", input, a1, b1, c1, d1);


	/* ���� ���� �Ǻ� */
	int number;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);
	if (number > 0) {
		printf("�Էµ� ������ ����Դϴ�\n");
	}
	else if (number == 0) {
		printf("�Էµ� ������ 0�Դϴ�\n");
	}
	else {
		printf("�Էµ� ������ �����Դϴ�\n");
	}


	/* switch ���� */
	char ch;
	ch = getchar();
	switch (ch)
	{
	case 'a':
	case 'A':
		printf("a �Ǵ� A�� �Է��߽��ϴ�\n");
		break; // break�� ����� �Ʒ� �κб��� ��µ�
	default:
		printf("a, A �̿��� ���ڸ� �Է��߽��ϴ�\n");
	}


	/* 1���� n������ ������ �� - while �� */
	int i = 1, sum = 0, n;
	printf("���� ���� n �Է� : ");
	scanf("%d", &n); // %, &
	printf("�ʱ� : i�� %d�� �� sum�� %d\n", i, sum);
	while (i <= n) {
		printf("%d��° �ݺ��� ����\n", i);
		printf("���� �� : i�� %d�� �� sum�� %d\n", i, sum);
		sum += i;
		i++;
		printf("���� �� : i�� %d�� �� sum�� %d\n", i, sum);
	}
	printf("-----------------------------\n");
	printf("1���� %d������ ������ ���� %d\n", n, sum);

	return 0;
}

/*
������ �ǹ��ְ� ����
bill_50000, bill_10000 ��
*/