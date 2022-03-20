#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n, i;
    double var, avg, std_dev, sum;
    
    cin >> n;

    while (true) {
        if (n == 0) break;

        vector<double> a(1000);
        sum = 0;

        for (i=0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        avg = sum / n;

        for (i=0; i<n; i++) {
            a[i] = pow(a[i] - avg, 2.0);
        } 

        sum = 0;
        
        for (i=0; i<n; i++) {
            sum += a[i];
        }

        var = sum / n;

        std_dev = sqrt(var);

        printf("%.5f\n", std_dev);

        cin >> n;
        
    }
    return 0;
}