#include<iostream>
class parent{
    public:
    parent(){
        std::cout<<"constructor parent"<<std::endl;

    }
};
class child:public parent{
    public:
    child(){
        std::cout<<"constructor child"<<std::endl;
    }
};
int main(){
    child obj;
    return 0;
}