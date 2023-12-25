#include <iostream>
using namespace std;
void Sentinel(int arr[],int Size,int data);

int main()
{   int Size;
    cout<<"Please Enter the size of array : ";
    cin>>Size;
    int arr[Size];
    for(int i=0;i<Size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter number to search for : ";
    int data;
    cin>>data;
    Sentinel(arr,Size,data);


    return 0;
}

void Sentinel(int arr[],int Size,int data){
int last = arr[Size-1];
arr[Size-1]=data;
int i=0;
while(arr[i]!=data){
    i++;
}
arr[Size-1]=last;
if((i<Size-1) || (arr[Size-1]==data)){
    cout<<"Number Found"<<endl;
}
else{
    cout<<"Number not Found"<<endl;
}
}
