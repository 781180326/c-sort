#include<stdio.h>
void swap(int A[], int i, int j){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void cocktailSort(int A[], int n){
	int left = 0;
	int right = n - 1;
	while( left < right ){
		for( int i = left; i < right; i++ ){
			if( A[i] > A[i+1] ){
				swap(A,i,i+1);
			}
		}
		right--;
		for( int i = right; i > left; i-- ){
			if( A[i-1] > A[i] ){
				swap(A,i-1,i);
			}
		}
		left++;
	}
}

int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	cocktailSort(A,n);
	printf("¼¦Î²¾ÆÅÅÐò½á¹û£º");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}
