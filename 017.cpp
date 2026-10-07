#include <iostream>
#include <stack>

using namespace std;

int main () {
    stack<int> st;
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else {
        cout<<"Stack is not empty"<<endl;
    }
    st.push(5);
    st.push(4);
    st.push(6);
    st.push(7);
     st.pop();

     cout<<st.size()<<endl;
     cout<<st.top()<<endl;
     cout<<st;


}