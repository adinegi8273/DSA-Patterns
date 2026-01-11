/* Functors - Objects + function (Functors are objects which behaves like a function)

How to convert an object into function that we does using just an Operator function
*/

#include<bits/stdc++.h>

using namespace std;

/*

Problem 1 - Create a functor which helps you add two numbers


class Add{

    public:

    int operator()(int a,int b){
        return a+b;
    }
};
int main(){

    Add add;//this is an object
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<"a+b:"<<add(a,b);//here add object behaves like a function hence a functor
    return 0;
}

Problem 2 - Create a functor which helps you to determine if a integer is an odd or an even integer

class IsEven{
    
    public:

    bool operator()(int a){
        return a%2 == 0;//true->even and false->odd
    }
};

int main(){
    
    IsEven isEven;
    int a;
    cout<<"Enter a number:";
    cin>>a;

    if(isEven(a)){
        //this is even
        cout<<"Even integer";
    }
    else{
        cout<<"Odd integer";
    }
    return 0;
}

*/