#include<stdio.h>

int main(void) {
	/*int a = 10;
	printf("%d\n", a); 10
	a++;
	printf("%d\n", a); 11
	a++;
	printf("%d\n", a); 12*/

	/*int b = 20;
	printf("%d\n", ++b); 21
	printf("%d\n", b++); 21 (+1����)
	printf("%d\n", b); 22

	//�ݺ��� for, while, do while
	//for (����; ����; ����;)
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}

	// whihe (����){}
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		//i++
	}
	// do { } while (����);
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i<10);

	//2�� �ݺ���
	for (int i = 1; i <= 10; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);
		for(int j = 1; j <= 5; j++){
		printf("     �� ��° �ݺ��� : %d\n", j);
}
	}
	//������
	for (int i = 1; i < 10; i++) {
		printf("%d�� \n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	// �����
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}�����2
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) 
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	// �Ƕ�̵�
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}