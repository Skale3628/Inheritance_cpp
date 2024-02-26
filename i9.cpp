#include<iostream>
class parent{
    int x=10;
    public:
    friend std::ostream& operator<<(std::ostream& out, const parent& obj){
        out<<"in parent"<<std::endl; 
        out<<obj.x;
        return out;
    }
};
int main(){
    parent obj;
    std::cout<<obj<<std::endl;
    return 0;

}