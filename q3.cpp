#include<iostream>
using namespace std;

void oddnum(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    oddnum(a,b);
    return 0;
}