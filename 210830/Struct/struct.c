//#include <stdio.h>
//
//struct gameInfo {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct gameInfo* friendGame; // ���� ��ü ����
//};
//
//
//typedef struct GameInformation {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct gameInfo* friendGame; // ���� ��ü ����
//} GAME_INFO;
//
//void struct()
//{
//	// [���� ���]
//	// �̸� : ��������
//	// �߸ų⵵ : 2017��
//	// ���� : 50��
//	// ���ۻ� : ���� ȸ��
//	/*char* name = "���� ����";
//	int year = 2017;
//	int price = 50;
//	char* company = "���� ȸ��";*/
//
//	// [�Ǵٸ� ���� ���!]
//	// �̸� : �ʵ� ����
//	// �߸ų⵵ 2017��
//	// ���� : 100��
//	// �ʵ� ȸ��
//
//	/*char* name2 = "�ʵ� ����";
//	int year2 = 2017;
//	int price2 = 100;
//	char* company2 = "�ʵ� ȸ��";*/
//
//
//	// ����ü ���
//	struct gameInfo gameInfo1;
//	struct gameInfo gameInfo2;
//	gameInfo1.name = "���� ����";
//	gameInfo1.year = "2017";
//	gameInfo1.price = "50";
//	gameInfo1.company = "���� ȸ��";
//
//	gameInfo2.name = "�ʵ� ����";
//	gameInfo2.year = "2017";
//	gameInfo2.price = "100";
//	gameInfo2.company = "�ʵ� ȸ��";
//
//
//	// ����ü ���
//	printf("\n\n -- ���� ��� ���� -- \n");
//	printf("  ���Ӹ�  : %s\n", gameInfo1.name);
//	printf("  �߸ų⵵: %s\n", gameInfo1.year);
//	printf("  ����    : %s\n", gameInfo1.price);
//	printf("  ���ۻ�  : %s\n", gameInfo1.company);
//
//	struct gameInfo* gamePtr; // �̼Ǹ�
//	gamePtr = &gameInfo1;
//	printf("\n\n -- ���� ��� ���� -- \n");
//	printf("  ���Ӹ�  : %s\n", gamePtr->name);
//	printf("  �߸ų⵵: %s\n", gamePtr->year);
//	printf("  ����    : %s\n", gamePtr->price);
//	printf("  ���ۻ�  : %s\n", gamePtr->company);
//
//	// ���� ��ü ���� �Ұ�
//	gameInfo1.friendGame = &gameInfo2;
//	printf("\n\n -- ���� ��ü ���� ��� ���� -- \n");
//	printf("  ���Ӹ�  : %s\n", gameInfo1.friendGame->name);
//	printf("  �߸ų⵵: %s\n", gameInfo1.friendGame->year);
//	printf("  ����    : %s\n", gameInfo1.friendGame->price);
//	printf("  ���ۻ�  : %s\n", gameInfo1.friendGame->company);
//
//	// typedef
//	// �ڷ����� ���� ����
//	int i = 1;
//	typedef int ����;
//	typedef float �Ǽ�;
//	���� �������� = 3;
//	�Ǽ� �Ǽ����� = 3.23f;
//	printf("\n\n ���� ���� %d, �Ǽ� ���� %.2f\n\n", ��������, �Ǽ�����);
//
//	GAME_INFO game2;
//	game2.name = "�ѱ� ����2";
//	game2.year = "1997";
//
//	printf("\n\n%10s\n", game2.name);
//	printf("%10s", game2.year);
//
//}