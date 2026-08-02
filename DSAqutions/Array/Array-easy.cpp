//*************************************************************************************************************** */
//!Find the Largest element in an array

//^Brute force:
#include<bits/stdc++.h>
using namespace std;

// Function to sort the array and return the largest element
int sortArr(vector<int>& arr) {
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());
    
    // Return the last element (largest element) after sorting
    return arr[arr.size() - 1];
}

int main() {
    // Initialize arrays
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
   
    // Find and output the largest element in both arrays
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2);
   
    return 0;
}

//^batter :


//^Optimal:

#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array
int findLargestElement(int arr[], int n) {
    int max = arr[0];  // Initialize max with the first element in the array

    // Iterate through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {  // If the current element is greater than max, update max
            max = arr[i];
        }
    }

    return max;  // Return the largest element found
}

int main() {
    // Array 1
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;  // Size of the array
    int max = findLargestElement(arr1, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    // Array 2
    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;  // Size of the array
    max = findLargestElement(arr2, n);  // Call the function to find the largest element
    cout << "The largest element in the array is: " << max << endl;  // Output the result

    return 0;
}


//*************************************************************************************************************** */
//!Find Second Smallest and Second Largest Element in an array

//^Brute force:
#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest and second largest elements in the array
void getElements(int arr[], int n)
{
    // Edge case when the array has less than 2 elements
    if(n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  // Print -1 for both second smallest and second largest if the array has less than 2 elements
    
    // Sort the array to easily find the second smallest and second largest elements
    sort(arr, arr + n);

    // Second smallest element is at index 1 after sorting
    int small = arr[1]; 

    // Second largest element is at index n-2 after sorting
    int large = arr[n - 2]; 

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call the function to find and print the second smallest and second largest elements
    getElements(arr, n);

    return 0;
}
//^batter :
#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest and second largest elements in the array
void getElements(int arr[], int n)
{
    // Edge case: when the array has less than 2 elements
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  // If only one element, print -1 for both second smallest and second largest

    // Initialize variables to track the smallest, second smallest, largest, and second largest elements
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;

    // Find the smallest and largest elements in the array
    for (i = 0; i < n; i++) {
        small = min(small, arr[i]);  // Update the smallest element
        large = max(large, arr[i]);  // Update the largest element
    }

    // Find the second smallest and second largest elements
    for (i = 0; i < n; i++) {
        // If the current element is smaller than second_small and not equal to the smallest, update second_small
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        
        // If the current element is larger than second_large and not equal to the largest, update second_large
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find and print the second smallest and second largest elements
    getElements(arr, n);

    return 0;
}

//^Optimal:


//*************************************************************************************************************** */
//!Find the Largest element in an array

//^Brute force:


//^batter :


//^Optimal: