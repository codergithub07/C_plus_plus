#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Arrange the set in ascending order
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;   // find_by_order, order_of_key ; Uses O(logn) time for both

// Arrange the set in descending order
// typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Arrange the set in ascending order with duplicates
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Arrange the set in descending order with duplicates
// typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
    pbds A;

    A.insert(10);
    A.insert(2);
    A.insert(30);
    A.insert(2);

    cout << "A = ";
    for (auto i : A)
        cout << i << " ";
    cout << endl;

    // Finding kth element
    cout << "A.find_by_order(0) = " << *A.find_by_order(0) << endl;
    cout << "A.find_by_order(1) = " << *A.find_by_order(1) << endl;
    cout << "A.find_by_order(2) = " << *A.find_by_order(2) << endl;

    // Finding number of elements less than x
    cout << "A.order_of_key(10) = " << A.order_of_key(10) << endl; // x = 10
    cout << "A.order_of_key(20) = " << A.order_of_key(20) << endl; // x = 20
    cout << "A.order_of_key(30) = " << A.order_of_key(30) << endl; // x = 30

    // Finding Lower Bound of x (smallest element >= x)
    cout << "A.lower_bound(10) = " << *A.lower_bound(10) << endl; // x = 10
    cout << "A.lower_bound(8) = " << *A.lower_bound(8) << endl; // x = 8

    // Finding Upper Bound of x (smallest element > x)
    cout << "A.upper_bound(10) = " << *A.upper_bound(10) << endl; // x = 10
    cout << "A.upper_bound(8) = " << *A.upper_bound(8) << endl; // x = 8

    // Remove Element
    A.erase(10);
    cout << "A = ";
    for (auto i : A)
        cout << i << " ";
    cout << endl;
    return 0;
}