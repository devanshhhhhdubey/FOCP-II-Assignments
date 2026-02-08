#include <iostream>
using namespace std;
int main(){
    float m1,m2,m3;
    float avg;
    cout<<"Enter marks:  "<<endl;
    cout<<"marks of m1: ";
    cin>>m1;
    cout<<"marks of m2: ";
    cin>>m2;
    cout<<"marks of m3: ";
    cin>>m3;
    avg=(m1+m2+m3)/3;
    cout<<"avg: "<<avg;
    return 0;
}