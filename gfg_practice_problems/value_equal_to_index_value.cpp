/*
https://practice.geeksforgeeks.org/problems/value-equal-to-index-value/0

Given an array of positive integers. Your task is to find that element whose value is equal to that of its index value.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, size of array. The second line of each test case contains array elements.

Output:
Print the element whose value is equal to index value. Print "Not Found" when index value does not match with value.
Note: There can be more than one element in the array which have same value as their index. You need to print every such element's index separated by a single space. Follows 1-based indexing of the array.

Constraints:
1 ≤ T ≤ 30
1 ≤ N ≤ 50
1 ≤ A[i] ≤ 1000

Example:
Input:
2
5
15 2 45 12 7
1
1

Output:
2
1
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
	    int n, f = 0;
	    cin>>n;
	    int a[n] = {0};
	    for(i = 0; i < n; i++){
	        cin>>a[i];
	    }
	    i = 0;
	    while(i < n){
	        if(a[i] == i+1){
	            cout<<i+1<<" ";
	            f++;
	        }
	        i++;
	    }
	    if(f == 0)
	        cout<<"Not Found";
	    cout<<endl;
	}
    
    return 0;
}
