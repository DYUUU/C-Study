#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է¹޾Ƽ�
// �´� ���? ��� �ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ��� �մϴ�.
// Ʋ�� ���? ��� �޽����� ǥ���ϰ� �����մϴ�.

#define MAX 10000

void main()
{
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�.\n");
	printf("��� ��ȣ�� �Է��ϼ��� : ");

	int i = 0;
	while (1)
	{
		c = getch(); // ����ġ�� ��й�ȣ �Է� ����
		if (c == 13) // enter
		{
			password[i] = '\0';
			break;
		}
		else // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// ��й�ȣ : skehzheld �����ڵ�
	printf("\n\n === ��й�ȣ Ȯ�� �� . . . === \n\n");
	if (strcmp(password, "kkk") == 0)
	{
		printf("=== ��й�ȣ Ȯ�� �Ϸ� === \n\n");
		char* filename = "C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\secretDiary.txt";
		FILE* file = fopen(filename, "a+b");

		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ��� ! �����Ͻ÷��� EXIT �� �Է��ϼ��� \n\n");

		while (1)
		{
			scanf("%[^\n]", contents);
			getchar(); // Enter �Է� Flushó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter �� ������ ���� ó�� �Ͽ����Ƿ� ���Ƿ� �߰�
		}
		fclose(file);
	}
	else
	{
		printf("=== ��й�ȣ�� Ʋ�Ⱦ��=== \n\n");
		printf("�Ϲ̷� ��� ������!! ");
	}
}