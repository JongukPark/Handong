/* 21500292 ������
C ���α׷��� ���� 2
Ű ��ȯ ���α׷� */


#include <stdio.h>

int main(void)
{
	int x, y = 0; // ���� �ʱ�ȭ
	float z = 0;

	printf("Ű�� �Է��Ͻÿ�\n");
	scanf_s("%d", &x);

	y = x / (2.54 * 12);   // feet ��ȯ��
	z = (x / 2.54) - y * 12; // inch ��ȯ��


	printf("\n\"������\"�� Ű %d�� %dfeet %0.2finch �Դϴ�", x, y, z);

	system("pause");
	return 0;
}