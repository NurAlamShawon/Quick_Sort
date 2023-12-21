#include <iostream>
using namespace std;
int partitions(int A[], int p, int r){

int i=p-1;
int j=p;
int pivot=A[r];
for(j;j<r;j++){
    if(A[j]<pivot){
        i++;
        swap(A[i],A[j]);

    }

}
swap(A[i+1],A[r]);

return (i+1);

}

void QuickSort( int A[],int p,int r){
if(p<r){
    int q = partitions ( A, p, r);

   QuickSort( A, p, (q-1));
   QuickSort( A, (q+1), r);
}



}





int main(){
    int r;
    cout<<"enter array size ";
    cin>>r;

int p=0,A[r];
for(int i=0;i<r;i++){
cin>>A[i];
}

QuickSort(A,p,r-1);
for(int i=0;i<r;i++){
cout<<" "<<A[i];
}

}
