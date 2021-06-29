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
	printf("%d\n", b++); 21 (+1저장)
	printf("%d\n", b); 22

	//반복문 for, while, do while
	//for (선언; 조건; 증감;)
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}

	// whihe (조건){}
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		//i++
	}
	// do { } while (조건);
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i<10);

	//2중 반복문
	for (int i = 1; i <= 10; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);
		for(int j = 1; j <= 5; j++){
		printf("     두 번째 반복문 : %d\n", j);
}
	}
	//구구단
	for (int i = 1; i < 10; i++) {
		printf("%d단 \n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	// 별찍기
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}별찍기2
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
	// 피라미드
	int floor;
	printf("몇 층으로 쌓겠느냐?");
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