#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 배열 사용 시

void main() {
	// 배열 선언 시에 \0이 들어갈 자리를 한 칸 남겨두어야 함.
	char str1[10];
	char str2[10];
	char str3[10] = "CookBook";

	strcpy(str1, "Basic-C");
	strcpy(str2, str3);

	printf("str1 ==> %s \n", str1);
	printf("str2 ==> %s \n", str2);
	printf("str3 ==> %s \n", str3);
}