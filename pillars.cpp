#include<iostream>
using namespace std;
// 4 pillars of OOPS

// encapsulation : making of normal classes 
class animal{
    public:
    int age = 1;
    int weight;

    void eat(){
        cout<<"eating"<<endl;
    }
};
// Inheritance : accessing all data members from a parent class into a subclass 
class dog:protected animal{
    public:
    void print(){
        cout<<age<<endl;
    }
};

int main(){
    dog d1;
    d1.eat();

    
    
}