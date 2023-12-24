#include <iostream>

using namespace std;
void selection_sort_int(int arr[],int Size);
void selection_sort_string(string arr[],int Size);

int main()
{
    string arr[3]={"aha","aaa","zzz"};


    selection_sort_string(arr,3);

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}

void selection_sort_int(int arr[],int Size){
        for(int j=0;j<Size-1;j++){

            int min_index=j;

            for(int i=j+1;i<Size;i++){

              if(arr[i]<arr[min_index]){
                min_index=i;
              }
            }
            swap(arr[j],arr[min_index]);
        }
}
void selection_sort_string(string arr[],int Size){
        for(int j=0;j<Size-1;j++){

            int min_index=j;

            for(int i=j+1;i<Size;i++){

              if(arr[i]<arr[min_index]){
                min_index=i;
              }
            }
            swap(arr[j],arr[min_index]);
        }
}

