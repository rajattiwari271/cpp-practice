#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int num = n;
    int ans =0;
    while(n!=0){
        int m = n%10;
        ans = ans*10+m;
        n = n/10;
    }
  
if(ans ==num){
    cout<<"Is palindrome"<<endl;
}
else{
    cout<<"not a palindrome"<<endl;
}
    return 0;
}