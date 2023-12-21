#include<iostream>
using namespace std;
// polymorphism
// object overloading

class param{
    public:
    int val;
    void operator + (param &obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }
};
// run time polymorphism 
class animal{
    public:
    void speak(){
        cout<<"spealing"<<endl;
    }

};
class dog:public animal{
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    // param obj1,obj2;
    // obj1.val = 6;
    // obj2.val = 4 ;
    // obj1 + obj2;
    animal *a = new animal;
    a->speak();
}