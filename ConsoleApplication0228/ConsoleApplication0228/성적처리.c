#include<stdio.h>
int main(void) {
	int a[6][9] = { 0 }; // 배열을 선언. 6행 9열. 해당 프로그램에선 [0]열과 [0]행은 사용하지않는다.
	int i, j, k, temp, io, sw = 0, rank; //변수의 선언과 초기화.
	int low = 1, high = 5, mid; // 시작과 끝 중간 위치 변수.

	// 데이터 입력.
	a[1][2] = 89, a[1][3] = 100,a[1][4] = 79, a[1][5] = 76;
	a[2][2] = 46, a[2][3] = 78, a[2][4] = 98, a[2][5] = 78;
	a[3][2] = 86, a[3][3] = 79, a[3][4] = 88, a[3][5] = 99;
	a[4][2] = 67, a[4][3] = 77, a[4][4] = 88, a[4][5] = 99;
	a[5][2] = 78, a[5][3] = 79, a[5][4] = 98, a[5][5] = 100;

	for (i = 1; i <= 5; i++) {
		a[i][1] = i; // 번호 열을 입력.
		for (j = 2; j <= 5; j++) { // 2열부터 계산
			a[i][6] += a[i][j]; // 총점 방에 총점을 계산해서 누적.
		}
		a[i][7] = a[i][6] / 4; //평균을 구한다.
		a[i][8] = 1; // 석차의 초기값은 1로 넣어놓는다.
	} /* 총점, 평균, 석차 초기치. */

	/*
	for (i = 1; i <= 5; i++) {  // 학생의 수 (열)
		for (j = 1; j <= 5; j++) {  
			if (a[i][6] < a[j][6]) { // 총점의 값들을 반복하며 비교한다.
				a[i][8]++; // 비교값이 큰 열이 있다면 석차에 1을 더해준다. a[i][8] = a[i][8] + 1
			}
		}
	} // 석차를 재입력(선택 정렬 비교를 통한 석차구하기, 조건문 사용.) 
	*/

	// 정렬 : 선택정렬 (석차 정렬)
	for (i = 1; i <= 4; i++) {
		for (j = i + 1; j <= 5; j++) {
			if (a[i][6] < a[j][6]) { //  총점기준
				a[i][8]++; //비교하는 자신의 석차를 +1
			} else {
				a[j][8]++; // 비교 당하는 타인의 석차를 +1
			}
		}
	}

	printf(" ---------- 정렬전 자료  출력 ---------- \n");
	printf("-----------------------------------------\n");
	printf("번 호 국어 수학 영어 과학 총합 평균 석차 \n");
	printf("-----------------------------------------\n");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 8; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	} // 모든 배열값을 출력.
	printf("-----------------------------------------\n");

	
	printf("석차를 입력하세요. 1 ~ 5 \n");
	scanf_s("%d", &rank); // 변수 입력을 받을 때는 & 를 변수앞에 붙여야한다.(변수의 주소)
	for (i = 1; i <= 5; i++) {
		if (a[i][8] == rank) {
			printf("-----------------------------------------\n");
			printf("번 호 국어 수학 영어 과학 총합 평균 석차 \n");
			printf("-----------------------------------------\n");
			for (k = 1; k <= 8; k++) {
				printf("%5d", a[i][k]);
			}
			printf("\n");
		}
<<<<<<< HEAD
		else {
			printf("찾는 자료가 없습니다. \n");
			break;
		}
	} // 자료 정렬 안된 자료 검색 - 순차 검색 (선형검색) 
=======
	} // 자료 정렬 안된 자료 검색 - 순차 검색 (선형검색)
>>>>>>> master

	// 정렬 
	// 선택정렬(O) 버블정렬 삽입정렬
	/*
	for (i = 1; i <= 4; i++) {
		for (j = i + 1; j <= 5; j++) {
			if (a[i][8] > a[j][8]) { // 조건배열의 열값의 따라서 정렬기준이 달라진다. 
				for (k = 1; k <= 8; k++) { // 모든 값을 비교해서 정렬해준다. (정렬시 임시로 값이 저장되는 변수가 하나 필요하다.)
					temp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = temp;
				}
			}
		}
	}
	*/

	// 버블정렬 
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 5 - i; j++) {
			if (a[j][8] > a[j+1][8]) { // 조건배열의 열값의 따라서 정렬기준이 달라진다. 
				for (k = 1; k <= 8; k++) { // 모든 값을 비교해서 정렬해준다. (정렬시 임시로 값이 저장되는 변수가 하나 필요하다.)
					temp = a[j][k];
					a[j][k] = a[j+1][k];
					a[j+1][k] = temp;
				}
			}
		}
	}

	printf(" ---------- 정렬후 자료  출력 ---------- \n");
	printf("-----------------------------------------\n");
	printf("번 호 국어 수학 영어 과학 총합 평균 석차 \n");
	printf("-----------------------------------------\n");
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 8; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	} // 모든 배열값을 출력.
	printf("-----------------------------------------\n");

	printf("석차를 입력하세요. 1 ~ 5 \n");
	scanf_s("%d", &rank); // 변수 입력을 받을 때는 & 를 변수앞에 붙여야한다.(변수의 주소)
	/*
	for (i = 1; i <= 5; i++) {
		if (a[i][8] == rank) {
			printf("-----------------------------------------\n");
			printf("번 호 국어 수학 영어 과학 총합 평균 석차 \n");
			printf("-----------------------------------------\n");
			for (k = 1; k <= 8; k++) {
				printf("%5d", a[i][k]);
			}
		}
		printf("\n");
	} // 자료 정렬 된 자료 검색 - 순차 검색 (선형검색)
	*/

	while (1) { // 무한 반복.
		if(low <= high){ // 첫자료와 끝자료의 위치 변수.
			mid = (low + high) / 2;
			if (a[mid][8] == rank) {
				printf("-----------------------------------------\n");
				printf("번 호 국어 수학 영어 과학 총합 평균 석차 \n");
				printf("-----------------------------------------\n");
				for (k = 1; k <= 8; k++) {
					printf("%5d", a[mid][k]);
				}
				printf("\n");
				break;
			} else if(a[mid][8] > rank) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		} else {
			printf("찾는 자료가 없습니다. \n");
			break;
		}
	}

	system("pause");
	return 0;
}