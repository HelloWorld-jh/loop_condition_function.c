#include <stdio.h>
//�Լ� ����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
int funtion_with_params(int num1, int num2, int num3);

int add(int num, int add_val);

int apple(int total, int ate); // total������ ate���� �԰� ���� �� ��ȯ
int main(void) {
	/*
	int num = 2;
	printf("num�� %d�Դϴ� \n", num);
	p(num);

	num = num + 3;
	p(num);

	num -= 1;
	p(num);

	num /= 6;
	p(num);*/

	//�Լ� ���� - ��ȯo/ ��ȯx (void)/ �Ķ����(���ް�)�� ���� �Լ� / �Ķ���� o 
	// �Ķ���͵� �ް� ��ȯ���� �ִ� �Լ�


	function_without_return();

	int ret = function_with_return();
	
	p(ret);

	function_without_params();
	funtion_with_params(1, 2, 3);

	int retrn = apple(2, 1);
	printf("�غ��� ��� %d���� %d�� ��ŭ�Ȱ��� %d���� ���ƿ� \n",100, 65, apple(100,65));

	//���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);
	return 0;


}

//���� - ��ȯ�� �Լ���(���ް�), void == �ƹ��͵� ����
void p(int num) {
	printf("num�� %d�Դϴ� \n", num);
}
void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�. \n");
}
int function_with_return() {
	printf("��ȯ���� �ִ� �Լ� \n");
}
void function_without_params() {
	printf("�Ķ���Ͱ� ���� �Լ��Դϴ�");
}
int funtion_with_params(int num1, int num2, int num3) {
	printf("�Ķ���Ͱ� �ִ� �Լ� �̸�,�Ķ���ʹ� %d %d %d \n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("�Ķ���Ϳ� ���ϰ��� �ִ� �Լ��Դϴ� \n");
	return total - ate;
}

int add(int num, int add_val) {
	return num + add_val;
}
