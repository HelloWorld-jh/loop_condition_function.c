#include <stdio.h>
#include <time.h>
// if / else if/ else if
int main() {
	/*
	int age;
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�");
	}
	else {
		printf("�����Դϴ�");
	
	}

	//break / continue
	for (int i = 1; i <= 30; i++)
	{
	
		if (i == 7) {
			printf("7�� �л��� �����ϰ� �ǳʶټ��� \n");
			continue; 
		}
		if (i >= 10) {
			printf("������ �л��� ���� ������ \n");
			break; 
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ��� \n", i);
	}

	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;

	if (a == b || c == d)
	{
		printf("�� ���� �� �ϳ��� ���Դϴ� \n");
	}
	else {
		printf("�� ���� ��� �����Դϴ� \n");
	}

	//����0����1��2
	srand(time(NULL));
	int i = rand() % 3; // 0~2��ȯ
	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("�� \n");

	}
	else {
		printf("����� \n");
	}
	// switch - case
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("�����\n"); break;
	}*/

	int age;
	scanf_s("%d", &age);
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�"); break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�"); break;
	case 20: printf("�����Դϴ�"); break;
	}
	

	
	return 0;
	}

		





