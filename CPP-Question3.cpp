#include<iostream>
using namespace std;


class AddAmount{
    private:
    int amount = 50;

public:
    AddAmount(){
    }
public:
    AddAmount(int a){
    amount = a+amount;
}
    void display() {
    cout <<"New Amount: "<< amount;
}

};

int main(){
   AddAmount a =  AddAmount();
   AddAmount b =  AddAmount(50);
   cout<<"Without parameter same amount."<<endl;
   a.display();
   cout<<""<<endl;
   cout<<"With parameter new amount."<<endl;
   b.display();
}
