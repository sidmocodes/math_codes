#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    const long double error = 1e-;
    unsigned long long fact = 1;
    double e = 2.0, e0;
    int n = 2;
    do {
        e0 = e;
        fact *= n++; //Can't go above 50! or so
        e += 1.000 / fact;
    }

    while (abs(e - e0) >= error);
    cout << "e = " << setprecision(100) << e << endl;
    return 0;
}
