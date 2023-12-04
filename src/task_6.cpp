/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 6
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return {1, mid};  
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            index = mid;
            high = mid - 1;
        }
    }

    return {-1, index + 1};  
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> result = searchInsert(nums, target);

   
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
