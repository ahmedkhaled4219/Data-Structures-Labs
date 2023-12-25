#include <iostream>

using namespace std;
void Merge(int myarr[],int left,int m,int right);
void MergeSort(int arr[],int left,int right);
int main()
{
int Size;
    cout<<"Please Enter the size of array : ";
    cin>>Size;
    int arr[Size];
    for(int i=0;i<Size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    MergeSort(arr,0,Size);
    cout<< "Your Elements after sorting : ";

    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

 void Merge(int myarr[],int left,int m,int right){
       int i,j,k;

       int size1=m-left+1;
       int size2=right-m;

       int *arr1=new int[size1];
       int *arr2=new int[size2];

       for(i=0;i<size1;i++){
        arr1[i]=myarr[left+i];
       }
       for(j=0;j<size2;j++){
        arr2[j]=myarr[m+1+j];
       }
       i=j=0; //first index in arr1,arr2
       k=left; // first index of myarr

       while(i<size1 && j<size2){

        if(arr1[i]<arr2[j]){
                myarr[k]=arr1[i];
                i++;
        }
        else{
            myarr[k]=arr2[j];
            j++;
        }
        k++;
       }
       while(i<size1){
        myarr[k]=arr1[i];
        k++;
        i++;
       }
       while(j<size2){
        myarr[k]=arr2[j];
        k++;
        j++;
       }
   }

 void MergeSort(int arr[],int left,int right){
       int m=left+(right-left)/2;
     if(left<right){
       MergeSort(arr,left,m);
       MergeSort(arr,m+1,right);
       Merge(arr,left,m,right);
   }
 }
