#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void question1(){
	printf("[문자, 정수, 실수, 문자열]의 폼으로 입력: ");

	char a;
	int b;
	float c;
	char d[10];

	scanf("%c, %d, %f, %s", &a, &b, &c, d);

	printf("입력된 데이터 출력 %c, %d, %f, %s", a, b, c, d); 
}

void question2() {
	char string[100];
	puts("hello", stdout);
	printf("문자열 입력: ");
	gets(string);
	printf("입력된 문자열: %s", string);
}

void question3() {
	int a = 0;
	int b = 0;
	fputs("두 수를 16진수로 입력: ", stdout);
	scanf("%x %x", &a, &b);
	//scanf("%x, %x", a, b);
	printf("연산 결과 8진수: %o\n", a + b);
	printf("연산 결과 10진수: %d\n", a + b);
	printf("연산 결과 16진수: %x\n", a + b);
}

void question4() {
	char c;
	int count = 0;
	
	while (1) {
		fputs("Data input (Ctrl+Z to exit): ",stdout);
		c = getchar();
		if (c == EOF) {
			break;
		}
		count++;
		if (getchar() == '\n')
			continue;
	}
	printf("\n입력된 문자의 수: %d", count);
}

void question4_2() {
	char input = 0;;
	int a = 1;
	int result = 0;
	while (1) {
		fputs("Data input (Ctrl+Z to exit): ", stdout);
		a = scanf("%d", &input);
		if (feof(stdin)) {
			printf("a: %d, input: %d\n", a, input);
			break;
		}
		printf("a: %d, input: %d\n", a, input);
		result += input;
	}
	printf("총 합: %d", result);
}

int main(void) {
	//int a=0;
	//printf("%d", scanf("%d", &a));
	question4_2();
}