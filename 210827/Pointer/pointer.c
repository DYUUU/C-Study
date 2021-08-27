#include <stdio.h>
#include <time.h>

void swap(int a, int b);
void swapAddr(int *a, int *b);
void changeArray(int arr[]);

void pointer()
{
	// 포인터
	// [철수] ; 101호
	// [영희] ; 201호
	// [민수] : 301호
	// 각 문 앞에 '암호' 가 걸려 있음

	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;
	/*printf("철수네 주소 : %d, 암호 %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 %d\n", &민수, 민수);*/

	// 미션 맨 !

	//// 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int* 미션맨 = &철수; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	// 두 번째 미션 : 각 암호에 3을 곱해라
	/*미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
		미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 방문하는 곳의 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	printf("철수네 주소 : %d, 암호 %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 %d\n", &민수, 민수);*/

	// 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라!
	/*스파이
	=> 누군가의 아파트 주소
	미션맨*/


	/*int* 스파이 = 미션맨;
	printf("\n\n . . . 스파이가 미션 수행하는 중 \n\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d 암호 : %d\n", 스파이, *스파이);
	스파이 = &영희;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d 암호 : %d\n", 스파이, *스파이);
	스파이 = &민수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d 암호 : %d\n", 스파이, *스파이);*/

	// 배열?
	//int arr[3] = { 5,10,15 };
	//int *ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값  %d\n",i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값 %d\n",i, ptr[i]);
	//}

	//ptr[0] = 100;
	//ptr[1] = 200;  
	//ptr[2] = 300;

	//// *(arr+i) == arr[i] 똑같은 표현
	//// arr == arr 배열의 첫 번재 값의 주소와 동일 == &arr[0]
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값  %d\n", i, *(arr+i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("포인터 ptr[%d]의 값 %d\n", i, *(ptr+i));
	//}

	//printf("arr의 자체의 값 : %d\n", arr);
	//printf("arr[0]의 주소 : %d\n", &arr[0]);

	//printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);
	//printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	// *&은 상쇄되는 것이다. 즉 arr[0] == *&arr[0]

	//int a = 10;
	//int b = 20;
	//// a 와 b의 값을 바꾼다.
	//// Call by Value -> 값만 복사한다는 의미

	//printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	//swap(a, b);
	//printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

	//// Call by Reference -> 메모리 주소에서 직접 변환
	//printf("(주소값 전달) SwapAddr 함수 전 => a : %d, b : %d\n", a, b);
	//swapAddr(&a, &b);
	//printf("(주소값 전달) SwapAddr 함수 후 => a : %d, b : %d\n", a, b);

	// 배열일 때 arr2 -> 주소
	int arr2[3] = { 10,20,30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("arr2 : %d\n", arr2[i]);
	}

	// scanf에서 &num과 같이 &를 사용하는 이유
	
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d b : %d\n", a, b);

}

void swapAddr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)SwapAddr 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int arr[])
{
	arr[2] = 50;
}
