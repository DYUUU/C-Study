#include <stdio.h>

void main() {

	//// �� ���� ���
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//// ���� �ʱ�ȭ�� �ݵ�� �ؾ� ��
	//int arr[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//

	// �迭 ũ��� �׻� ����� ����
	//int size = 10;
	//int arr[size]; // �� ��.

	// 3��° ���� �ڵ����� '0'���� �ʱ�ȭ ��.
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]�� ������
	//float arr_f[5] = { 1.0f,2.0f,3.0f };
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f\n", arr_f[i]);
	//}

	// ���� vs ���ڿ�
	//char c = 'A';
	//printf("%c", c);

	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� \0�� ���ԵǾ�� ��.
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

	//char kor[] = "�ֶ���";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//// ���� 1���� : 1 byte
	//// �ѱ� 2���� : 2 byte
	//// �� ��
	//// En gl ish
	//// char ũ�� : 1 byte

	/*char c_array[7] = { 'c','o','d','i','n','g' };
	* char c_array[6] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);*/

	// ���� �ܿ� ���� ������ �ִٸ� NULL�� �ڵ����� ����.
	// ���ڸ� ���� ���� ASCII �ڵ� ���� ��� => NULL�� 0 ���� !

	// ���ڿ� �Է� �ޱ� : ������ ���� ���� ����
	/*char name[256];
	printf("�̸��� �Է��ϼ��� ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// ���� : ASCII �ڵ�? ANSI (�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128 �� �ڵ� (0-127)
	// a : 97
	// A : 76
	// 0 : 48

	//int arr[10] = { 1 };
	//printf("%d\n", arr); // �����Ⱚ ����
	//for(int i =0; i <10; i++)
	//	printf("%d\n", arr[i]); // 1 0 0 0 0 0 0 ����

}