#include <iostream>
using namespace std;

void InsertionSort(int a[], int n){
  for(int i=1;i<n;i++){
    int value= a[i];
    int hole = i;
    while(hole>0 && a[hole-1]>value){
      a[hole]=a[hole-1];
      hole=hole-1;
      }
      a[hole]=value;
}
 //Printing Out the array
  for (int x=0;x<n;x++){
    cout<<"Element "<<x+1<<":"<<a[x]<<endl;
  }
}

int main(){
  int n=0;
  cout<<"Enter the size of Array:";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter Element "<<i+1<<":";
    cin>>arr[i];
  }
  InsertionSort(arr,n);
}
