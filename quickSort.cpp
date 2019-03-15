#include<stdio.h>
void swap( int A[], int i, int j ){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
} 

int partition( int A[], int left, int right ){
	int pivot = A[right];
	int tail = left - 1;
	for( int i = left; i < right; i++ ){
		if( A[i] <= pivot ){
			swap( A, ++tail, i );
		}
	}
	swap( A, tail + 1, right );
	return tail + 1;
}

void quickSort( int A[], int left, int right ){
	if( left >= right ){
		return;
	}
	
	int pivot_index = partition( A, left, right );
	quickSort( A, left, pivot_index - 1 );
	quickSort( A, pivot_index + 1, right );
}

int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	quickSort(A,0,n-1);
	printf("快速排序结果：");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
