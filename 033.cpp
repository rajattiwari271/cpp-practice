#include <iostream>
using namespace std;

int main() {

    char ch = 'A';
    for(int i =1 ; i <= 3;i++){
       
        for (int j = 1;j<=3;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
   

    return 0;
}
