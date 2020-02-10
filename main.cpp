#include <iostream>
using namespace std;

void mergeSort(int* A, int p, int q, int r){
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
int i = 1;
int j = 1;


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


    }