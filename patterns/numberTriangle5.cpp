#include<iostream>
using namespace std;

int main(){
    int space=3;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*space;j++){
            cout<<" ";
        }
        space--;
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        
        
        cout<<endl;
    }
    return 0;
}