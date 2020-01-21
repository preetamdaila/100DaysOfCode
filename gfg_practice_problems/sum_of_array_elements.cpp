/*
https://practice.geeksforgeeks.org/problems/sum-of-array-elements/0

Given an integer array A of size N, find sum of elements in it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, print the sum of all elements of the array in separate line.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Ai <= 100

Example:
Input:
2
3
3 2 1
4
1 2 3 4
Output:
6
10

*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    int t, i;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n] = {0};
	    for(i = 0; i < n; i++)
	        cin>>a[i];
	    int s = 0;
	    for(i = 0; i < n; i++)
	        s += a[i];
	    cout<<s<<endl;
	}
    
    return 0;
}
