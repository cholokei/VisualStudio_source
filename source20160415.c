#include <stdio.h>

int main(void)
{
	int sum = 0, n;
	for (n = 0; sum + n < 10000; n++) // sum < 10000 �� ��� 10000 �������� ������ �����ϹǷ� sum + n�� ����ȴ�
	{
		sum = sum + n; // �����ݷ� ; ���̱�
	}
	printf("sum = %d\n", sum);
	printf("n = %d\n", n - 1); // -1 ���ֱ�


	int i = 1; // ���� �ʱ�ȭ ���ֱ�
	while (i <= 100)
	{
		if (i % 3 == 0)
		printf("%d\t", i);
		i++;
	}


	int j, m = 1;
	for (j = 1; j <= 5; j++)
	{
		m = m * j;
		if (j != 5)
			printf("%d * ", j);
		else
			printf("%d = %d\n", j, m);
	}


	int multiply, k = 1;
	printf("��� : ");
	scanf("%d", &multiply); // % -> &
	while (k <= 10)
	{
		printf("%d * %d = %d\n", multiply, k, multiply * k);
		k++;
	}


	int score, sum = 0, ii;
	float mean;
	for (ii = 1; ii <= 5; ii++)
	{
		printf("���� �Է� : ");
		scanf("%d", &score);
		sum = sum + score; // score ������ �ټ��� �� �ʿ� ����
	}
	mean = sum / 5.0;
	printf("���� : %d\n", sum);
	printf("��� : %.2f\n", mean); // %d�� %f �����ϱ�


	int jj = 1;
	char ch = 0;
	while (ch != '\n') // enter Ű �̿��ϱ�, ch ���� �ʱ�ȭ�ϱ�
	{
		scanf("%c", &ch);
		jj++;
	}
	printf("�Է��� ������ ������ %d��\n", jj - 2);


	int kk, r;
	int fff;
	printf("���� : ");
	scanf("%d", &fff);
	for (kk = 1; kk <= fff; kk++)
	{
		for (r = 1; r <= kk; r++)
		{
			printf("*");
		}
		printf("\n");
	}


	int p, q, s, t;
	int ff;
	printf("���� : "); // ���� �Ƕ�̵带 ����� ���ΰ�
	scanf("%d", &ff);
	for (p = 1; p <= ff; p++)
	{
		q = 1, s = 1, t = 1;
		while (s <= ff + 1 - p)
		{
			printf(" ");
			s++;
		}
		while (q <= (2 * p - 1)) // ���ϱ� ��ȣ * ���� �Ұ�
		{
			printf("*");
			q++;
		}
		while (t <= ff + 1 - p)
		{
			printf(" ");
			t++;
		}
		printf("\n");
	}

	return 0;
}