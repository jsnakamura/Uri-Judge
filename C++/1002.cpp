#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
    
    double R, n, A;

    n = 3.14159;
    
    cin >> R;
    
    A = n*R*R;
    
    cout << "A=" <<fixed<< setprecision(4) << A << endl;
 
    return 0;
}