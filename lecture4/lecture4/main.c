#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//�ǽ�
	int user_money;
	printf("������ �Է��Ͻÿ�(����: ����) : ");
	scanf("%d", &user_money);
	user_money = user_money / 12;
	printf("\n�� ���ɾ�(����: ����) : %d \n\n", user_money);

	float r;
	float solid;
	printf("�������� �Է��Ͻÿ� : ");
	scanf("%f", &r);
	solid = r * r * 3.12;
	printf("\n���� ���� : %f \n\n", solid);

	float exchange_rate;
	float won;
	float result_money;
	printf("ȯ���� �Է��Ͻÿ� : ");
	scanf("%f", &exchange_rate);
	printf("��ȭ �ݾ� �Է��Ͻÿ� : ");
	scanf("%f", &won);
	result_money = won * exchange_rate;
	printf("��ȭ %f ���� %f �޷��Դϴ�.\n\n", won, result_money);

	double w, h, area, perimeter;
	printf("���θ� �Է����ּ��� : ");
	scanf("%Lf", &w);
	printf("\n���θ� �Է����ּ��� : ");
	scanf("%Lf", &h);
	area = w * h;
	perimeter = 2 * (w + h);
	printf("\n�簢���� ���� : %Lf", area);
	printf("\n�簢���� �ѷ� : %Lf", perimeter);
}