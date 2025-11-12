#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMaxMin(const vector<int>& nums) {
    if (nums.empty()) {
        throw invalid_argument("Vector is empty.");
    }

    int maxVal = nums[0]; 
    int minVal = nums[0]; 

    for (int num : nums) {
        if (num > maxVal) {
            maxVal = num; 
        }
        if (num < minVal) {
            minVal = num;
        }
    }

    return {maxVal, minVal};
}

int main() {
    vector<int> nums = {3, 7, 2, 9, 5, 1};

    try {
        pair<int, int> result = findMaxMin(nums);
        cout << "Maximum value: " << result.first << endl;
        cout << "Minimum value: " << result.second << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
