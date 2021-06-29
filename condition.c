#include <stdio.h>
#include <time.h>
// if / else if/ else if
int main() {
	/*
	int age;
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13) {
		printf("초등학생입니다");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다");
	}
	else {
		printf("성인입니다");
	
	}

	//break / continue
	for (int i = 1; i <= 30; i++)
	{
	
		if (i == 7) {
			printf("7번 학생은 조퇴하고 건너뛰세요 \n");
			continue; 
		}
		if (i >= 10) {
			printf("나머지 학생은 집에 가세요 \n");
			break; 
		}
		printf("%d번 학생은 조별 발표 준비를 하세요 \n", i);
	}

	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;

	if (a == b || c == d)
	{
		printf("두 조건 중 하나가 참입니다 \n");
	}
	else {
		printf("두 조건 모두 거짓입니다 \n");
	}

	//가위0바위1보2
	srand(time(NULL));
	int i = rand() % 3; // 0~2반환
	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보 \n");

	}
	else {
		printf("몰라용 \n");
	}
	// switch - case
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰라요\n"); break;
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
	case 13:printf("초등학생입니다"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다"); break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다"); break;
	case 20: printf("성인입니다"); break;
	}
	

	
	return 0;
	}

		





