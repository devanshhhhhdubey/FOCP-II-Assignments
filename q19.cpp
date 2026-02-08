#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout<<"Enter start and end: ";
    cin>>start>>end;

    cout<<"Prime numbers in the range are:"<<endl;

    for(int n = start; n <= end; n++) {

        if(n <= 1) continue;

        bool isPrime = true;

        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout<<n<<" ";
    }

    return 0;
}
