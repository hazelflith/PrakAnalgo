#include <iostream>
using namespace std;

void mergeSort(int A[], int l, int r) 
{ 
	int i,j,k,n1,n2,q,p,L[99],R[99];
	n1 = q-p+1;
	n2 = r-q;
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        mergeSort(A, l, m); 
        mergeSort(A, m+1, r); 
        
    for (int i=1; i<n1;i++){
		L[i]=A[l+i-1];
	}
	for (int j=1; j<n2;j++){
		R[j]=A[r+j];
	}
	i = 0;  
    j = 0; 
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            A[k] = L[i]; 
            i++; 
        } 
        else
        { 
            A[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        A[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        A[k] = R[j]; 
        j++; 
        k++; 
    } 
    }
}
	void printArray(int A[], int size) {
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
}  
 
main(){
	int A[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(A)/sizeof(A[0]);
    cout<<"Array Awal\n";
    printArray(A, arr_size); 
    mergeSort(A, 0, arr_size - 1); 
  
    cout<<"\nSorted Array \n"; 
    printArray(A, arr_size); 
    return 0; 
}
