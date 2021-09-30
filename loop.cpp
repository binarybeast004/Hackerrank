// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
                       
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    string M[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a,b,i;
    cin>> a >> b;
    for(i=a; i<=b;i++){
        if(i>9){
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else {
                cout<<"odd"<<endl;
            }
        }
        else{
            cout<<""<<M[i]<<endl;
        }
    }
}
