#include <stdio.h>
#include "function.h"

int main(void) {
	// 숫자 두개 준비, 0으로 초기화
	int num1 = 0, num2 = 0;

	// 숫자 입력 받는 함수
	num1 = showMenu(1);	num2 = showMenu(2);

	// 사칙연산 각각 출력
	p("덧셈", num1 + num2);
	p("뺄셈", num1 - num2);
	p("곱셈", num1 * num2);
	p("나눗셈", num1 / num2);

	return 0;
}
