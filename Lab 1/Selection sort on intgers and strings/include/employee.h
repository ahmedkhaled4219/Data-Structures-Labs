#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class employee
{
    string name;
    int id;
    int age;
    string department;

    public:
     employee(int x){
         id=x;
     }

    void set_id(int i){
         id=i;
     }

  int get_id(){
      return id;
  }


void sort_emp(employee arr[],int Size){
    for(int j=0;j<Size-1;j++){

    for(int i=0;i<Size-1-j;i++){

    if(arr[i].get_id()>arr[i+1].get_id()){
     swap(arr[i].get_id(),arr[i+1].get_id())
   }
  }
 }
}



};
employee(4);
employee(2);
employee(7);

#endif // EMPLOYEE_H
