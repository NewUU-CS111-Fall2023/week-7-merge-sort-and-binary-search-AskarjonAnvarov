/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 7
 */

#include <iostream>

using namespace std;

double recursivePow(double x, int n) {
    
    if (n == 0) {
        return 1.0;
    }

   
    return x * recursivePow(x, n - 1);
}

int main() {
   
    double x;
    int n;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    double result = recursivePow(x, n);

    cout << x << " raised to the power " << n << " is: " << result << endl;

    return 0;
}
