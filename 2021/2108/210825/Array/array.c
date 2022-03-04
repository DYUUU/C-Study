#include <stdio.h>

void main() {

	//// 값 설정 방법
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//// 값은 초기화를 반드시 해야 함
	//int arr[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//

	// 배열 크기는 항상 상수로 선언
	//int size = 10;
	//int arr[size]; // 안 됨.

	// 3번째 값은 자동으로 '0'으로 초기화 됨.
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]와 동일함
	//float arr_f[5] = { 1.0f,2.0f,3.0f };
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f\n", arr_f[i]);
	//}

	// 문자 vs 문자열
	//char c = 'A';
	//printf("%c", c);

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 \0이 포함되어야 함.
	//char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
	/*char str[7] = "coding";
	printf("%s\n", str);*/

//	
// char str[] = "coding";
////	printf("%s\n", str);
////	printf("%d\n", sizeof(str));
//
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%c\n", str[i]);
//	}

	//char kor[] = "주람이";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//// 영어 1글자 : 1 byte
	//// 한글 2글자 : 2 byte
	//// 한 글
	//// En gl ish
	//// char 크기 : 1 byte

	/*char c_array[7] = { 'c','o','d','i','n','g' };
	* char c_array[6] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);*/

	// 문자 외에 남는 공간이 있다면 NULL이 자동으로 들어간다.
	// 문자를 적을 때는 ASCII 코드 값을 출력 => NULL이 0 번임 !

	// 문자열 입력 받기 : 경찰서 조서 쓰기 예제
	/*char name[256];
	printf("이름을 입력하세요 ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// 참고 : ASCII 코드? ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총 128 개 코드 (0-127)
	// a : 97
	// A : 76
	// 0 : 48

	//int arr[10] = { 1 };
	//printf("%d\n", arr); // 쓰레기값 나옴
	//for(int i =0; i <10; i++)
	//	printf("%d\n", arr[i]); // 1 0 0 0 0 0 0 나옴

}