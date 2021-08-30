#include <stdio.h>
#include <time.h>

// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5];
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
void printAnimals();
void printQuestion();
int conv_pos_x(int x);
int conv_pos_y(int y);
int foundAllAnimals();

void main()
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0;

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("뒤집을 카드 2개를 고르세요. : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;
		// 좌표에 해당하는 카드를 뒤집어 보고 같은지 안 같은지 확인

		// 정수 좌표를 (x,y)로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 같은 동물인 경우
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0)  // 카드가 뒤집히지 않았을 경우
			&& (checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&&
			(arrayAnimal[firstSelect_x][firstSelect_y]
				== arrayAnimal[firstSelect_x][firstSelect_y])
			) // 두 동물이 같은지
		{
			printf("\n\n 빙고! : %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// 다른 동물인 경우
		else
		{
			printf("\n\n 땡! (틀렸거나, 이미 뒤집힌 카드입니다.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// 모든 동물들을 찾았는지 여부, 1 : 참, 0 : 거짓
		if (foundAllAnimals() == 1)
		{
			printf("\n\n축하합니다!! 모든 동물을 다 찾았네요\n");
			printf("지금ㅈ까지 총 %d 번 실수하셨습니다.\n", failCount);
		}



	}

}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = 1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "원숭이";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "두부";

	strAnimal[5] = "초코푸딩";
	strAnimal[6] = "돼지";
	strAnimal[7] = "코끼리";
	strAnimal[8] = "기린";
	strAnimal[9] = "낙타";
}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20; // 0~19사이의 숫자 반환
		//19 -> (3,4)
		int x = conv_pos_x(randPos);
		int  y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == 1)
		{
			return randPos;
		}

	}
	return 0;
}

int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5;
}

void printAnimals()
{
	printf(" ============== 몰래 보여드립니다. ============\n");
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			printf("%10s", strAnimal[arrayAnimal[i][j]]);
		}

		printf("\n");
	}
	printf(" ==============================================\n");
	printf("\n\n");
}

void printQuestion()
{
	printf("\n\n(문제)\n\n");
	int seq = 0;
	// seq				// checkAnimal
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] != 0)
			{
				printf("%10s", strAnimal[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%10d", seq);
			}
			seq++;
		}

		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 0; // 모두 다 찾음
}