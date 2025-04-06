#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std; 

int solve(vector<int> &nums, int k) {
    unordered_set<int> st(nums.begin(), nums.end()); // Insert unique elements

    // Convert set to a sorted vector
    vector<int> uniqueNums(st.begin(), st.end());
    sort(uniqueNums.begin(), uniqueNums.end());

    int sum = 0;
    for (int j = 0; j < k && j < uniqueNums.size(); j++) {
        sum += uniqueNums[k]; 
    }

    return sum;
}

int main() {
    vector<int> nums = {2, 3, 4, 2, 4, 6};
    int k = 2;
    
    int result = solve(nums, k);
    cout << "Sum of first " << k << " smallest unique elements: " << result << endl;

    return 0;
}
