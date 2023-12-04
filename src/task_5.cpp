/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 5
 */


#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    auto compare = [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> minHeap(compare);

    for (auto& entry : frequencyMap) {
        minHeap.push(entry);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().first);
        minHeap.pop();
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    vector<int> result = topKFrequent(nums, k);

    
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
