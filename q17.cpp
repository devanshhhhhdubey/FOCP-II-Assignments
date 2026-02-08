#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;

    // Perfect number
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout<<"Perfect number"<<endl;
    else
        cout<<"Not a perfect number"<<endl;

    // Armstrong
    int temp = n, digits = 0;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum2 = 0;

    while(temp > 0) {
        int d = temp % 10;
        sum2 += pow(d, digits);
        temp /= 10;
    }

    if(sum2 == n)
        cout<<"Armstrong number"<<endl;
    else
        cout<<"Not an Armstrong number"<<endl;

    return 0;
}
