/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 10
 */

#include <iostream>

using namespace std;

int kthFactor(int n, int k) {
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            count++;

            if (count == k) {
                return i;
            }
        }
    }

    return -1; 
}

int main() {
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of k: ";
    cin >> k;

    int result = kthFactor(n, k);

    if (result != -1) {
        cout << "The " << k << "-th factor of " << n << " is: " << result << endl;
    } else {
        cout << "There are less than " << k << " factors for " << n << "." << endl;
    }

    return 0;
}
