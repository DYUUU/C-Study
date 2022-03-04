#include <stdio.h>
#include <time.h>
#include <windows.h>

void condition() {

	// 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)

	/*int age = 15;
	if (age >= 20)
	{
		printf("일반인 입니다.\n");
	}
	else
	{
		printf("학생입니다.\n");
	}*/

	//// 초등학생 8-13 / 중학생 14-16 / 고등학생 17-19 로 나누면?
	//// if / else if / else
	//int age = 8;
	//if (age >= 8 && age <= 13) {
	//	printf("초등학생입니다.\n");
	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("중학생입니다.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다.\n");
	//}
	//else {
	//	printf("학생이 아닌가봐요.");
	//}

	//// break / continue
	//// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6)
	//	{
	//		printf("나머지 학생은 집에 가세요\n");
	//		break;
	//	}
	//	printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	//}
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n",i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}*/

	//// && ||
	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 13;
	//if (a == b && c == d)
	//{
	//	printf("a와 b는 같고 c와 d도 같습니다.\n");
	//}
	//else if (a == b || c == d)
	//{
	//	printf("a와 b는 같거나 c와 d도 같습니다.\n");
	//}
	//else
	//{
	//	printf("값이 서로 다릅니다.\n");
	//}

	// 가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}*/

	//	srand(time(NULL));
	//	int i = rand() % 3;
	////	int i = 1;
	//	switch (i)
	//	{
	//	case 0: printf("가위\n"); break;
	//	case 1: printf("바위\n"); break;
	//	case 2: printf("보\n"); break;
	//	default:printf("몰라요\n"); break;
	//	}


	//// 이렇게 쓰지 마세요
	//int age = 8;
	//switch (age) {
	//case 8: printf("초등학생입니다.\n");
	//case 9: printf("초등학생입니다.\n");
	//case 10: printf("초등학생입니다.\n");
	//case 11: printf("초등학생입니다.\n");
	//case 12: printf("초등학생입니다.\n");
	//case 13: printf("초등학생입니다.\n");
	//case 14: printf("초등학생입니다.\n");
	//case 15: printf("초등학생입니다.\n");
	//case 16: printf("초등학생입니다.\n");
	//case 17: printf("초등학생입니다.\n");
	//case 18: printf("초등학생입니다.\n");
	//case 19: printf("초등학생입니다.\n");
	//}

//// 이렇게 쓰지 마세요
//	while (1)
//	{
//		int age = rand() % 20 + 8;
//			switch (age) {
//			case 8:
//			case 9:
//			case 10:
//			case 11:
//			case 12:
//			case 13: printf("초등학생입니다.\n"); break;
//			case 14:
//			case 15:
//			case 16: printf("중학생입니다.\n"); break;
//			case 17:
//			case 18:
//			case 19: printf("고등학생입니다.\n"); break;
//			default: printf("학생이 아닌가봐요\n"); break;
//			}
//			Sleep(2000); // windows.h 필요 지연 메소드
//	}


}