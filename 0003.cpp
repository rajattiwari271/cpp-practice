#include <iostream>
#include <cmath>

const double pi = 3.14159;
using namespace std;


class Circle {
    private :
    double radius ;

    public :
    Circle(double r) : radius(r) {}


    double area(){
        return pi * pow(radius, 2);
    }

    double circumference(){
        return 2* pi* radius;
    }
};


int main (){


    double radius ;

    cout<<"Input the radius of circle : ";
    cin>>radius;

    Circle circle (radius);
    double Area = circle.area();
     cout<<"Area of Circle = "<<Area<<endl;

     double Circumference = circle.circumference();

     cout<<"Circumference of Circle = "<<Circumference<<endl;

     return 0;
    
}