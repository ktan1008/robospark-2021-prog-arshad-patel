#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length, breadth, x;

    Rectangle(int a, int b) // parameterized constructor with two parameters
    {
        length = a;
        breadth = b;
    }
    void area() //function to find area
    {
        x = length * breadth;

        cout << "The area of rectangle is :" << x << endl;
    }

    Rectangle() // default Constructor
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int a) // parameterized constructor with one parameter
    {
        length = a;
        breadth = a;
    }
};

int main()
{
    cout << "What kind of Constructor do you want to immplement :" << endl;
    cout << "1-Default constructor" << endl;
    cout << "2-Parametrized Constructor with Two parameters" << endl;
    cout << "3-Parametrized Constructor with One parameter" << endl;

    int option = 3;
    cin >> option;

    switch (option)
    {
    case(1):
    {
        Rectangle r1;
        r1.area();
        break;
    }

    case (2):
    {
        float l, b;
        cout<<"Enter the value of length and breadth"<<endl;
        cin>>l>>b;
        Rectangle r2(l,b);
        r2.area();
        break;
    }

    case (3):
    {
        float a;
        cout<<"Enter the value of length=breadth"<<endl;
        cin>>a;
        Rectangle r3(a);
        r3.area();
        break;
    }

    }
    return 0;
}