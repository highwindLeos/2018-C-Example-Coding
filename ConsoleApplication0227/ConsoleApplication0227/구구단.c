// 4. ㄹ 자 모양 출력.
// 몫과 나머지
// 나머지 = i - i / 2 * 2. 몫 = i / 2.
/*
#include<stdio.h>
#define NUM 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0; // 열, 행, 출력 값.

	int s = 0, e = NUM - 1; //시작과 끝. (가운대부터 출력되어야 하기 때문에 mid 를 계산해서 넣는다.
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) { // 행
		if (i % 2 == 0) { // 나누기 나머지 연산.(짝수 행과 홀수 행을 구분하는 조건)
			for (j = s; j <= e; j++) { //열 (증가하면서)
				k = k + 1;
				array[i][j] = k;
			}
		} else {
			for (j = e; j >= s; j--) { //열 (줄어들면서)
				k = k + 1;
				array[i][j] = k;
			}
		}
	}

	// 5 * 5 출력 (출력은 모두 한다)
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

// 3. 7행 7열 마름모 모양.
// 0  0  0  1  0  0  0
// 0  0  2  3  4  0  0
// 0  5  6  7  8  9  0
//10 11 12 13 14 15 16
// 0 17 18 19 20 21  0
// 0  0 22 23 24  0  0
// 0  0  0 25  0  0  0
/* 
#include<stdio.h>
#define NUM 7 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0;
	
	int mid = NUM / 2; //가운데 계산.
	int s = mid, e = mid; //시작과 끝. (가운대부터 출력되어야 하기 때문에 mid 를 계산해서 넣는다.
	
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = s; j <= e; j++) {
			k = k + 1;
			array[i][j] = k;
		}
		if (i < mid) { // 행을 기준으로 가운대보다 작을때 까지.
			s = s - 1;
			e = e + 1;
		}
		else {
			s = s + 1;
			e = e - 1;
		}
	}

	// 7 * 7 출력 (출력은 모두 한다)
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

// 2-2 7행 7열 모래시계 모양 [2형태].
//1  2  3  4  5  6  7
//0  8  9 10 11 12  0
//0  0 13 14 15  0  0
//0  0  0 16  0  0  0
//0  0 17 18 19  0  0
//0 20 21 22 23 24  0
//25 26 27 28 29 30 31
/*
#include<stdio.h>
#define NUM 7 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0;
	int s , e; //시작과 끝 값. (초기값이 없다)
	int mid = NUM / 2; //가운데 계산. (모래시계 모양은 홀수만 가능하다.)
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) { //행
		if (i < mid) {
			s = i;
			e = NUM - 1 - i;
		} else {
			s = NUM - 1 -i;
			e = i;
		}
		for (j = s; j <= e; j++) { //열
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 7 * 7 출력 (출력은 모두 한다)
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

// 2-1 7행 7열 모래시계 모양.
//1  2  3  4  5  6  7
//0  8  9 10 11 12  0
//0  0 13 14 15  0  0
//0  0  0 16  0  0  0
//0  0 17 18 19  0  0
//0 20 21 22 23 24  0
//25 26 27 28 29 30 31
/* #include<stdio.h>
#define NUM 7 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0;
	int s = 0, e = NUM - 1; //시작과 끝.
	int mid = NUM / 2; //가운데 계산.
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = s; j <= e; j++) {
			k = k + 1;
			array[i][j] = k;
		}
		if (i < mid) { // 행을 기준으로 가운대보다 작을때 까지.
			s = s + 1;
			e = e - 1;
		} else { 
			s = s - 1;
			e = e + 1;
		}
	}

	// 7 * 7 출력 (출력은 모두 한다)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-4 5행 5열 직각 삼각형 도형 []
// 1  2  3  4  5
// 6  7  8  9  0
// 10 11 12  0  0
// 13 14  0  0  0
// 15  0  0  0  0
/* #include<stdio.h>
#define NUM 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0;
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM - i; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 출력 (출력은 모두 한다)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-3 5행 5열 직각 삼각형 도형 []
// 1  2  3  4  5
// 0  6  7  8  9
// 0  0 10 11 12
// 0  0  0 13 14
// 0  0  0  0 15
/* #include<stdio.h>
#define NUM 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte),
	int i, j, k = 0;
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = i; j < NUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 출력 (출력은 모두 한다)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-2 5행 5열 직각 삼각형 도형 []
// 0  0  0  0  1
// 0  0  0  2  3
// 0  0  4  5  6
// 0  7  8  9 10
// 11 12 13 14 15
/* #include<stdio.h>
#define NUM 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = { 0 }; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte),
	int i, j, k = 0;
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = NUM-1-i; j < NUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}	

	// 5 * 5 출력 (출력은 모두 한다)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */

// 1-1 5행 5열 직각 삼각형 도형 []
// 1  0  0  0  0
// 2  3  0  0  0
// 4  5  6  0  0
// 7  8  9 10  0
// 11 12 13 14 15

/* #include<stdio.h>
#define NUM 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
int main(void) {

	int array[NUM][NUM] = {0}; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte), 
	int i, j, k = 0;
	//2차원 배열에 데이터 입력.
	for (i = 0; i < NUM; i++) {
		for (j = 0; j <= i; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}

	// 5 * 5 출력 (출력은 모두 한다)
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}  */

// Call by referance (메크로 mecro) , call by value (값으로 사용)

// 5행 6열 도형 채우기.
/* #include<stdio.h>
#define ROW 5 //상수 정의. 상수의 값만큼 조건식 길이로 사용될수 있다.[C의 특성.]
#define COLNUM 6
int main(void) {

	int array[ROW][COLNUM]; // [][] 2차원 배열을 선언. 인덱스는 0부터 잡힘. (4byte)
	int i, j, k = 0;
	//2차원 배열에 데이터 입력.
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLNUM; j++) {
			k = k + 1;
			array[i][j] = k;
		}
	}
	// 출력
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLNUM; j++) {
			printf("%3d" ,array[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
} */
// 1차원 배열 출력.
/* 
#include<stdio.h>
int main(void) {

	int array[ROW]; // [] 배열을 선언. 인덱스는 0부터 잡힘. (4byte)
	int i, k = 0;
	//1차원 배열에 데이터 입력.
	for (i = 0; i < ROW; i++) {
		k = k + 1;
		array[i] = k;
	}
	// 1차원 배열에 데잍터 출력.
	for (i = 0; i < ROW; i++) {
		printf("%3d \n",array[i]);
	}

	system("pause");
	return 0;
} */


//구구단
/* #include<stdio.h>
int main(void) {

	int i, j, k = 0;

	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			k = i * j; //곱하기 계산해서 누적
			printf("%2d * %2d = %2d \n", i,j,k);
		}
		printf("--------------%2d 단--------------- \n",i);
	}

	printf("%2d , %2d , %2d \n", i, j, k); // i = 10 , j = 10 , k =  
	system("pause");
	return 0;
} */