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
//  Overwrite original array in descending order
    int index = 0;
    for (int i = max_val; i >= 0; i--) {
        while (buckets[i] > 0) {
            arr[index++] = i;
            buckets[i]--;
        }
    }
cout << "\nSorted list (Descending): ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;   
 return 0;
}
