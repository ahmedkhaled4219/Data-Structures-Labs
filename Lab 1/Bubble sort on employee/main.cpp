#include <iostream>

using namespace std;

class employee
{
    string name;
    int id;
    public:
     employee(){
         id=0;
        }
     employee(int x){
         id=x;
     }
    void set_id(int i){
         id=i;
     }
    int get_id(){
      return id;
  }
};

void sort_emp(employee arr[],int Size){
    for(int j=0;j<Size-1;j++){

    for(int i=0;i<Size-1-j;i++){

    if(arr[i].get_id()>arr[i+1].get_id()){
     swap(arr[i],arr[i+1]);
   }
  }
 }
 for(int i=0;i<Size;i++){
    cout<<arr[ i].get_id()<<endl;
 }
}

int main()
{


employee arr[3];
arr[0].set_id(5);
arr[1].set_id(3);
arr[2].set_id(9);
sort_emp(arr,3);


    return 0;
}




