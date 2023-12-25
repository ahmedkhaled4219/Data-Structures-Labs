#include <iostream>
using namespace std;
int BinarySearch(int arr[],int Size, int data);

int main()
{
int Size;
    cout<<"Please Enter the size of array : ";
    cin>>Size;
    int arr[Size];
    cout<<"---Please Enter you array sorted---"<<endl;
    for(int i=0;i<Size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter number to search for : ";
    int data;
    cin>>data;
    int result=BinarySearch(arr,Size,data);
    if(result!=-1){
        cout<<"Number "<<data<<" Found at index "<<result;
    }
    else{
        cout<<"Number Not Found";
    }
    return 0;
}
int BinarySearch(int arr[],int Size, int data)
{
int start = 0;
int End = Size-1;
int midIndex;
while(start<=End)
{
midIndex = (start + End) / 2;
if (arr[midIndex] == data)
return midIndex;
if ( data< arr[midIndex])
End = midIndex-1;
else
start = midIndex+1;
}
return -1;
}
