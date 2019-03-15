#include<stdio.h>
void swap( int A[], int i, int j ){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void bubbleSort(int A[], int n){
	for( int i=0; i < n-1; i++ ){
		for( int j = 0; j < n-1-i; j++ ){
			if( A[j] > A[j+1] ){
				swap(A,j,j+1);
			}
		}
	}
}

int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	bubbleSort(A,n);
	printf("Ã°ÅÝÅÅÐò½á¹û£º");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
