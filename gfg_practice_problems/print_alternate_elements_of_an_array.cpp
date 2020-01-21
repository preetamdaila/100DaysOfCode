/*
https://practice.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1

You are given an array A of size N. You need to print elements of A in alternate order.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each test case contains two lines of input. The first line contains N and the second line contains the elements of the array.

Output Format:
For each testcase, print the alternate elements of the array(starting from index 0).

Your Task:
Since this is a function problem, you just need to complete the provided function void print(int ar[],int n)

Constraints:
1 <= T <= 200
1 <= N <= 105
1 <= Ai <= 105

Example:
Input:
2
4
1 2 3 4
5
1 2 3 4 5
Output:
1 3
1 3 5

Explanation:
Testcase1: print 1, then 3.
Testcase2: print 1, then 3, then 5.

*/
#include<iostream>
using namespace std;

void print(int ar[], int n){
    for(int i = 0; i < n; i+=2)
        cout<<ar[i]<<" ";
}
int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n] = {0};
        for(int i = 0; i < n; i++)
            cin>>ar[i];
        print(ar, n);
        cout<<"endl";
    }
    
    return 0;
}
