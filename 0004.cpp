#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
    private:
    double length;
    double width;

    public :
    Rectangle(double l, double w): length(l), width(w){}

    double area (){
        return length * width ;
    }

    double circumference (){
        return 2*(length + width);
    }

};



int main (){

    double length , width;
    cout<< "Enter the length  and width of Rectangle : ";
    cin>>length>>width;

    Rectangle rectangle (length ,width );
    double Area = rectangle.area();
    cout<<"Area of Rectangle : "<<Area<<endl;

    double Circumference = rectangle.circumference();
    cout<<"Circumference of Rectangle : "<<Circumference<<endl;
    return 0;
}