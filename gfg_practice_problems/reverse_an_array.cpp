/*
https://practice.geeksforgeeks.org/problems/reverse-an-array/0/

Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/

#include<stdio.h> 
#include<iostream>
#include<string>
#include<sstream>
#include <bits/stdc++.h> 
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    unsigned int t, n;
    int i, j, temp;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        for(i = 0; i < n/2; i++){
            temp = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = temp;
        }
        for(i = 0; i < n; i++){
            cout<<a[i]<<" ";
        }cout<<endl;
    }
    return 0;
}