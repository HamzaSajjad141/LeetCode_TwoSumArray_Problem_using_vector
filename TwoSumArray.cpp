/*#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                return { i, j }; // Found the indices of the two numbers
            }
        }
    }
    return {}; // No solution found
}

int main() {
    // Input the array elements and target sum from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    // Call the function to find indices of numbers that sum up to the target
    vector<int> result = twoSum(nums, target);

    // Display the indices of the two numbers
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/


