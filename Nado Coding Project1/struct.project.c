#include <stdio.h>
#include <time.h>

// 5마리의 고양이 있다
// 아무키나 눌러서 랜덤으로 고양이를 뽑음
// 5마리 모두 다 수집해서 열심히 키우면 됨
// 중 복 발 생 가 능 !

// 고양이
// 이름, 나이, 성격, 키우기 나이도 (레벨)

typedef struct {
	char* name; // 이름
	int age; // 나이
	char* character; // 성격
	int level; // 키우기 난이도 (1 ~ 5, 숫자가 커질수로 난이도 높아짐)
} CAT;

// 현재까지 보유한 고양이
int collection[5] = { 0, 0, 0, 0, 0 };

// 전체 고양이 리스트
CAT cats[5];

void initCats(); // 고양이 정보 초기화
void printCat(int selected);

int main_struct_project(void)
{
	srand(time(NULL));
	
	initCats();
	while (1)
	{
		printf("두근두근~! 어느 고양이의 집사가 될까요?\n아무키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; // 0 ~ 4 사이의 숫자 반환
		printCat(selected); // 뽑은 고양이 정보 출력
		collection[selected] = 1; // 고양이 뽑기 처리

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
	cats[0].name = "삼색이";
	cats[0].age = 5;
	cats[0].character = "매력";
	cats[0].level = 5;

	cats[1].name = "무";
	cats[1].age = 2;
	cats[1].character = "귀엽";
	cats[1].level = 3;

	cats[2].name = "마를린";
	cats[2].age = 2;
	cats[2].character = "청순";
	cats[2].level = 4;

	cats[3].name = "길막이";
	cats[3].age = 4;
	cats[3].character = "자해공갈";
	cats[3].level = 2;

	cats[4].name = "야통이";
	cats[4].age = 1;
	cats[4].character = "목소리";
	cats[4].level = 1;
}

void printCat(int selected)
{
	printf("\n\n=== 당신은 이 고양이의 집사가 되었어요! ===\n\n");
	printf("  이름    : %s\n", cats[selected].name);
	printf("  나이    : %d\n", cats[selected].age);
	printf("  성격    : %s\n", cats[selected].character);
	printf("  난이도  : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection()
{
	// 1. 현재 보유한 고양이 목록도 출력
	// 2. 다 모았는지 여부를 반환
	int collectAll = 1;

	printf("\n\n === 보유한 고양이 목록입니다. === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)
		{
			printf("%10s", "빈 박스");
			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 고양이 수집 0
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n========================================\n\n");

	if (collectAll)
	{
		printf("\n\n 축하합니다! 모든 고양이를 다 모았습니다. 열심히 키워주세요!");
	}

	return collectAll;
}