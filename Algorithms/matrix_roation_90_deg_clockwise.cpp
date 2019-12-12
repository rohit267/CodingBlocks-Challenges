#include <iostream>
using namespace std;
//initialize the array
void initArray(int a[][100], int rows, int cols){
    int temp=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            a[i][j]=temp;
            temp++;
        }
    }
}

void printArray(int a[][100], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//transpose the matrix
void transMatrix(int a[][100], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}
//mirror image the matrix
void mirrorImageMatrix(int a[][100],int rows,int cols){
    int noSwaps=rows/2;
    for(int i=0;i<noSwaps;i++){
        for(int j=0;j<rows;j++){
            swap(a[i][j],a[rows-i-1][j]);
        }
    }
}

int main() {
    int rows,cols;
    int a[100][100];
    cin>>rows>>cols;
    initArray(a,rows,cols);
    //printArray(a,rows,cols);
    transMatrix(a,rows,cols);
    //printArray(a,rows,cols);
    mirrorImageMatrix(a,rows,cols);
    printArray(a,rows,cols);
    return 0;
}
