//access specifier in inheritance

#include<iostream>
class parent{
    int x=10;
    
    protected:
    int y=20;
    
    public:
    int z=30;

    parent(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void getdata(){
        std::cout<<x<<y<<z<<std::endl;
    }
};
class child:parent{
    public:
    child(int x,int y,int z){
        parent(x,y,z);
    }
    void getinfo(){
       getdata();
    }

};
int main(){
    child obj(40,50,60);
   // obj.getinfo();
   // obj.getdata();
   
    return 0;
}