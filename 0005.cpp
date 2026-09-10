#include <iostream>
#include <string>


using namespace std;

class Person {
    private :
    string name ;
    int age;
    string country;

    public :

    void setName(string name){
     this->name = name ;

    }

    void setAge(int age ){
        this->age = age;

    }

    void setCountry(string Country){
        this->country = country;

    }


    string getName(){
        return name ;

    }

    int getAge (){
        return age;
    }

    string getCountry(){
        return country;
    }


};

int main () {

 Person p;

 p.setName("Name");
 p.setAge(25);
 p.setCountry("Country");

 cout<<"Name is "<< p.getName()<<endl;
  cout<<"Age is "<< p.getAge()<<endl;
   cout<<"Country is "<< p.getCountry()<<endl;

}