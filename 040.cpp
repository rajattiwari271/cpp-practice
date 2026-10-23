#include <iostream>
using namespace std;

int main() {

   
    for(int i =0; i <5;i++){
      
        for (int j = 0;j<5-i-1;j++){
           cout<<" ";
        
        }
    
         for (int j = 0;j<i+1;j++){
           cout<<j+1;
          
         
        }
           for (int j = i;j>0;j--){
           cout<<j;
          
         
        }
        
        cout<<endl;
          
    }
  
   

    return 0;
}
