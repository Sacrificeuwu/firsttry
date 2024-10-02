#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
//int CountBull(int countBull, int n) {
//	for (int i = 0; i < n; ++i) {
//		if (playerAnswer )
//	}
//}

int main() {
	int n = 0;
	int num = 0;
	int countBull = 0;
	srand(time(NULL));
	printf("Enter lentgth of namber ");
	scanf_s("%d", &n);
	int guessNum[10];
	int cow = 0;
	int usedNum[10];
	int playerAnswer[10];
	int playerAnswer1 = 0;
	for (int i = 0; i < n; ++i) {
		num = rand() % 10;
		for (int g = 0; g < n; ++g) {
			while (num == usedNum[g] || num == 0) {
				num = rand() % 10;
			}
		}
		usedNum[i] = num;
		guessNum[i] = num;


	}
	for (int i = 0; i < n; ++i) {
		printf("%d", guessNum[i]);
	}

	printf("Guess namber ");
	while (countBull != n) {
		cow = 0;
		countBull = 0;
		for (int i = 0; i < n; ++i) {
		scanf_s("%d", &playerAnswer1);
		playerAnswer[i] = playerAnswer1;
		}
		for (int i = 0; i < n; ++i) {
			for (int g = 0; g < n; ++g) {
				if (guessNum[i] == playerAnswer[g] && g != i) {
					cow += 1;
				}
			}
		}
		for (int i = 0; i < n; ++i) {
			if (playerAnswer[i] == guessNum[i]) {
				countBull += 1;
			}
		}
		printf("Count cow: %d\n", cow);
		printf("Count bull: %d\n", countBull);
	}
	printf("You Win!!!");
	return 0;
}
// 
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//	int main() {
//		const int SIZE = 10;
//		int arr[SIZE];
//		int used[SIZE] = { 0 };
//		int n = 0;
//		srand(time(NULL));
//		printf("Enter lentgth of namber ");
//		scanf_s("%d", &n);
//		for (int i = 0; i < n; ++i) {
//			int num;
//			do {
//				num = rand() % n + 1;
//			} while (used[num - 1]);
//
//			arr[i] = num;
//			used[num - 1] = 1;
//		}
//
//		for (int i = 0; i < n; i++) {
//			printf("%d ", arr[i]);
//		}
//
//		return 0;
//	}
