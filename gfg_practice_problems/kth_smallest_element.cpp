/*
https://practice.geeksforgeeks.org/problems/kth-smallest-element/0/

Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Expected Time Complexity: O(n)

Input:
The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:
Corresponding to each test case, print the kth smallest element in a new line.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N

Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output:
7
15

Explanation:
Testcase 1: 3rd smallest element in the given array is 7.
 
*/

//have to use quick select

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

    unsigned int t, n, temp = 0, l = 0;
    int i, j, k;
    cin>>t;
    while(t--){
        cin>>n;
        l = 0;
        unsigned int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];

        cin>>k;
        for(i = 0; i < k; i++){
            if(a[l] < a[i]){
                l = i;
            }
        }
        for(i = k; i < n; i++){
            if(a[i] < a[l]){
                a[l] = a[i];
                for(j = 0; j < k; j++){
                if(a[l] < a[j])
                    l = j;
                }
            }
        }
        cout<<a[l]<<endl;
    } 

    return 0;
}