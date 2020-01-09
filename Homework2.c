/* 21500292 박종욱
C 프로그래밍 숙제 2
키 변환 프로그램 */


#include <stdio.h>

int main(void)
{
	int x, y = 0; // 변수 초기화
	float z = 0;

	printf("키를 입력하시오\n");
	scanf_s("%d", &x);

	y = x / (2.54 * 12);   // feet 변환식
	z = (x / 2.54) - y * 12; // inch 변환식


	printf("\n\"박종욱\"의 키 %d는 %dfeet %0.2finch 입니다", x, y, z);

	system("pause");
	return 0;
}