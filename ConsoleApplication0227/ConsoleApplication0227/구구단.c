// 4. �� �� ��� ���.
// ��� ������
// ������ = i - i / 2 * 2. �� = i / 2.
/*
#include<stdio.h>
#define NUM 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0; // ��, ��, ��� ��.

	int s = 0, e = NUM - 1; //���۰� ��. (�������� ��µǾ�� �ϱ� ������ mid �� ����ؼ� �ִ´�.
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) { // ��
		if (i % 2 == 0) { // ������ ������ ����.(¦�� ��� Ȧ�� ���� �����ϴ� ����)
			for (j = s; j <= e; j++) { //�� (�����ϸ鼭)
				k = k + 1;
				array[i][j] = k;
			}
		} else {
			for (j = e; j >= s; j--) { //�� (�پ��鼭)
				k = k + 1;
				array[i][j] = k;
			}
		}
	}

	// 5 * 5 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
*/

// 3. 7�� 7�� ������ ���.
// 0  0  0  1  0  0  0
// 0  0  2  3  4  0  0
// 0  5  6  7  8  9  0
//10 11 12 13 14 15 16
// 0 17 18 19 20 21  0
// 0  0 22 23 24  0  0
// 0  0  0 25  0  0  0
/* 
#include<stdio.h>
#define NUM 7 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0;
	
	int mid = NUM / 2; //��� ���.
	int s = mid, e = mid; //���۰� ��. (�������� ��µǾ�� �ϱ� ������ mid �� ����ؼ� �ִ´�.
	
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = s; j <= e; j++) {
			k = k + 1;
			array[i][j] = k;
		}
		if (i < mid) { // ���� �������� ����뺸�� ������ ����.
			s = s - 1;
			e = e + 1;
		}
		else {
			s = s + 1;
			e = e - 1;
		}
	}

	// 7 * 7 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} 
*/

// 2-2 7�� 7�� �𷡽ð� ��� [2����].
//1  2  3  4  5  6  7
//0  8  9 10 11 12  0
//0  0 13 14 15  0  0
//0  0  0 16  0  0  0
//0  0 17 18 19  0  0
//0 20 21 22 23 24  0
//25 26 27 28 29 30 31
/*
#include<stdio.h>
#define NUM 7 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0;
	int s , e; //���۰� �� ��. (�ʱⰪ�� ����)
	int mid = NUM / 2; //��� ���. (�𷡽ð� ����� Ȧ���� �����ϴ�.)
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) { //��
		if (i < mid) {
			s = i;
			e = NUM - 1 - i;
		} else {
			s = NUM - 1 -i;
			e = i;
		}
		for (j = s; j <= e; j++) { //��
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 7 * 7 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
*/

// 2-1 7�� 7�� �𷡽ð� ���.
//1  2  3  4  5  6  7
//0  8  9 10 11 12  0
//0  0 13 14 15  0  0
//0  0  0 16  0  0  0
//0  0 17 18 19  0  0
//0 20 21 22 23 24  0
//25 26 27 28 29 30 31
/* #include<stdio.h>
#define NUM 7 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0;
	int s = 0, e = NUM - 1; //���۰� ��.
	int mid = NUM / 2; //��� ���.
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = s; j <= e; j++) {
			k = k + 1;
			array[i][j] = k;
		}
		if (i < mid) { // ���� �������� ����뺸�� ������ ����.
			s = s + 1;
			e = e - 1;
		} else { 
			s = s - 1;
			e = e + 1;
		}
	}

	// 7 * 7 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-4 5�� 5�� ���� �ﰢ�� ���� []
// 1  2  3  4  5
// 6  7  8  9  0
// 10 11 12  0  0
// 13 14  0  0  0
// 15  0  0  0  0
/* #include<stdio.h>
#define NUM 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0;
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM - i; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-3 5�� 5�� ���� �ﰢ�� ���� []
// 1  2  3  4  5
// 0  6  7  8  9
// 0  0 10 11 12
// 0  0  0 13 14
// 0  0  0  0 15
/* #include<stdio.h>
#define NUM 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte),
	int i, j, k = 0;
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = i; j < NUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-2 5�� 5�� ���� �ﰢ�� ���� []
// 0  0  0  0  1
// 0  0  0  2  3
// 0  0  4  5  6
// 0  7  8  9 10
// 11 12 13 14 15
/* #include<stdio.h>
#define NUM 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte),
	int i, j, k = 0;
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = NUM-1-i; j < NUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}	

	// 5 * 5 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-1 5�� 5�� ���� �ﰢ�� ���� []
// 1  0  0  0  0
// 2  3  0  0  0
// 4  5  6  0  0
// 7  8  9 10  0
// 11 12 13 14 15

/* #include<stdio.h>
#define NUM 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
int main(void) {

	int array[NUM][NUM] = {0}; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte), 
	int i, j, k = 0;
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < NUM; i++) {
		for (j = 0; j <= i; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 ��� (����� ��� �Ѵ�)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}  */

// Call by referance (��ũ�� mecro) , call by value (������ ���)

// 5�� 6�� ���� ä���.
/* #include<stdio.h>
#define ROW 5 //��� ����. ����� ����ŭ ���ǽ� ���̷� ���ɼ� �ִ�.[C�� Ư��.]
#define COLNUM 6
int main(void) {

	int array[ROW][COLNUM]; // [][] 2���� �迭�� ����. �ε����� 0���� ����. (4byte)
	int i, j, k = 0;
	//2���� �迭�� ������ �Է�.
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLNUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}
	// ���
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLNUM; j++) {
			printf("%3d" ,array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */
// 1���� �迭 ���.
/* 
#include<stdio.h>
int main(void) {

	int array[ROW]; // [] �迭�� ����. �ε����� 0���� ����. (4byte)
	int i, k = 0;
	//1���� �迭�� ������ �Է�.
	for (i = 0; i < ROW; i++) {
		k = k + 1;
		array[i] = k;
	}
	// 1���� �迭�� ������ ���.
	for (i = 0; i < ROW; i++) {
		printf("%3d \n",array[i]);
	}

	system("pause");
	return 0;
} */


//������
/* #include<stdio.h>
int main(void) {

	int i, j, k = 0;

	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			k = i * j; //���ϱ� ����ؼ� ����
			printf("%2d * %2d = %2d \n", i,j,k);
		}
		printf("--------------%2d ��--------------- \n",i);
	}

	printf("%2d , %2d , %2d \n", i, j, k); // i = 10 , j = 10 , k =  
	system("pause");
	return 0;
} */