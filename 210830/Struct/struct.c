//#include <stdio.h>
//
//struct gameInfo {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct gameInfo* friendGame; // 연관 업체 게임
//};
//
//
//typedef struct GameInformation {
//	char* name;
//	int year;
//	int price;
//	char* company;
//	struct gameInfo* friendGame; // 연관 업체 게임
//} GAME_INFO;
//
//void struct()
//{
//	// [게임 출시]
//	// 이름 : 나도게임
//	// 발매년도 : 2017년
//	// 가격 : 50원
//	// 제작사 : 나도 회사
//	/*char* name = "나도 게임";
//	int year = 2017;
//	int price = 50;
//	char* company = "나도 회사";*/
//
//	// [또다른 게임 출시!]
//	// 이름 : 너도 게임
//	// 발매년도 2017년
//	// 가격 : 100원
//	// 너도 회사
//
//	/*char* name2 = "너도 게임";
//	int year2 = 2017;
//	int price2 = 100;
//	char* company2 = "너도 회사";*/
//
//
//	// 구조체 사용
//	struct gameInfo gameInfo1;
//	struct gameInfo gameInfo2;
//	gameInfo1.name = "나도 게임";
//	gameInfo1.year = "2017";
//	gameInfo1.price = "50";
//	gameInfo1.company = "나도 회사";
//
//	gameInfo2.name = "너도 게임";
//	gameInfo2.year = "2017";
//	gameInfo2.price = "100";
//	gameInfo2.company = "너도 회사";
//
//
//	// 구조체 출력
//	printf("\n\n -- 게임 출시 정보 -- \n");
//	printf("  게임명  : %s\n", gameInfo1.name);
//	printf("  발매년도: %s\n", gameInfo1.year);
//	printf("  가격    : %s\n", gameInfo1.price);
//	printf("  제작사  : %s\n", gameInfo1.company);
//
//	struct gameInfo* gamePtr; // 미션맨
//	gamePtr = &gameInfo1;
//	printf("\n\n -- 게임 출시 정보 -- \n");
//	printf("  게임명  : %s\n", gamePtr->name);
//	printf("  발매년도: %s\n", gamePtr->year);
//	printf("  가격    : %s\n", gamePtr->price);
//	printf("  제작사  : %s\n", gamePtr->company);
//
//	// 연관 업체 게임 소개
//	gameInfo1.friendGame = &gameInfo2;
//	printf("\n\n -- 연관 업체 게임 출시 정보 -- \n");
//	printf("  게임명  : %s\n", gameInfo1.friendGame->name);
//	printf("  발매년도: %s\n", gameInfo1.friendGame->year);
//	printf("  가격    : %s\n", gameInfo1.friendGame->price);
//	printf("  제작사  : %s\n", gameInfo1.friendGame->company);
//
//	// typedef
//	// 자료형에 별명 지정
//	int i = 1;
//	typedef int 정수;
//	typedef float 실수;
//	정수 정수변수 = 3;
//	실수 실수변수 = 3.23f;
//	printf("\n\n 정수 변수 %d, 실수 변수 %.2f\n\n", 정수변수, 실수변수);
//
//	GAME_INFO game2;
//	game2.name = "한글 게임2";
//	game2.year = "1997";
//
//	printf("\n\n%10s\n", game2.name);
//	printf("%10s", game2.year);
//
//}