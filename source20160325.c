#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	/* �ƽ�Ű �ڵ� ���� */
	printf("%c %d\n", 'A', 'A'); // ����(...�ƽ�Ű �ڵ�) ǥ���� �ݵ�� '��������ǥ' ����
	printf("%c %d\n", 'B', 'B'); // �׷��� ������ ���� ��ü�� �ν���
	printf("%c %d\n", 'a', 'a'); //
	printf("%c %d\n", 'b', 'b');
	printf("%c %d\n", '1', '1');
	printf("%c %d\n", '2', '2');
	// ���� ��ü�� ����(%c)�� ��½� �ƽ�Ű �ڵ尪�� �����ϴ� ���� ��µ�
	printf("%c %d\n", 65, 65);


	/* ���Ĺ��ڸ� �̿��� ��� */
	char ch1 = 'A';
	char ch2 = 0x41;
	char ch3;
	printf("ch1 = %c, %d, %o, %x\n", ch1, ch1, ch1, ch1);
	printf("ch2 = %c, %d, %o, %x\n", ch2, ch2, ch2, ch2);
	printf("ch3 = %c, %d, %o, %x\n", ch3, ch3, ch3, ch3);


	/* �ﰢ�� ���� ���ϱ� */
	float width, height, area;
	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf("%f", &width); // & ������ ����, scanf �Լ����� \n �ǵ��� ������� ����
	printf("���̸� �Է��ϼ��� : ");
	scanf("%f", &height);
	printf("\n�غ�(%f) X ����(%f) X 1/2\n", width, height);
	area = width * height * (float)1 / 2; // 1/2 ���� 0���� ������ ���� �������� �Ǽ��� �νĽ��Ѿ���
	// �ٸ���� : area = width * height / 2;
	printf("�ﰢ���� ���� = %f\n", area);


	int val1 = 5;
	int val2 = 3;
	val1 += 2;
	// �ٸ���� : val1 = val1 + 2;
	printf("val1 = %d\n", val1);
	val1 += val2;
	// �ٸ���� : val1 = val1 + val2;
	printf("val1 = %d\n", val1);


	int val = 5;
	printf("val : %d\n", val++);
	// ++ ��ȣ�� �ڿ� ���� ��� �켱 val�� ��� �Ŀ� �� ������ val+1 ����
	//printf("val : %d\n", val);
	//val = val + 1;

	printf("val : %d\n", ++val);
	// ++ ��ȣ�� �տ� ���� ��� val�� ��� ������ val+1
	//val = val + 1;
	//printf("val : %d\n", val);
	

	/* �� �������� ���� �� */
	int x = 5, y = 10, z;
	// OR || �� �� �ϳ��� ���̸� ������ ��, ���� ���̸� �޺κ��� ������ ����
	z = (x += 2) || (y += 1); // �� (x += 2)�� ���̹Ƿ� �̺κ��� �����򰡵Ǿ� ������� �ʴ´�
	printf("x = %d, y = %d\n", x, y); // �� y���� �������� �ʴ´�
	printf("z = %d\n", z);

	x = 5, y = 10;
	// AND && ���� �����̸� ������ ����
	z = (x += 2) && (y += 1); // ������???
	printf("x = %d, y = %d\n", x, y);
	printf("z = %d\n", z);


	int val = 60;
	int num;
	num = (val > 50 ? 10 : 20);
	printf("%d\n", num);


	/* ��� ����ϱ� */
	int a, b, c, sum1;
	float d, sum2;
	printf("���� �ο���? (������) : ");
	scanf("%d", &a);
	printf("�л� �ο���? (������) : ");
	scanf("%d", &b);
	printf("������������? (��:1 / �ƴϿ�:0) : ");
	scanf("%d", &c);
	d = (float)(c == 1 ? 0.9 : 1.0);
	sum1 = (a * 8000) + (b * 6000);
	sum2 = sum1 * d;
	printf("��ü��� : %f\n", sum2);


	return 0;
}

/*
��ǻ�ʹ� �Ҽ��� ����� ����� ����
0.5+0.25+0.125+...

������ ���迡 ���� ����
- ��� ���� ������
- �� �������� ���� ��
*/