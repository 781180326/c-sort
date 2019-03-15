#include<stdio.h>
void swap(int A[], int i, int j){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void selectSort( int A[], int n ){
	for( int i = 0; i < n-1; i++ ){
		int min = i;
		for( int j = i+1; j < n; j++ ){
			if(A[j] < A[min]){
				min = j;
			}
		}
		if( min != i ){
			swap(A,min, i);
		}
	}
}

int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	selectSort(A,n);
	printf("Ñ¡ÔñÅÅÐò½á¹û£º");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
