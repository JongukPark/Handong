/* 21500292 ������
C ���α׷��� ���� 1
�ð� ��ȯ ���α׷� */


#include <stdio.h>

int main(void)
{
	int x = 0;     //���� �ʱ�ȭ
	int y = 0;
	int z = 0;





	printf("�ð��� �� ������ �Է��Ͻÿ�.\n");   // ���
	scanf_s("%d", &x);  // �д��� �Է� ���� �Լ�

	y = (x / 60);
	z = (x % 60);

	printf("%d���� %d�ð� %d�� �Դϴ�\n", x, y, z);  // ����� ���

	system("pause");
	return 0;
}