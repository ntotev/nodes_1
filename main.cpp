#include <iostream>

int main() { std::cout << "Hello World!\n"; 
  struct Node{
  int val;
  Node* next;
};

class List{
  private:
    Node* head;
    Node* tail;
  public:
    //constructor
    List(){
      head = NULL;
      tail = NULL;
    }
    void print(); //to print out the linked list
    //destructor
    //~ ---> caled tilde
    //~List();
//hello
};
void List::print(){
  Node * temp = head;
  while(temp !=NULL){
    cout << temp->val<< "\t";
    temp= temp->next;
  }
}

int main() {
  struct Node{
  int val;
  Node* next;
};

class List{
  private:
    Node* head;
    Node* tail;
  public:
    //constructor
    List(){
      head = NULL;
      tail = NULL;
    }
    void print(); //to print out the linked list
    //destructor
    //~ ---> caled tilde
    //~List();
//hello
};
void List::print(){
  Node * temp = head;
  while(temp !=NULL){
    cout << temp->val<< "\t";
    temp= temp->next;
  }
}

int main() {
  
}

}

  }