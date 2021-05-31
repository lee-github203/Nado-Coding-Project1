#include <stdio.h>
#include <time.h>

// 5������ ����� �ִ�
// �ƹ�Ű�� ������ �������� ����̸� ����
// 5���� ��� �� �����ؼ� ������ Ű��� ��
// �� �� �� �� �� �� !

// �����
// �̸�, ����, ����, Ű��� ���̵� (����)

typedef struct {
	char* name; // �̸�
	int age; // ����
	char* character; // ����
	int level; // Ű��� ���̵� (1 ~ 5, ���ڰ� Ŀ������ ���̵� ������)
} CAT;

// ������� ������ �����
int collection[5] = { 0, 0, 0, 0, 0 };

// ��ü ����� ����Ʈ
CAT cats[5];

void initCats(); // ����� ���� �ʱ�ȭ
void printCat(int selected);

int main_struct_project(void)
{
	srand(time(NULL));
	
	initCats();
	while (1)
	{
		printf("�αٵα�~! ��� ������� ���簡 �ɱ��?\n�ƹ�Ű�� ������ Ȯ���ϼ���!");
		getchar();

		int selected = rand() % 5; // 0 ~ 4 ������ ���� ��ȯ
		printCat(selected); // ���� ����� ���� ���
		collection[selected] = 1; // ����� �̱� ó��

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	}
	
	
	return 0;
}

void initCats()
{
	cats[0].name = "�����";
	cats[0].age = 5;
	cats[0].character = "�ŷ�";
	cats[0].level = 5;

	cats[1].name = "��";
	cats[1].age = 2;
	cats[1].character = "�Ϳ�";
	cats[1].level = 3;

	cats[2].name = "������";
	cats[2].age = 2;
	cats[2].character = "û��";
	cats[2].level = 4;

	cats[3].name = "�渷��";
	cats[3].age = 4;
	cats[3].character = "���ذ���";
	cats[3].level = 2;

	cats[4].name = "������";
	cats[4].age = 1;
	cats[4].character = "��Ҹ�";
	cats[4].level = 1;
}

void printCat(int selected)
{
	printf("\n\n=== ����� �� ������� ���簡 �Ǿ����! ===\n\n");
	printf("  �̸�    : %s\n", cats[selected].name);
	printf("  ����    : %d\n", cats[selected].age);
	printf("  ����    : %s\n", cats[selected].character);
	printf("  ���̵�  : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n\n");
}

int checkCollection()
{
	// 1. ���� ������ ����� ��ϵ� ���
	// 2. �� ��Ҵ��� ���θ� ��ȯ
	int collectAll = 1;

	printf("\n\n === ������ ����� ����Դϴ�. === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)
		{
			printf("%10s", "�� �ڽ�");
			collectAll = 0; // �� ������ ���� ����
		}
		else // ����� ���� 0
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n========================================\n\n");

	if (collectAll)
	{
		printf("\n\n �����մϴ�! ��� ����̸� �� ��ҽ��ϴ�. ������ Ű���ּ���!");
	}

	return collectAll;
}