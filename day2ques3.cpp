//question 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_water = 0;

    while (left < right) {
        int width = right - left;
        int current_height = min(height[left], height[right]);
        max_water = max(max_water, width * current_height);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return max_water;
}

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights of the lines: ";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    cout << "Maximum Water: " << maxArea(height) << endl;
    return 0;
}
