#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unsorted list: ";
    for(int num : arr) {
        cout << num << " ";
    }
// Finding the maximum element 
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }

    
   
//  Create and Fill Buckets
    vector<int> buckets(max_val + 1, 0);
    for (int i = 0; i < n; i++) {
        buckets[arr[i]]++;
}   
 return 0;
}
