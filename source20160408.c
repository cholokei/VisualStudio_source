#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	for (i = 0, j = 0; i + j < 20; i++, j++) // �����ݷ� ; ��������
	{
		printf("i=%d\nj=%d\n", i, j);
	}


	int i, n, oddsum = 0;
	printf("���� ���� n�� �Է��ϼ��� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) // �����ݷ� ; ��������
	{
		if (i % 2 == 0) // ¦������ �Ǻ��ϱ�
			continue;
		oddsum += i;
	}
	printf("n = %d, i = %d, oddsum = %d\n", n, i, oddsum);
	// 1���� n������ �� �߿��� Ȧ���� �� oddsum �� ���


	int year;
	printf("���� �Է� : ");
	scanf("%d", &year);
	if (year % 4 == 0 && !(year % 100 == 0))
	{
		printf("%d���� �����Դϴ�\n", year);
	}
	else if (year % 400 == 0)
	{
		printf("%d���� �����Դϴ�\n", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�\n", year);
	}


	int a;
	printf("���� �Է� : ");
	scanf("%d", &a);
	if (a > 0)
		printf("���\n");
	else if (a == 0)
		printf("��\n");
	else
		printf("����\n");


	int score;
	printf("���� �Է� : ");
	scanf("%d", &score);
	if (score >= 90) // ������ ��쿡�� �߰�ȣ {} �Ƚᵵ ��
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("F\n");


	char c;
	int a, b;
	printf("������ �Է� (+ or -) : ");
	scanf("%c", &c);
	printf("�� �� �Է� (ex. 5 9) : ");
	scanf("%d %d", &a, &b); // & ������ ����
	if (c == '+') // = ��ȣ 2�� ���� ==
		printf("%d + %d = %d\n", a, b, a + b);
	else if (c == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	else
		printf("�Է��� �����ڰ� �ùٸ��� �ʽ��ϴ�.\n");


	int won_i, won_f;
	printf("������ ��ǰ�� ���� �Է� : ");
	scanf("%d", &won_i); // & ������ ����
	if (won_i < 30000 && won_i >= 0)
		won_f = won_i + 2500;
	else if (won_i >= 30000 && won_i < 50000)
		won_f = won_i; // �����ݷ� ; ������ ����
	else if (won_i >= 50000)
		won_f = won_i * 0.9;
	else
		printf("��ǰ ������ �ùٸ��� �ʽ��ϴ�.\n");

	printf("���� ���� �ݾ��� \\ %d �Դϴ�.\n", won_f);

	
	int score01, score02, score03;
	float mean;
	char grade;
	printf("ù��° ���� ���� �Է� : ");
	scanf("%d", &score01);
	printf("�ι�° ���� ���� �Է� : ");
	scanf("%d", &score02);
	printf("����° ���� ���� �Է� : ");
	scanf("%d", &score03);
	
	mean = (score01 + score02 + score03) / 3.0; // �Ҽ��� 3.0 ���̱�
	if (mean >= 90) // ������ ��쿡�� �߰�ȣ {} �Ƚᵵ ��
		grade = 'A';
	else if (mean >= 80)
		grade = 'B';
	else if (mean >= 70)
		grade = 'C';
	else if (mean >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("����� %.2f ����� %c\n", mean, grade);


	return 0;
}