#include<iostream>

class parent{
    int x=10;
    public:
    parent(){
        std::cout<<"constructor parent"<<std::endl;
    }
    void getdata(){
        std::cout<<"parent x="<<x<<std::endl;
    }
};
class child : public parent{
    int y=20;
    public:
    child() : parent() { // Explicitly call the parent constructor here
        std::cout<<"constructor child"<<std::endl;
    }
    void printdata(){
        std::cout<<"child y="<<y<<std::endl;
    }
};
int main(){
    child obj;
    obj.getdata();
    obj.printdata();
    return 0;
}