#include <stdio.h>
#include <time.h>

// up and down

int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100
	printf("���� : %d\n", num);

	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1) { // 1: �� 0:����
		printf("���� ��ȸ %d �� \n", chance--);
		printf("1~100���� �������� ���� ������");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("Down �� \n\n");
		}
		else if (answer < num) {
			printf("Up �� \n\n");
		}
		else if (answer == num) {
			printf("Correct \n\n");
			break;
		}
		else {
			printf("�� �� ���� ����\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� ����ϼ̽��ϴ�");
			break;
		}
	}
	return 0;
			

	}

	
