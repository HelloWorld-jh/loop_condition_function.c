/* prefix, postfix */
#include <stdio.h>
int main() {
	int a = 1;

	printf("++a : %d \n", ++a);

	a = 1;
	printf("a++ : %d \n", a++); //1출력 ,+1값 저장
	printf("a : %d \n", a); // 2출력

	return 0;
}
