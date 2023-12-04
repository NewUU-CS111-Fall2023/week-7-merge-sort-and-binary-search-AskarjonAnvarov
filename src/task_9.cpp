/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 9
 */

#include <iostream>
#include <vector>

using namespace std;

int findKthMissing(vector<int>& arr, int n, int k) {
    int missingCount = 0;
    int current = 1;  
    int i = 0;        

    while (missingCount < k) {
        if (i < n && arr[i] == current) {
            
            i++;
        } else {
            
            missingCount++;
        }

        
        current++;
    }

    return current - 1;  
}

int main() {
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of k: ";
    cin >> k;

    
    vector<int> arr(n);
    cout << "Enter the elements of the sorted array arr: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    
    int result = findKthMissing(arr, n, k);
    cout << "The " << k << "-th missing positive integer is: " << result << endl;

    return 0;
}
