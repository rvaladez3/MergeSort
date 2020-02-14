#include <iostream>
#include <climits>

using namespace std;

void merge(int* A, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int* L;
    L = new int [n1+ 1];
    int* R;
    R = new int [n2 + 1];
    for(int i = 1; i < n1; i++){
        L[i] = A[p + i -1];
    }
    for(int j = 1; j < n2; j++){
        R[j] = A[q + j];
    }
    int k = 0;
    int i = 0;
    int j = 0;
    //while (((int i = 0 ) < n1) && ((int j = 0) < n2))
    while( i < n1 && j <n2){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

}
void mergeSort(int* arr, int p, int r){
    if (p < r){
        int div = (p +(r - p))/2;

        mergeSort(arr, p, div);
        mergeSort(arr,div + 1, r );

        merge(arr,p,div,r);



    }
}

int main() {
    int n;
    int* array;
    cin >> n;
    array = new int [n];
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        array[i] = j;
    }
mergeSort(array, 0, n - 1);

}