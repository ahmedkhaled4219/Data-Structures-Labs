#include <iostream>

using namespace std;
int partioning(int arr[],int startIndex,int endIndex);
void QuickSort(int arr[],int start,int End);

int main()
{  int Size;
    cout<<"Please Enter the size of array : ";
    cin>>Size;
    int arr[Size];
    for(int i=0;i<Size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    QuickSort(arr,0,Size);
    cout<< "Your Elements after sorting : ";

    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

int partioning(int arr[],int startIndex,int endIndex){
   int pivot=arr[startIndex];
   int i=startIndex;s
   int j=endIndex;
   while(i<j){
    do{
       i++;
      }
    while(arr[i]<=pivot);
    do{
        j--;
       }
     while(arr[j]>pivot);
    if(i<j){
        swap(arr[i],arr[j]);
    }
   }
   swap(arr[startIndex],arr[j]);
   return j;
   }

void QuickSort(int arr[],int start,int End){
        if(start<End){
       int pivot = partioning(arr,start,End);
       QuickSort(arr,start,pivot);
       QuickSort(arr,pivot+1,End);
       }
   }
