#include<bits/stdc++.h>                 // This header file inlcudes all Standard libararies of C++
using namespace std;
class Box                                     // Created a Class named Box
{
private:
    double length, breadth, height;                   // Declared the Dimensions of the Box

public:
    Box()                                                // default Constructor
    {
        
        length = breadth = height = 0;
    }
    Box(double l, double b, double h)                     // Parametrized Constructor
    { 
        length = l;
        breadth = b;
        height = h;
    }

public:
    void set_dim(double l, double b, double h)              
    {
        length = l;
        breadth = b;
        height = h;
    }

    double getVolume()                                      // Function to return the volume
    {
        return length * breadth * height;
    }
    void print_dim()                                         // Function to print the Dimensions entered by the user
    {
        cout << length << " " << breadth << " " << height << endl;
    }
};
bool operator>(Box obj1, Box obj2)
{
    if (obj1.getVolume() > obj2.getVolume())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool operator<(Box obj1, Box obj2)
{
    if (obj1.getVolume() < obj2.getVolume())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool operator<=(Box obj1, Box obj2)
{
    if (obj1.getVolume() <= obj2.getVolume())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool operator>=(Box obj1, Box obj2)
{
    if (obj1.getVolume() >= obj2.getVolume())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool operator==(Box obj1, Box obj2)
{
    if (obj1.getVolume() == obj2.getVolume())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Box b1; // Creating 1st object of class Box
    Box b2; // Creating 2nd object of class Box
    double l1, br1, h1;
    cout << "Enter the value of length , breadth and height of Box 1" << endl;
    cin >> l1 >> br1 >> h1;

    double l2, br2, h2;
    cout << "Enter the value of length , breadth and height of Box 2" << endl;
    cin >> l2 >> br2 >> h2;

    b1.set_dim(l1, br1, h1); // Function calling of set_dim
    b2.set_dim(l2, br2, h2);
    cout << "Dimensions of Box 1 are" << endl;
    b1.print_dim();
    cout << "Dimensions of Box 2 are" << endl;
    b2.print_dim(); // Function calling to print_dim
    
    int option;
    do{
    cout<<"Enter which operator you want to use :"<<endl;                        // Created a menu driven program in which the user gets 5 option
    cout<<"1->"<<endl;                                                           // By using Switch-Case                    
    cout<<"2-<"<<endl;
    cout<<"3-<="<<endl;
    cout<<"4->="<<endl;
    cout<<"5-=="<<endl;
    cout<<"0-Exit"<<endl;
    cin>>option;
    switch(option)
    {
        case(1):
        {
            if(b1>b2)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            break;
        }
        case(2):
        {
            if(b1<b2)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            break;
        }
        case(3):
        {
            if(b1<=b2)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            break;
        }
        case(4):
        {
            if(b1>=b2)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            break;
        }
        case(5):
        {
            if(b1==b2)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            break;
        }
        default:
        cout<<"Exiting"<<endl;
    }
    }while(option!=0);
}
