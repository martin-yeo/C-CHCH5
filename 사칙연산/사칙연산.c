#include <stdio.h>

int main(void) {
	// 숫자 두개 준비, 0으로 초기화
	int num1 = 0, num2 = 0;
	
	// 숫자 입력 받고
	printf("숫자 1 입력: "); 	scanf_s("%d", &num1);
	printf("숫자 2 입력: "); 	scanf_s("%d", &num2);

	// 사칙연산 각각 출력
	printf("덧셈 출력 : %d\n", num1 + num2);
	printf("뺄셈 출력 : %d\n", num1 - num2);
	printf("곱셈 출력 : %d\n", num1 * num2);
	printf("나눗셈 출력 : %d\n", num1 / num2);

	return 0;
}