//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int nAge = 0;
	char szName[32] = { 0 };

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	printf("�̸��� �Է��ϼ���. : ");
	while (getchar() != '\n');

	gets_s(szName, sizeof(szName));

	printf("����� ���̴� %d���̰� �̸��� %s�Դϴ�.\n", nAge, szName);
}