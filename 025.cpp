#include <iostream>
using namespace std;

void digits(int n ){
    if(n==0){
        return;
    }

   digits (n/10);
  
    cout<<n%10<<endl;


}

int main() {
    
int n = 54371;
digits(n);
    return 0;
}
