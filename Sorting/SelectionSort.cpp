#include <iostream>
using namespace std;

void SelectionSort(int a[], int n){
  int min;
  for(int i=0; i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
    if(a[j]<a[min])
    min=j;
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;

  }
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
  SelectionSort(arr,n);
}