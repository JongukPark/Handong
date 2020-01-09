/* 21500292 박종욱
C 프로그래밍 숙제 1
시간 변환 프로그램 */


#include <stdio.h>

int main(void)
{
	int x = 0;     //변수 초기화
	int y = 0;
	int z = 0;





	printf("시간을 분 단위로 입력하시오.\n");   // 출력
	scanf_s("%d", &x);  // 분단위 입력 받을 함수

	y = (x / 60);
	z = (x % 60);

	printf("%d분은 %d시간 %d분 입니다\n", x, y, z);  // 결과값 출력

	system("pause");
	return 0;
}