#include<iostream>
class parent {
    int x=10;
    int y=20;

    public:
    void printdata(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;
    }
};
class child:public parent{
    int z=30;
    public:
    void getdata(){
        std::cout<<z<<std::endl;
    }
};
int main(){
    parent obj1;
    child obj2;
    std::cout<<sizeof(obj1)<<std::endl;
    std::cout<<sizeof(obj2)<<std::endl;
    return 0;
}
