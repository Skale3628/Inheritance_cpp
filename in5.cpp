#include<iostream>
class parent{
    int x=10;
    int y=20;
    public:
    parent(){
        std::cout<<"parent constructor"<<std::endl;
        std::cout<<"this parent"<<this<<std::endl;
    }
    parent(int x,int y){
        std::cout<<"parent constructor para"<<std::endl;
        std::cout<<"this parent para="<<this<<std::endl;
        this->x=x;
        this->y=y;
    }
    void getdata(){
        std::cout<<x<<std::endl;
        std::cout<<y<<std::endl;

    }

};
class child:public parent{
    int z=30;
    public:
        child(int x,int y,int z):parent(x,y){
            std::cout<<"child constructor"<<std::endl;
            std::cout<<"child constructor"<<this<<std::endl;
        }
        void printdata(){
            std::cout<<2<<std::endl;
        }
};
int main(){
    child obj(40,50,60);
    obj.getdata();
    //obj.printdata();
    return 0;
}