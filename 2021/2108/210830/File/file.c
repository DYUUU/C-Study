#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

#define MAX 10000
char line[MAX];	//char line[10000]
char* addr = "C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt";

void main_file()
{
	// 파일 입출력
	// 파일에 어떤 데이터를 저장
	// 파일에 저장된 데이터를 불러오기
	// fputs, fgets(쌍)
	//FILE* file = fopen("C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt", "wb"); // 읽기 목적으로
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용해서 글을 적어볼게요\n",file);
	//fputs("잘 적히는지 확인해주세요\n",file);
	//fclose(file);


	//반드시 파일을 열었으면 파일을 닫아주세요

	// 파일 읽어 오기
	//FILE* file = fopen("C:\\Users\\juram\\Desktop\\Dev\\C-Study\\210830\\File\\test1.txt", "rb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패 \n");
	//	return 1;
	//}
	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s", line);
	//}
	//fclose(file);


	// fprintf, fscanf (쌍)
	int num[6] = { 0 }; // 추첨번호
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];
	//FILE* file = fopen(addr, "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;	
	//}

	//// 로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨 번호", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스번호", 7);

	//fclose(file);

	FILE* file = fopen(addr, "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
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
