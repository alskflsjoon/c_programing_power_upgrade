#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void question1(){
	printf("[����, ����, �Ǽ�, ���ڿ�]�� ������ �Է�: ");

	char a;
	int b;
	float c;
	char d[10];

	scanf("%c, %d, %f, %s", &a, &b, &c, d);

	printf("�Էµ� ������ ��� %c, %d, %f, %s", a, b, c, d); 
}

void question2() {
	char string[100];
	puts("hello", stdout);
	printf("���ڿ� �Է�: ");
	gets(string);
	printf("�Էµ� ���ڿ�: %s", string);
}

void question3() {
	int a = 0;
	int b = 0;
	fputs("�� ���� 16������ �Է�: ", stdout);
	scanf("%x %x", &a, &b);
	//scanf("%x, %x", a, b);
	printf("���� ��� 8����: %o\n", a + b);
	printf("���� ��� 10����: %d\n", a + b);
	printf("���� ��� 16����: %x\n", a + b);
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
	printf("\n�Էµ� ������ ��: %d", count);
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
	printf("�� ��: %d", result);
}

int main(void) {
	//int a=0;
	//printf("%d", scanf("%d", &a));
	question4_2();
}