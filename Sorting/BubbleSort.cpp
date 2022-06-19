#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n){
  int i,j;
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
 }
 for(int f=0; f<n;f++){
  cout<<arr[f]<<endl;
 }
}
int main(){  
  int x;
cout<<"Enter the size of array:";
cin>>x;

  int arrayy[x]={0};
  for(int i=0;i<x;i++){
    cout<<"Enter Element "<<i+1<<":";
    cin>>arrayy[i];
  }
  BubbleSort(arrayy,x);
}
