#include <stdio.h>

void printfscanf() {
	// printf
	//// ����
	//int add = 3 + 7;
	//printf("3 + 7 = %d", add);
	//printf("%d + %d = %d", 3, 7, 3+7);

	//scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d", input);*/

	/*int one, two, three;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);*/

	//// ���� (�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �Դϱ�? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �Դϱ�? ");
	scanf_s("%lf", &height);

	char crime[256];
	printf("���� ���˸� ���������ϱ�? ");
	scanf_s("%s", crime, sizeof(crime));

	// ���� ���� ���
	printf("\n\n===  ������ ���� ===\n\n");
	printf(" �̸�	: %s\n",name);
	printf(" ����	: %d\n",age);
	printf(" ������	: %.2f\n",weight);
	printf(" Ű 	: %.2lf\n",height);
	printf(" ����	: %s\n",crime);



}