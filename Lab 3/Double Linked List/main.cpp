#include <iostream>
using namespace std;
template<class h>

class Node{
public:

h data;
Node<h>*prev;
Node<h>*next;

Node<h>(){
next=nullptr;
prev=nullptr;
data=h();
}
Node<h>(h d){
data=d;
next=nullptr;
prev=nullptr;
}
};

template<class h>
class LinkedList{

Node<h>*head;
Node<h>*tail;
int Count;

public:
    LinkedList(){
     Count=0;
     head=nullptr;
     tail=nullptr;
    }

    LinkedList(LinkedList& l){
        head=tail=nullptr;
        Count=0;
        Node<h>* pcopy=l.head;
        while(pcopy!=nullptr){
            this->add(pcopy->data);
            pcopy=pcopy->next;
        }
    }
//ADD
void add(h Data){
    Node<h>* padd=new Node<h>(Data);
    if(head==nullptr){
        head=tail=padd;
    }
    else{
        tail->next=padd;
        padd->prev=tail;
        tail=padd;
    }
Count++;
}
//Display
void display(){
Node<h>* pdisplay=head;
while(pdisplay!=nullptr){
cout<<pdisplay->data<<endl;
pdisplay=pdisplay->next;
}
}
//CLEAR
void clearList(){
Node<h>* pdelete=head;
while(pdelete!=nullptr){
    head=head->next;
    delete pdelete;
    pdelete=head;
}
head=tail=nullptr;
Count=0;
}
//SEARCH
Node<h>* Search(h Data){
    Node<h>* psearch=head;
    while((psearch!=nullptr) && (psearch->data!=Data)){
        psearch=psearch->next;
    }
    return psearch;
}
//DELETE
void Delete(h Data){
Node<h>* pdelete=Search(Data);
if(pdelete==nullptr){
    cout<<"Not Found";
}
else{
    if(pdelete==head){
        //its the head and tail so we found one node
        if(pdelete==tail){
                delete pdelete;
                head=tail=nullptr;
        }
        //data=head
        else{
            head=head->next;
            head->prev=nullptr;
            delete pdelete;
        }

    }
    else{
            //data=tail
        if(pdelete==tail){
            tail=tail->prev;
            tail->next=nullptr;
            delete pdelete;
        }
        //node is in the middle
        else{
            pdelete->next->prev=pdelete->prev;
            pdelete->prev->next=pdelete->next;
            delete pdelete;
        }
    }
Count--;
}
}
//Insert After
void insertAfter(h after,h Data){
    Node<h>* pfound=Search(after);
    if(pfound!=nullptr){
         if(pfound==tail){
                add(Data);
         }
         else{
            Node<h>* pnew=new Node<h>(Data);
            pnew->next=pfound->next;
            pnew->prev=pfound;
            pfound->next->prev=pnew;
            pfound->next=pnew;
         }
        Count++;
    }
    else{
        cout<<"Data not found";
    }
}

};



int main()
{
    LinkedList<int> myList;
    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.add(4);
    myList.add(5);
    myList.add(6);

   //myList.insertAfter(6,7);
   //myList.Delete(5);
   //myList.Search(4);
   //myList.clearList();
   //myList.display();
    return 0;
}
