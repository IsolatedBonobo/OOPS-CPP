#include<iostream>
using namespace std;
class animal{
    public:
    int age ;
    int weight;

    // destructor called code
    ~animal(){
        cout<<"destructor called"<<endl;

    }
};
int main(){
    // on allocating memory statically destructor will be called automatically for it 
    animal a;
    a.age = 3;

    // on allocating memory dynaically --- we have to delete in our own side 
    animal *b = new animal(); 
    b->age = 12;
    // destructor called for b is 
    delete b;

}