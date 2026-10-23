#include <iostream>
using namespace std;

int main (){
    int maxi =0;
    int arr[2][3][3]={{1,2,3},{2,3,1},{6,4,8}};
    for(int i =0;i<2;i++){
        int sum =0;
        for(int j =0;j<3;j++){
sum  = sum + arr[i][j];

        }
        maxi = max(maxi,sum);
    }
    cout<<maxi;
    
}