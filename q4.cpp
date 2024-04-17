#include<iostream>
using namespace std;

void sqnum(int n){
    int sqr = n*n;
    int ctr=0;
    while(n>0){
        n=n/10;
        ctr++;
    }
    cout<<"There are "<<ctr<<" digits in the number"<<endl;
    cout<<"Square of the number is: "<<sqr;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    sqnum(n);
    return 0;
}