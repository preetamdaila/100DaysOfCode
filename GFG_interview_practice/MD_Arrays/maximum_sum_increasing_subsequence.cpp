/*
https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0/

Given an array A of N positive integers. Find the sum of maximum sum increasing subsequence of the given array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N(the size of array). The second line of each test case contains array elements.

Output:
For each test case print the required answer in new line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Ai ≤ 106

Example:
Input:
2
7
1 101 2 3 100 4 5
4
10 5 4 3

Output:
106
10

Explanation:
Testcase 1: All the increasing subsequences are : (1,101); (1,2,3,100); (1,2,3,4,5). Out of these (1, 2, 3, 100) has maximum sum,i.e., 106.

*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    unsigned int t, n, i, j, m = 0, l = 0, r = 0;
    cin>>t;
    while(t--){
        cin>>n;
        l = r = m = 0;
        unsigned int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        
        for(i = 1; i < n; i++){
            for(j = 0; j < i; j++){
                if(a[j] < a[i] && a[i] < a[j] + a[i])
                    a[i] = a[j] + a[i];
            }
        }
        l = a[i];
        for(i = 1; i < n; i++){
            if(a[i] > l)
                l = a[i];
        }
        cout<<l;

        cout<<endl;
    }
    return 0;
}
