#include <iostream>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;

    int diff;

    if (x> y){
        diff =x - y;
    }
    else {
        diff =y- x;
    }
    

    if (diff<=2){
        cout<< "Interesting";
    }
    else {
        cout<<"Boring";
    }

    return 0;
}