#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;

int BinarySearch(int arr[], int i, int j, int x) {
    if (i <= j) {
        int mid = (i + j) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return BinarySearch(arr, i, mid - 1, x);
        }
        return BinarySearch(arr, mid + 1, j, x);
    }
    return -1; 
}

int main() {
    srand(time(0)); 
    cout << "How many elements do you want in your SORTED array?" << endl;
    int n;
    cin >> n; 
    int array[n];

    array[0] = rand() % 10; 
    for (int i = 1; i < n; i++) {
        array[i] = array[i - 1] + (rand() % 10); 
    }

    cout << "Generated random sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Which element do you want me to find for you?" << endl;
    int to_be_found;
    cin >> to_be_found;

    int result = BinarySearch(array, 0, n - 1, to_be_found);

    if (result != -1) {
        cout << "Your element is at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
