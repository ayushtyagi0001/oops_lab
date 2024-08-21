#include<iostream>
using namespace std;
class Rectangle{
public: 
    int length;
    int breath;
    
    
Rectangle(){
    length=0;
    breath=0;
}

Rectangle(int length,int breath){
    this->length=length;
    this->breath=breath;
    }
Rectangle(int length){
    this->length=length;
}

    
int rectArea(){
    return length*breath;}

int sqrArea(){
    return length*length;}


};

int main(){
 Rectangle r1(5,6);
 Rectangle r2(6);
 Rectangle r3;
 Rectangle r4(r1);
 
cout<<"area of rectangle is : "<<r1.rectArea()<<endl;
cout<<"area of square is : "<<r2.sqrArea()<<endl;
cout<<"area of rectangle is : "<<r3.rectArea()<<endl;
cout<<"area of rectangle is : "<<r4.rectArea()<<endl;


return 0;

}

