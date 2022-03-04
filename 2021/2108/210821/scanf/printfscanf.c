#include <stdio.h>

void printfscanf() {
	// printf
	//// 연산
	//int add = 3 + 7;
	//printf("3 + 7 = %d", add);
	//printf("%d + %d = %d", 3, 7, 3+7);

	//scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d", input);*/

	/*int one, two, three;
	printf("세 개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	//// 문자 (한 글자), 문자열(한 글자 이상의 여러 글자)
	//char c = 'A';
	//printf("%c\n", c);

	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 입니까? ");
	scanf_s("%f", &weight);

	double height;
	printf("키가 몇 cm 입니까? ");
	scanf_s("%lf", &height);

	char crime[256];
	printf("무슨 범죄를 저질렀습니까? ");
	scanf_s("%s", crime, sizeof(crime));

	// 조서 내용 출력
	printf("\n\n===  범죄자 정보 ===\n\n");
	printf(" 이름	: %s\n",name);
	printf(" 나이	: %d\n",age);
	printf(" 몸무게	: %.2f\n",weight);
	printf(" 키 	: %.2lf\n",height);
	printf(" 범죄	: %s\n",crime);



}