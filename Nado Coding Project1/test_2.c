//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int nAge = 0;
	char szName[32] = { 0 };

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	printf("이름을 입력하세요. : ");
	while (getchar() != '\n');

	gets_s(szName, sizeof(szName));

	printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", nAge, szName);
}