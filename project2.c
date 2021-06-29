#include <stdio.h>
#include <time.h>

// up and down

int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100
	printf("숫자 : %d\n", num);

	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) { // 1: 참 0:거짓
		printf("남은 기회 %d 번 \n", chance--);
		printf("1~100사이 랜덤수를 맞춰 보세요");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("Down ↓ \n\n");
		}
		else if (answer < num) {
			printf("Up ↑ \n\n");
		}
		else if (answer == num) {
			printf("Correct \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류\n");
		}

		if (chance == 0) {
			printf("모든 기회를 사용하셨습니다");
			break;
		}
	}
	return 0;
			

	}

	
