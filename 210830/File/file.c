#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

#define MAX 10000
char line[MAX];	//char line[10000]
char* addr = "C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt";

void main_file()
{
	// ���� �����
	// ���Ͽ� � �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����
	// fputs, fgets(��)
	//FILE* file = fopen("C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt", "wb"); // �б� ��������
	//if (file == NULL)
	//{
	//	printf("���� ���� ����\n");
	//	return 1;
	//}

	//fputs("fputs�� �̿��ؼ� ���� ����Կ�\n",file);
	//fputs("�� �������� Ȯ�����ּ���\n",file);
	//fclose(file);


	//�ݵ�� ������ �������� ������ �ݾ��ּ���

	// ���� �о� ����
	//FILE* file = fopen("C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt", "rb");
	//if (file == NULL)
	//{
	//	printf("���� ���� ���� \n");
	//	return 1;
	//}
	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s", line);
	//}
	//fclose(file);


	// fprintf, fscanf (��)
	int num[6] = { 0 }; // ��÷��ȣ
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];
	//FILE* file = fopen(addr, "wb");
	//if (file == NULL)
	//{
	//	printf("���� ���� ����\n");
	//	return 1;	
	//}

	//// �ζ� ��÷ ��ȣ ����
	//fprintf(file, "%s %d %d %d %d %d %d\n", "��÷ ��ȣ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "���ʽ���ȣ", 7);

	//fclose(file);

	FILE* file = fopen(addr, "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5] );
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5] );

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(file);





}
