#include <stdio.h>

void Array() {

	// int arr[z][y][x] 授
	// 1託据 壕伸
	int arr[3];
	// けけけ

	// 2託据 壕伸 
	int arr2[2][5];
	/*
		けけけけけ
		けけけけけ
	*/
	int arr3[4][2]; // 壕伸 = 8鯵
	/*
		けけ
		けけ
		けけ
		けけ
	*/

	// { [0,0],[0,1],
	//	[1,0],[1,1],
	//	[2,0],[2,1],
	//	[3,0],[3,1]
	//	}

	// 3託据 壕伸
	int arr4[3][3][3];
	/*
		けけけ
		けけけ
		けけけ
	*/

	int arr5[5] = { 1,2,3,4,5 };
	int arr6[2][5] = { 
						{ 1,2,3,4,5 }, 
						{ 1,2,3,4,5 } 
					};
	int arr7[4][2] = { 
						{1,2},
						{1,2},
						{1,2},
						{1,2} 
					};

	// ========================== key point !! 
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			printf("2託据 壕伸 [%d][%d]税 葵 %d\n", i,j, arr7[i][j]);
		}
		printf("\n");
	}


	int arr8[3][3][3] = { {{3,3,3},{3,3,3},{3,3,3}},
						{{3,3,3} ,{3,3,3} ,{3,3,3}},
						{{3,3,3} ,{3,3,3} ,{3,3,3}} };




}