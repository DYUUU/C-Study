#include <stdio.h>
#include <time.h>
#include <windows.h>

void condition() {

	// ������ ź�ٰ� ����. �л� / �Ϲ������� ���� (�Ϲ��� : 20��)

	/*int age = 15;
	if (age >= 20)
	{
		printf("�Ϲ��� �Դϴ�.\n");
	}
	else
	{
		printf("�л��Դϴ�.\n");
	}*/

	//// �ʵ��л� 8-13 / ���л� 14-16 / �����л� 17-19 �� ������?
	//// if / else if / else
	//int age = 8;
	//if (age >= 8 && age <= 13) {
	//	printf("�ʵ��л��Դϴ�.\n");
	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("���л��Դϴ�.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("�����л��Դϴ�.\n");
	//}
	//else {
	//	printf("�л��� �ƴѰ�����.");
	//}

	//// break / continue
	//// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6)
	//	{
	//		printf("������ �л��� ���� ������\n");
	//		break;
	//	}
	//	printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	//}
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n",i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}*/

	//// && ||
	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 13;
	//if (a == b && c == d)
	//{
	//	printf("a�� b�� ���� c�� d�� �����ϴ�.\n");
	//}
	//else if (a == b || c == d)
	//{
	//	printf("a�� b�� ���ų� c�� d�� �����ϴ�.\n");
	//}
	//else
	//{
	//	printf("���� ���� �ٸ��ϴ�.\n");
	//}

	// ���� 0 ���� 1 �� 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}*/

	//	srand(time(NULL));
	//	int i = rand() % 3;
	////	int i = 1;
	//	switch (i)
	//	{
	//	case 0: printf("����\n"); break;
	//	case 1: printf("����\n"); break;
	//	case 2: printf("��\n"); break;
	//	default:printf("�����\n"); break;
	//	}


	//// �̷��� ���� ������
	//int age = 8;
	//switch (age) {
	//case 8: printf("�ʵ��л��Դϴ�.\n");
	//case 9: printf("�ʵ��л��Դϴ�.\n");
	//case 10: printf("�ʵ��л��Դϴ�.\n");
	//case 11: printf("�ʵ��л��Դϴ�.\n");
	//case 12: printf("�ʵ��л��Դϴ�.\n");
	//case 13: printf("�ʵ��л��Դϴ�.\n");
	//case 14: printf("�ʵ��л��Դϴ�.\n");
	//case 15: printf("�ʵ��л��Դϴ�.\n");
	//case 16: printf("�ʵ��л��Դϴ�.\n");
	//case 17: printf("�ʵ��л��Դϴ�.\n");
	//case 18: printf("�ʵ��л��Դϴ�.\n");
	//case 19: printf("�ʵ��л��Դϴ�.\n");
	//}

//// �̷��� ���� ������
//	while (1)
//	{
//		int age = rand() % 20 + 8;
//			switch (age) {
//			case 8:
//			case 9:
//			case 10:
//			case 11:
//			case 12:
//			case 13: printf("�ʵ��л��Դϴ�.\n"); break;
//			case 14:
//			case 15:
//			case 16: printf("���л��Դϴ�.\n"); break;
//			case 17:
//			case 18:
//			case 19: printf("�����л��Դϴ�.\n"); break;
//			default: printf("�л��� �ƴѰ�����\n"); break;
//			}
//			Sleep(2000); // windows.h �ʿ� ���� �޼ҵ�
//	}


}