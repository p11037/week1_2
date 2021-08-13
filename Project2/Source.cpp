#include<stdio.h>
int main() {
	int a[100];
	scanf_s("%d", &a[0]);
	scanf_s("%d", &a[1]);
	scanf_s("%d", &a[2]);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] > a[j]) {
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
		printf("%d ", a[i]);
	}


}