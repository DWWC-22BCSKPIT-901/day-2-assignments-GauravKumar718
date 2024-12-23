//question 4
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    int n1, n2;
    cout << "Enter the size of the first sorted array: ";
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter the elements of the first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second sorted array: ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter the elements of the second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> result = mergeSortedArrays(arr1, arr2);

    cout << "Merged Sorted Array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
