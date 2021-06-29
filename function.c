#include <stdio.h>
//함수 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
int funtion_with_params(int num1, int num2, int num3);

int add(int num, int add_val);

int apple(int total, int ate); // total개에서 ate개를 먹고 남은 수 반환
int main(void) {
	/*
	int num = 2;
	printf("num은 %d입니다 \n", num);
	p(num);

	num = num + 3;
	p(num);

	num -= 1;
	p(num);

	num /= 6;
	p(num);*/

	//함수 종류 - 반환o/ 반환x (void)/ 파라미터(전달값)가 없는 함수 / 파라미터 o 
	// 파라미터도 받고 반환값이 있는 함수


	function_without_return();

	int ret = function_with_return();
	
	p(ret);

	function_without_params();
	funtion_with_params(1, 2, 3);

	int retrn = apple(2, 1);
	printf("준비한 사과 %d개를 %d개 만큼팔고나면 %d개가 남아요 \n",100, 65, apple(100,65));

	//계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);
	return 0;


}

//정의 - 반환형 함수명(전달값), void == 아무것도 없다
void p(int num) {
	printf("num은 %d입니다 \n", num);
}
void function_without_return() {
	printf("반환값이 없는 함수입니다. \n");
}
int function_with_return() {
	printf("반환값이 있는 함수 \n");
}
void function_without_params() {
	printf("파라미터가 없는 함수입니다");
}
int funtion_with_params(int num1, int num2, int num3) {
	printf("파라미터가 있는 함수 이며,파라미터는 %d %d %d \n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("파라미터와 리턴값이 있는 함수입니다 \n");
	return total - ate;
}

int add(int num, int add_val) {
	return num + add_val;
}
