#include <stdio.h>

// ����
void p(int num);

void function_without_return();
int function_with_return();
void function_without_paramas();
void function_without_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü total ������ ate ���� �԰� ���� ���� ��ȯ

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void)
{
	/*// function
	// ����
	int num = 2;
	//printf("num �� %d �Դϴ�.\n", num); // 2
	p(num);

	//2 + 3 = ?
	num = num + 3; // num += 3
	//printf("num �� %d �Դϴ�.\n", num); //5
	p(num);

	// 5 - 1 = ?
	num -= 1; // num = num - 1;
	//printf("num �� %d �Դϴ�.\n", num); // 4
	p(num);

	// 4 x 3 = ?
	num *= 3;
	//printf("num �� %d �Դϴ�.\n", num); // 12
	p(num);

	// 12 / 6 = ?
	num /= 6;
	//printf("num �� %d �Դϴ�.\n", num); // 2
	p(num);*/



	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	//function_without_return();



	// ��ȯ���� �ִ� �Լ�
	/*int ret = function_without_return();
	p(ret);*/



	// �Ķ����(���ް�)�� ���� �Լ�
	//function_without_paramas();



	// �Ķ����(���ް�)�� �ִ� �Լ�
	//function_without_params(380, 242, 63);

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // 5���� ��� �� 2���� ����� ����
	//printf("��� 5�� �߿� 2���� ������? %d ���� �����ϴ�.\n", ret);
	//printf("��� %d �� �߿� %d ���� ������? %d ���� �����ϴ�.\n", 10, 4, apple(10, 4));



	// ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);








	return 0;
}

// ����
void p(int num)
{
	printf("num �� %d �Դϴ�.\n", num);
}
// ���ް� : 36
// �Լ�
// ��ȯ��
// void �Լ� �̸�


void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_paramas()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_without_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return(total - ate);
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}