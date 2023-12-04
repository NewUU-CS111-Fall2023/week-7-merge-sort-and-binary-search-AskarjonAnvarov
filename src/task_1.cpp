/*
 * Author: Asqarjon Anvarov
 * Date: 04.12.2023
 * Name: Task 1
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int k = 0; k < N - 2; ++k) {
            vector<int> medians;
            
            for (int i = 0; i <= N - 3; i += 2) {
                vector<int> subarray = {A[i], A[i + 1], A[i + 2]};
                sort(subarray.begin(), subarray.end());
                medians.push_back(subarray[1]);
            }

            int minMedian = *min_element(medians.begin(), medians.end());

            auto it = find(A.begin(), A.end(), minMedian);
            if (it != A.end()) {
                A.erase(it);
            }
        }

      
        int remainingSum = 0;
        for (int num : A) {
            remainingSum += num;
        }

        cout << remainingSum << endl;
    }

    return 0;
}

