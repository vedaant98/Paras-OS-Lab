#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of process";
    cin>>n;
    int bt[n], ct[n];
    cout<<"Enter the Burst time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]";
        cin >> bt[n];
        
        ct[n] = bt[n-1];
    }
    for (int i = 0; i < n; i++)
    {

    }

    return 0;
}