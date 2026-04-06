/*

Comparator in set or unordered set


#include<bits/stdc++.h>

using namespace std;

int main(){
    
    auto cmp = [](int a,int b){
        //store in decending order
        return a>b;
    };
    
    set<int,decltype(cmp)> st(cmp);//decltype() declares the type of lamda or comparator and cmp is given to set o that set can call it at runtime
    
    st.insert(5);
    st.insert(10);
    st.insert(15);
    
    for(int elem:st){
        cout<<elem<<" ";
    }
    return 0;
}

*/


/*

Comparators in priority queue



*/