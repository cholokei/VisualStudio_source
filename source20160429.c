#include <stdio.h>

#define NUM 6
#define SIZE 5

int main(void)
{
	int i, m, n;
	int array[NUM] = { 1, 2, 3, 4, 5, 6 };
	for (i = 0; i <= (NUM - 1); i++) // 0���� ���۵�
	{
		printf("%d\n", array[i]);
	}




	int k;
	int grade[5];
	
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	for (k = 0; k < 5; k++)
	{
		grade[k] = 10 * k + 10;
		printf("grade[%d]=%d\n", k, grade[k]);
	}




	int p;
	int gradeee[SIZE];
	printf("5���� ������ �Է��Ͻÿ�\n");

	for (p = 0; p < SIZE; p++) // p <= (SIZE - 1) ��ſ� p < SIZE ���
		scanf("%d", &gradeee[p]); // p���� �����ϱ�
	for (p = 0; p < SIZE; p++)
		printf("grade[%d]=%d\n", p, gradeee[p]);




	int a[5] = { 10, 20, 45, 3, 100 };
	int b[5];
	int kk, sum = 0, pt, max = a[0], min = a[0], max_pt, min_pt;
	for (kk = 0; kk < 5; kk++)
	{
		sum += a[kk];
		if (a[kk] == 45)
			pt = kk;
		if (a[kk] > max) {
			max = a[kk];
			max_pt = kk;
		}
		if (a[kk] < min) {
			min = a[kk];
			min_pt = kk;
		}
	}
	printf("��� ������ �� : %d\n", sum);
	printf("45�� �ִ� ��ġ : %d\n", pt);
	printf("�ִ��� �ִ� ��ġ : %d��°\n�ִ� : %d\n", max_pt + 1, max);
	printf("�ּڰ��� �ִ� ��ġ : %d��°\n�ּڰ� : %d\n", min_pt + 1, min);




	b[0] = min;
	b[4] = max;
	for (kk = 0; kk < 5; kk++)
	{
		if ((kk < 4) && (a[kk + 1] >= b[kk]))
			b[kk + 1] = a[kk + 1];
		printf("%d ", b[kk]);
	}




	int kkk;
	int c_ans[10] = { 1, 2, 3, 4, 1, 1, 2, 4, 3, 3 };
	int s_ans[10]; // �տ� int ���̱�
	int ans_sum = 0;
	for (kkk = 0; kkk < 10; kkk++)
	{
		printf("%d�� ���� �� �Է� : ", kkk + 1);
		scanf("%d", &s_ans[kkk]); // & ���̱�
		if (s_ans[kkk] == c_ans[kkk])
			ans_sum += 10;
	}
	printf("���� : %d\n", ans_sum);


////////////////////////////////////////////////////////

	// *** 0���� 9������ ���� 100���� ���� ***
	int a[100];
	int num[10] = { 0 };
	int ij, jj, t, num_max, a_sum = 0, tt;
	float a_mean;
	srand(time(NULL)); // �Ź� ���� ���� �޶����� ��
	for (ij = 0; ij < 100; ij++) // ���� 100�� �����ϱ�
	{
		a[ij] = rand() % 10;
	}

	for (jj = 0; jj < 100; jj++)
	{
		for (t = 0; t < 10; t++)
		{
			if (a[jj] == t)
				num[t] += 1;
		}
	}

	num_max = num[0];

	// �׷��� ��� �κ�
	for (ij = 0; ij < 10; ij++)
	{
		printf("%d\t%2d\t", ij, num[ij]);
		for (jj = 1; jj <= num[ij]; jj++)
			printf("*");
		printf("\n");
	}

	// �󵵰� ���� ���� ��
	for (t = 0; t < 10; t++)
	{
		if (num_max < num[t]) {
			num_max = num[t];
			tt = t;
		}
	}
	printf("�󵵰� ���� ���� �� : %d\t�� : %d\n", tt, num_max);


	// ��ձ��ϱ� �� ���ϱ�
//	for (ij = 0; ij < 100; ij++)



	return 0;
}