#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
	printf("%d\n", time(NULL)); // ���� �ð� ���
	srand(time(NULL));
	printf("%d\n", rand());

	///////////////////////////////

	srand(time(NULL));
	int random = rand() % 10 +1;
	int num, i;
	for (i = 1; i <= 3; i++)
	{
		printf("1���� 10������ ���� �Է��Ͻʽÿ� (��ȸ�� %d�� ���ҽ��ϴ�) : ", 4 - i);
		scanf("%d", &num);
		if (num < random)
			printf("����� �����ϴ� ������ ū �� �Դϴ�.\n");
		else if (num > random)
			printf("����� �����ϴ� ������ ���� �� �Դϴ�.\n");
		else if (num == random) { // = �� == �� �ٸ�
			printf("����� %d�� ���� ���߾����ϴ�.\n", i);
			break; // break ��� ����
		}
		if (i == 3) {
			printf("\n����� 3�� �ȿ� ������ ���Ͽ����ϴ�.\n");
			printf("���� %d �Դϴ�.\n", random);
		}
	}

	///////////////////////////////

	/* ??
	char student[10][4];
	student[9][0] = "student01";
	student[9][1] = "student02";
	student[9][2] = "student03";
	student[9][3] = "student04";

	printf("%s\n", student[9][0]);
	*/

}