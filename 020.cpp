#include <iostream>
using namespace std;

bool searchElement(int arr[],int size,int target){
    if(size == 0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
else{
    return searchElement(arr+1,size-1,target);}

}


int main() {
   int arr[6] = {1,5,3,9,2,11};
   int size = 6;
   int target = 17;
   bool ans = searchElement(arr,size,target);

   if(ans){
    cout<<"Found"<<endl;
   }
   else{
    cout<<"Not found";
   }

    return 0;
}
