#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth,x;

public:
    Rectangle(int a, int b)           // parameterized constructor with two parameters
    {
        length = a;
        breadth = b;
    }
    void area()                          //function to find area
    {
        x = length * breadth;
        
        cout<<"The area of rectangle is :"<<x<<endl;
    }

    Rectangle()                        // default Constructor
    {
        length=0;
        breadth=0;
    }

    Rectangle(int a)                   // parameterized constructor with one parameter
    {
        length=a;
        breadth=a;
    }
};

int main()
{
    Rectangle r1;                   // Creating 1st object of Class Rectangle
    r1.area();
    Rectangle r2(3,5);              // Creating 2nd object of Class Rectangle with two parameters
    r2.area();
    Rectangle r3(5);                // Creating 3rd object of Class Rectangle with one parameter
    r3.area();
    
    return 0;
}