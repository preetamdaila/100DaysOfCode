/*
https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array/0/

Given an integer array Arr[] and an element x. The task is to find if the given element is present in array or not.

Input:
First line contains an integer, the number of test cases 'T'. For each test case, first line contains an integer 'N', size of array. The second line contains the elements of the array separated by spaces. Third line contains element to be find in the array.

Output:
For each testcase, output a single line containing first index of element to be found in array. If element is not in the array, then print "-1" (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100

Example:
Input:
2
4
1 2 3 4
3
2 4 7 8
1

Output:
2
-1

Explanation:
Testcase 1: There is one test case with array as {1, 2, 3 4} and element to be searched as 3.  Since 3 is present at index 2, output is 2.
*/
/*
This problem's above Input is wrong.
It should be 
T
(T times){
    N
    Arr[]
    X
}
2
4
1 2 3 4
3
4           //  4 was missing above
2 4 7 8
1
*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    int t, i, n;
	cin>>t;
    
	while(t--){
	    cin>>n;
	    int a[n] = {0};
	    for(i = 0; i < n; i++)
	        cin>>a[i];
	    int s;
	    cin>>s;
	    i = 0;
	    while(i < n && s != a[i]){
	        i++;
	    }
	    if(s != a[i])
    	    cout<<"-1"<<endl;
    	else cout<<i<<endl;
	}

    return 0;
}

