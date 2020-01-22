/*
https://practice.geeksforgeeks.org/problems/c-2-d-arrays/0

C++ 2-D Arrays | Set-1 

Given an 2-d array of integers having N*N elements, print the transpose of the array. 

Input: 
The first line of input contains integer T denoting the number of test cases.  For each test case there will be two lines. First line contains an integer N denoting the size of the array A, and second line contains N*N space seperated integers of 2-d array A.

Output: 
For each test case, print the transpose of the array.

Constraints:
1 <= T <= 100
1 <= N <= 100
0 <= A[i] <= 1000

Example:
Input:
1
3
1 2 3 4 5 6 7 8 9
Output:
1 4 7 2 5 8 3 6 9
*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    int t, i, j;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        int a[n][n];
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cin>>a[i][j];
            }
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout<<a[j][i]<<" ";
            }
        }
        /*
	    int a[n*n];
	    for(i = 0; i < n*n; i++)
	        cin>>a[i];
	    for(i = 0; i < n; i++){
	        for(j = i; j < n*n; j+=n){
	            cout<<a[j]<<" ";
	        }
	    }
        */
	    cout<<endl;
	}
    return 0;
}
