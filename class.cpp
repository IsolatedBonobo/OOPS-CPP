#include<iostream>
#include<vector>
using namespace std;
class animal{
    private:
    int weight;
    public:
    int age ;
    string name;
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }
    int getweight(){
        return weight;
    }
    void setweight(int w){
        weight = w;

    }


};
int main(){
    animal dog;
    // dog.age = 12;
    // dog.name = "kutta ";
    // cout<<dog.age<<endl;
    // cout<<dog.name<<endl;
    // dog.eat();
    // dog.sleep();

    dog.setweight(110);
    cout<<dog.getweight();
    

}