#include <stdio.h>
#include <Windows.h>

void main() {
	// UP and Down Project
		srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100 ������ ����;
	printf("���� : %d\n", num);
	int answer = 0;	// ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ %d �� \n", chance);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("DOWN\n");
		}
		else if (answer < num)
		{
			printf("UP\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�!\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾�� \n\n");
		}
		chance--;
		if (chance == 0)
		{
			printf("��� ��ȸ�� �����ϼ̽��ϴ�. �ƽ��� �����߽��ϴ�.\n");
			break;
		}
	}
}