#include<iostream>
using namespace std;
// there are three types of constructor are as (1)default constructor (2)parametrised constructor (3)copy constructor

class animal{
    public:
    int weight;
    int age ;
    string name;
    void eating(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }


    // default constructor called 
    animal(){
        // main work of cinstructor is intializing as 
        this->age = 0 ;
        this->name = "";

        cout<<"constructor called"<<endl;
    }

    // parametrised constructor called
    animal(int age , int weight){
        this-> age = 0;
        this-> weight = 0;
        cout<<"parametrised constructor called"<<endl;
    }
    
    // copy constructor called 
    animal(animal &a){
        this-> age = a.age;
        this -> name = a.name;
        this -> weight = a.weight;
        cout<<"copy constructor called"<<endl;
    }

};
int main(){
    animal a(12,12);
    animal *b = new animal(23,65);

    // for to copy classes 
    animal d;
    animal c = d;
    // or another way is 
    animal e(d);
}