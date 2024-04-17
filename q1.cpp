#include<iostream>
using namespace std;

void sqr(int n){
    for(int i=1;i<=n;i++){
        cout<<(i*i)<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n value: ";
    cin>>n;

    sqr(n);
    return 0;
}