#include<iostream>
using namespace std;

float area(float r){
    float a = 3.14*r*r;
    return a;
}

int main(){
    int r;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    float ar = area(r);
    cout<<"Area of circle: "<<ar<<endl;
}