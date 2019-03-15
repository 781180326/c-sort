#include<stdio.h>
void shellSort( int A[], int n ){
	int h = 0;
	while( h <= n ){
		h = 3*h + 1;
	}
	while( h >= 1 ){
		for( int i = (h-1)/3; i < n; i++ ){
			int j = i - h;
			printf("j = %d\n", j);
			int get = A[i];
			while( j >= 0 && A[j] > get ){
				A[j+h] = A[j];
				j = j - h;
				printf("j进入循环");
			}
			A[j+h] = get;
			printf("j+h = %d\n\n", j+h);
		}
		h = (h - 1) / 3;
	}
}
int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	shellSort(A,n);
	printf("希尔排序结果：");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
