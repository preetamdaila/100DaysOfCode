/*
https://practice.geeksforgeeks.org/problems/second-largest/0

Given an array A of size N, print second largest element from an array.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains an integer N denoting the size of the array. The second line contains the N space seperated intgers of the array

Output:
For each testcase, in a new line, print the second largest element.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 500
1 ≤ Ai ≤ 1200

Example:
Input
2
5
89 24 75 11 23
6
56 42 21 23 65 20
Output
75
56

*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    	int t;
	cin>>t;
	while(t--){
	    int n, i;
	    cin>>n;
	    int a[n] = {0};
	    for(i = 0; i < n; i++)
	        cin>>a[i];
	    int s, l;
	    if(n > 1){
	        if(a[0] > a[1]){
	           l = a[0];
	           s = a[1];
	        }
	        else{
	           s = a[0];
	           l = a[1];
	        }
	        for(i = 2; i < n; i++){
	            if(a[i] > l){
	                s = l;
	                l = a[i];
	            }else if(a[i] > s){
	                s = a[i];
	            }
	        }
	    }
	    cout<<s<<endl;
	}
    
    return 0;
}
