#include<iostream>

class parent{
    public:
    parent(){
        std::cout<<"constructor parent"<<std::endl;
    }
    ~parent(){
        std::cout<<"destructor parent"<<std::endl;

    }
};
class child:public parent{
    public:
    child(){
        std::cout<<"constructor child"<<std::endl;
    }
    ~child(){
        std::cout<<"destructor child"<<std::endl;
    }
    friend void* operator new(size_t size){
        std::cout<<"new child"<<std::endl;
        void *ptr =malloc(size);
        return ptr;
    }
    void operator  delete(void *ptr){
        std::cout<<"delete child"<<std::endl;
        free(ptr);
    }
};
int main(){
    child *obj1=new child();
    //operator new(sizeof(child))
    //obj1=ptr
    //child(obj1);/
    //constructor   
        //constructor parent
        //constructor child

    delete obj1;
    //destructor                  ====notify  
        //destructor child       
        //destructor parent
    //operator delete(obj1)

    return 0;
}