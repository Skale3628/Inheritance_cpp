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
    int x=20;
    public:
    child() : parent() { // Explicitly call the parent constructor here
        std::cout<<"constructor child"<<std::endl;
    }
    void printdata(){
        std::cout<<"child x="<<x<<std::endl;
    }
};
int main(){
    child obj;
    //obj.getdata();

    //2nd
    //(parent(obj)).getdata();
    
    //3rd
    obj.parent::getdata();

    //4th
    //(static_cast<parent&> (obj)).getdata();

    return 0;
}