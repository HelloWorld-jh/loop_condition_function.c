/* printf 형식
변수 선언시 주의해야 할 점*/
#include <stdio.h>
int main() {
	int a, A; // a와 A는 각기 다른 변수
	int 1hf; // 오류, 숫자가 앞에 위치할 수 없음
	int hi123, hi32i, hi23432; //숫자가 뒤에 위치하는건 ok
	int 한글; //오류, 변수는 오직 알파벳, 숫자, 그리고 _로만 이루어져야함
	int enum, long, double, int; //오류, 예약어는 변수로 설정 불가
	return 0;
}