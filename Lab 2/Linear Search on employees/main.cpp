#include <iostream>
using namespace std;

class employee
{
    string name;
    int id;
    int salary;

    public:
     employee(){
         id=0;
        }
     employee(string n,int i, int s){
         name=n;
         id=i;
         salary=s;
     }
    void set_id(int i){
         id=i;
     }
    int get_id(){
      return id;
  }
  void set_salary(int s){
      salary=s;
  }
  int get_salary(){
      return salary;
  }
  void set_name(string n){
      name=n;
  }
  string get_name(){
      return name;
  }

};

void searchById(employee arr[],int Size,int data){

for(int i=0;i<Size;i++){

    if(arr[i].get_id()==data){
        cout<<"ID Found"<<endl;
    }

}
}

void searchByName(employee arr[],int Size,string data){
for(int i=0;i<Size;i++){

    if(arr[i].get_name()==data){
        cout<<"Name Found"<<endl;
    }

}
}
void searchBySalary(employee arr[],int Size,int data){

for(int i=0;i<Size;i++){

    if(arr[i].get_salary()==data){
        cout<<"Salary Found"<<endl;
    }

}
}



int main()
{
    employee emp1("mohamed",100,25000);
    employee emp2("ahmed",200,30000);
    employee emp3("moustafa",4,50000);
    employee emp4("nasser",9,5000);
    employee emp5("sasa",15,25000);


    employee arr[]={emp1,emp2,emp3,emp4,emp5};
    searchBySalary(arr,5,5000);
    return 0;
}
