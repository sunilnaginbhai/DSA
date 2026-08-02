#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {

    // Step 1: Find the largest number in the array
    int maxElement = *max_element(arr.begin(), arr.end());

    // Step 2: Create a frequency array.
    // freq[i] will store how many times number i appears.
    vector<int> freq(maxElement + 1, 0);

    // Step 3: Count the frequency of each number.
    for (int num : arr) {
        freq[num]++;
    }

    // Step 4: Overwrite the original array in sorted order.
    int index = 0;

    // Traverse every possible number from 0 to maxElement.
    for (int value = 0; value <= maxElement; value++) {

        // Place 'value' into the array as many times as it occurred.
        while (freq[value] > 0) {
            arr[index] = value;
            index++;
            freq[value]--;
        }
    }
}

int main() {

    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    countingSort(arr);

    cout << "Sorted Array: ";

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}