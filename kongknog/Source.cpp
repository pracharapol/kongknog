#include<stdio.h>
void star() {
	int x;
	printf("Enter Number : ");
	scanf_s("%d", &x);
	for (int i = 1;i <= x;i++) {
		for (int j = 1;j <= x;j++) {
			printf(" ");
		}
		for (int j = x;j >= i;j--) {
			printf(" ");
		}
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		for (int j = 2;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}	
	
	
for (int i = 1;i <= x-1;i++) {
		printf(" ");
	}
	for (int i = 1;i <= (x + 1) * 2+1;i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1;i <= x - 3;i++) {
		printf(" ");
	}
	for (int i = 1;i <= (x + 3) * 2+1;i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1;i <= x;i++) {
		for (int j = 0;j <= x;j++) {
			printf(" ");
		}
		for (int j = 1;j <= x;j++) {
			printf("*");
		}
		for (int j = 2;j <= x;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = x/3;i <= x;i++) {
		for (int j = 0;j <= x;j++) {
			printf(" ");
		}
		for (int j = 1;j <= x;j++) {
			printf("*");
		}
		for (int j = 2;j <= x;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1;i <= x;i++) {
		for (int j = x-1;j >= i;j--) {
			printf(" ");
		}
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		for (int j = 0;j <= x;j++) {
			printf("*");

		}
		for (int j = 1;j <= x;j++) {
			printf("*");

		}
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}

}
int main() {
	star();
	printf("\n");
	printf("go go go!!!");
	return 0;

}