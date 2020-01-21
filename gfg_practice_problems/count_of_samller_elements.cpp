/*
https://practice.geeksforgeeks.org/problems/count-of-smaller-elements/0

Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each testcase contains 3 lines of input. The first line contains an integer N denoting the size of the array. Then the next line contains N space separated integers forming the array. The third line contains an element X.

Output:
For each testcase, in a new line, print the number of elements which are less than or equal to given element.

Constraints:
1 <= T <= 105
1 <= N <= 105
1 <= Ai <= 105
0 <= X <= 105

Example:
Input:
2
6
1 2 4 5 8 10
9
7
1 2 2 2 5 7 9
2
Output:
5
4
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
	    int n, k;
	    cin>>n;
	    int a[n];
	    for(i = 0; i < n; i++)
	        cin>>a[i];

        cin>>k;
        i = 0;
        while(k >= a[i] && i < n){
            i++;
        }
        cout<<i<<endl;
	}
    
    return 0;
}
