#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 비밀번호를 입력받아서
// 맞는 경우? 비밀 일기를 읽어와서 보여주고, 계속 작성하도록 합니다.
// 틀린 경우? 경고 메시지를 표시하고 종료합니다.

#define MAX 10000

void main()
{
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'비밀일기'에 오신 것을 환영합니다.\n");
	printf("비밀 번호를 입력하세요 : ");

	int i = 0;
	while (1)
	{
		c = getch(); // 엔터치면 비밀번호 입력 종료
		if (c == 13) // enter
		{
			password[i] = '\0';
			break;
		}
		else // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호 : skehzheld 나도코딩
	printf("\n\n === 비밀번호 확인 중 . . . === \n\n");
	if (strcmp(password, "kkk") == 0)
	{
		printf("=== 비밀번호 확인 완료 === \n\n");
		char* filename = "C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\secretDiary.txt";
		FILE* file = fopen(filename, "a+b");

		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요 ! 종료하시려면 EXIT 를 입력하세요 \n\n");

		while (1)
		{
			scanf("%[^\n]", contents);
			getchar(); // Enter 입력 Flush처리

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter 를 위에서 무시 처리 하였으므로 임의로 추가
		}
		fclose(file);
	}
	else
	{
		printf("=== 비밀번호가 틀렸어요=== \n\n");
		printf("니미럴 당신 누군디!! ");
	}
}