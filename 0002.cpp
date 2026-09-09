#include <iostream>

using namespace std;


int main() {

    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    if(n<=51){
        cout<<"Result : "<<51-n <<endl;
    }
    else{
        cout<<"Triple of absolute diff : "<<3*(n-51)<<endl;
    }
}