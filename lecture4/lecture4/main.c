#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//실습
	int user_money;
	printf("연봉을 입력하시오(단위: 만원) : ");
	scanf("%d", &user_money);
	user_money = user_money / 12;
	printf("\n월 수령액(단위: 만원) : %d \n\n", user_money);

	float r;
	float solid;
	printf("반지름을 입력하시오 : ");
	scanf("%f", &r);
	solid = r * r * 3.12;
	printf("\n원의 넓이 : %f \n\n", solid);

	float exchange_rate;
	float won;
	float result_money;
	printf("환율을 입력하시오 : ");
	scanf("%f", &exchange_rate);
	printf("원화 금액 입력하시오 : ");
	scanf("%f", &won);
	result_money = won * exchange_rate;
	printf("원화 %f 원은 %f 달러입니다.\n\n", won, result_money);

	double w, h, area, perimeter;
	printf("가로를 입력해주세요 : ");
	scanf("%Lf", &w);
	printf("\n세로를 입력해주세요 : ");
	scanf("%Lf", &h);
	area = w * h;
	perimeter = 2 * (w + h);
	printf("\n사각형의 넓이 : %Lf", area);
	printf("\n사각형의 둘레 : %Lf", perimeter);
}