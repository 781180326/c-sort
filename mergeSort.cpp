#include<stdio.h>
#include<limits.h>
void merge( int A[], int left, int mid, int right ){
	int len = right - left + 1;
	int *temp = new int[len]; //辅助数组 
	int index = 0;
	int i = left;				//前一数组的起始元素 
	int j = mid + 1;			//后一数组的起始元素 
	while( i <= mid && j <= right ){
		temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];
	}
	while( i <= mid ){			//将另一序列剩下的所有的元素直接复制到合并序列队尾 
		temp[index++] = A[i++];
	}
	while( j <= right ){		//将另一序列剩下的所有的元素直接复制到合并序列队尾
		temp[index++] = A[j++];
	}
	for( int k = 0; k < len; k++ ){	//将辅助数组转移到原始数组 
		A[left++] = temp[k];
	}
}

//递归实现的归并排序 
void mergeSortRecursion( int A[], int left, int right ){
	if (left == right) return ;
	int mid = (left + right) / 2;
	mergeSortRecursion( A, left, mid );
	mergeSortRecursion( A, mid+1, right );
	merge( A,left, mid, right );
} 

//迭代实现的归并排序 
void mergeSort( int A[], int n ){
	int left, mid ,right;
	for( int i = 1; i < n; i*=2 ){
		left = 0;
		while( left + i < n ){
			mid = left + i - 1;
			right = mid + i < n ? mid + i : n - 1;
			merge(A,left,mid,right);
			left = right + 1;
		}
	}
}

int main(){
	int A[] = {16,34,3,6,5,1,8,7,2,4};
	int n = sizeof(A) / sizeof(int);
	mergeSortRecursion(A,0,n-1);
	printf("归并排序结果：");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	mergeSort(A,n);
	printf("归并排序结果：");
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	return 0;
}

