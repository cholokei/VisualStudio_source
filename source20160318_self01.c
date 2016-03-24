// #include 이전에 매크로 상수 직접 정의 - scanf 경고 메시지 해결
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

int main(void)
{
	/* 이스케이프 문자 */
	printf("캐리지 리턴 - 커서를 현재 행의 맨 앞으로 이동\r\n"); // \r
	printf("개행 문자\n엔터키\n"); // \n
	printf("탭키\t탭키\n"); // \t
	printf("특수문자 \"큰따옴표\" \'작은따옴표\' 백슬래시\\ \n"); /* \" \' \\ */
	printf("백스페이스\b백스페이스\n"); // \b
	printf("알람 - 삐소리\a\n"); // \a

	/* printf 필드폭 지정하기 */
	printf("/%10d/ /%10d/ /%10d/ \n", 100, 200, 300);
	printf("/%-10d/ /%-10d/ /%-10d/ \n", 100, 200, 300);
	printf("/%+10d/ /%+10d/ /%+10d/ \n", 100, 200, 300);

	/* 최대 출력 자리 수 지정 */
	printf("/%.8d/ \n", 123);
	printf("/%10.8d/ \n", 123);

	/* scanf 함수 */
	printf("덧셈을 할 두 수를 입력하세요\n");
	int val_a, val_b, sum;
	scanf("%d%d", &val_a, &val_b);
	sum = val_a + val_b;
	printf("%d + %d = %d \n", val_a, val_b, sum);
	
	printf("반지름을 입력하세요");	
	int radius;
	scanf("%d\n", &radius);

	return 0;
}