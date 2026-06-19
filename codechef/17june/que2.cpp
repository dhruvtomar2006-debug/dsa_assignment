#include <iostream>
using namespace std;
	// your code goes here
int main(){

    int t;
    cin>>t;

    while(t--){

        int m, n; // m=matches,n=num of points 
        cin>>m>>n;

        for(int l=0;l<=m;l++){ // l=har gya bc

            bool found=false;

            for (int w=0; w<=m;w++) { // w= jeeth gya sala 

                int d= m - l - w; // d= draw ho gya 
                 if (d>=0){

                    int points=3*w+d;

                    if (points==n){
                        cout<<l<<endl;
                        found=true;
                        break;
                    }
                }
            }

            if (found) {
                break;
            }
        }
    }

    return 0;
}

