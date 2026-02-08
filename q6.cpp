#include <iostream>
using namespace std;

int main() {
    int n;
    float basic, bonus, net;

    cout<<"Enter number of employees: ";
    cin>>n;

    for (int i=1; i<=n; i++) {
        cout<<"\nEnter basic salary of employee "<<i<<": ";
        cin>>basic;

        bonus = 0.12 * basic;
        net = basic + bonus;

        cout<<"Basic Salary: "<<basic<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }

    return 0;
}
