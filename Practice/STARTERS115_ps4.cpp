#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[100], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
 
// Function to print an array
void printArray(int arr[100], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

void reverseSort(int arr[100], int n)
{
    bubbleSort(&arr[100], n);
    
    for(int i = 0; i < n/2; i++)
    {
        arr[i] = arr[i] + arr[n-i];
        arr[n-i] = arr[i] - arr[n-i];
        arr[i] = arr[i] + arr[n-i];
    }
}

int main() {
    int t, n, a[100], b[100];
    
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for(int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        
        bubbleSort(&a[n], n);
        reverseSort(&b[n], n);
        
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] + b[i] == a[i+1] + b[i+1])
            {
                continue;
            }
            else
            {
                return -1;
            }
        }
        
        printArray(&a[n], n);
        cout << "\n";
        printArray(&b[n], n);
        cout << endl;
        
    }
    
    return 0;

}
