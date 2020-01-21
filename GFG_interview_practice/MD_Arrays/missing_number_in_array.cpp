/*
https://practice.geeksforgeeks.org/problems/missing-number-in-array/0/

Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 <=  T <= 200
1 <= N <= 107
1 <= C[i] <= 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4.
*/

#include <iostream>
using namespace std;

int main() {
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

	//code
	unsigned int t, n, i;
	unsigned long long s = 0;
	double m = 0.0;
	cin>>t;
	while(t--){
		cin>>n;
		s = 0;
		if(n > 2){
			unsigned int a[n-1];
			for(i = 0; i < n-1; i++){
				cin>>a[i];
				s += a[i];
			}
		}
		else if(n == 2){
			unsigned int temp;
			cin>>temp;
			s = temp;
		}
		m = n* (n+1) /2;
		m = int(m - s);
		cout<<m<<endl;
	}
	return 0;
}