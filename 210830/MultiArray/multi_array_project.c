#include <stdio.h>
#include <time.h>

// 10������ ���� �ٸ� ���� (�� ī�� 2�徿)
// ��� ���� ���� ã���� ���� ����
// �� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5];
int checkAnimal[4][5]; // ���������� ���� Ȯ��
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
		printf("������ ī�� 2���� ������. : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;
		// ��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �� ������ Ȯ��

		// ���� ��ǥ�� (x,y)�� ��ȯ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// ���� ������ ���
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0)  // ī�尡 �������� �ʾ��� ���
			&& (checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&&
			(arrayAnimal[firstSelect_x][firstSelect_y]
				== arrayAnimal[firstSelect_x][firstSelect_y])
			) // �� ������ ������
		{
			printf("\n\n ����! : %s �߰�\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// �ٸ� ������ ���
		else
		{
			printf("\n\n ��! (Ʋ�Ȱų�, �̹� ������ ī���Դϴ�.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// ��� �������� ã�Ҵ��� ����, 1 : ��, 0 : ����
		if (foundAllAnimals() == 1)
		{
			printf("\n\n�����մϴ�!! ��� ������ �� ã�ҳ׿�\n");
			printf("���ݤ����� �� %d �� �Ǽ��ϼ̽��ϴ�.\n", failCount);
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
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "�κ�";

	strAnimal[5] = "����Ǫ��";
	strAnimal[6] = "����";
	strAnimal[7] = "�ڳ���";
	strAnimal[8] = "�⸰";
	strAnimal[9] = "��Ÿ";
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
		int randPos = rand() % 20; // 0~19������ ���� ��ȯ
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
	printf(" ============== ���� �����帳�ϴ�. ============\n");
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
	printf("\n\n(����)\n\n");
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
	return 0; // ��� �� ã��
}