//multiple inheritance

#include<iostream>
class parent1{
    int x=10;
    public:
    parent1(){
        std::cout<<"constructor-parent1"<<std::endl;
    }
    void getdata(){
        std::cout<<x<<std::endl;
    }
};
class parent2{
    int y=20;
    public:
    parent2(){
        std::cout<<"constructor-parent2"<<std::endl;
    }
    void printdata(){
        std::cout<<y<<std::endl;
    }
};
class child : public parent1,public parent2{
    public:
    child(){
        std::cout<<"constructor-child"<<std::endl;
    }
};
int main(){
    child obj;
    obj.getdata();
    obj.printdata();

    return 0;
}