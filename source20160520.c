#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
	printf("%d\n", time(NULL)); // 현재 시각 출력
	srand(time(NULL));
	printf("%d\n", rand());

	///////////////////////////////

	srand(time(NULL));
	int random = rand() % 10 +1;
	int num, i;
	for (i = 1; i <= 3; i++)
	{
		printf("1에서 10사이의 수를 입력하십시오 (기회는 %d번 남았습니다) : ", 4 - i);
		scanf("%d", &num);
		if (num < random)
			printf("당신이 생각하는 수보다 큰 수 입니다.\n");
		else if (num > random)
			printf("당신이 생각하는 수보다 작은 수 입니다.\n");
		else if (num == random) { // = 와 == 은 다름
			printf("당신은 %d번 만에 맞추었습니다.\n", i);
			break; // break 사용 가능
		}
		if (i == 3) {
			printf("\n당신은 3번 안에 맞추지 못하였습니다.\n");
			printf("답은 %d 입니다.\n", random);
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