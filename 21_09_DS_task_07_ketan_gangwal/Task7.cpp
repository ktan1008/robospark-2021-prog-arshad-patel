#include<bits/stdc++.h>                                        // This header file inlcudes all Standard libararies of C++
using namespace std;
class Box                                                      // Created a Class named Box
{
    private:
    double length, breadth , height;
    public:

    Box(){                                                    // default Constructor

    }
    Box(double l, double b, double h){                       // Parametrized Constructor

    }
    public:
    void set_dim(double l, double b, double h){
        length = l;
        breadth = b;
        height = h;
    }
    
    double getVolume(){
        return length*breadth*height;
    }
    void print_dim(){
        cout<<length<<" "<<breadth<<" "<<height<<endl;
    }
};
bool operator >(Box obj1, Box obj2){
    if(obj1.getVolume()>obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator <(Box obj1, Box obj2){
    if(obj1.getVolume()<obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator <=(Box obj1, Box obj2){
    if(obj1.getVolume()<=obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator >=(Box obj1, Box obj2){
    if(obj1.getVolume()>=obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
bool operator ==(Box obj1, Box obj2){
    if(obj1.getVolume()==obj2.getVolume()){
        return 1;
    }
    else{return 0;}
}
int main()
{
    Box b1;                    // Creating 1st object of class Box
    Box b2;                    // Creating 2nd object of class Box
    double l1,br1,h1;
    cout<<"Enter the value of length , breadth and height of Box 1"<<endl;
    cin>>l1>>br1>>h1;

    double l2,br2,h2;
    cout<<"Enter the value of length , breadth and height of Box 2"<<endl;
    cin>>l2>>br2>>h2;

    b1.set_dim(l1,br1,h1);                                             // Function calling of set_dim
    b2.set_dim(l2,br2,h2);
    cout<<"Dimensions of Box 1 are"<<endl;
    b1.print_dim();
    cout<<"Dimensions of Box 2 are"<<endl;
    b2.print_dim();                                                   // Function calling to print_dim
    if(b1.getVolume()>b2.getVolume()){
        cout<<"Volume of Box 1 is greater than that of Box 2"<<endl;
    }
    else if(b1.getVolume()==b2.getVolume()){
        cout<<"Volume of Box 1 is equal to that of Box 2"<<endl;
    }
    else if(b1.getVolume()<b2.getVolume()){
        cout<<"Volume of Box 1 is less than that of Box 2"<<endl;
    }
    return 0;
}
