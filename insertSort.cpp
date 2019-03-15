#include<stdio.h>
void insertSort( int A[], int n ){
	for( int i = 1; i < n; i++ ){
		int get = A[i];
		int j = i - 1;
		while( j >= 0 && A[j] > get ){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = get;
	}
}
int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	insertSort(A,n);
	printf("≤Â»Î≈≈–ÚΩ·π˚£∫");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
