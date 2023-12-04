/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 8
 */

#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums, int n) {
    
    int expectedSum = (n * (n - 1)) / 2;

    
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }

    
    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> nums(n - 1);
    cout << "Enter the elements of the array nums: ";
    for (int i = 0; i < n - 1; ++i) {
        cin >> nums[i];
    }

    
    int missingNumber = findMissingNumber(nums, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
