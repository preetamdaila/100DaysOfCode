/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/

Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. 
Also, the rightmost element is always a leader. 

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print all the leaders.

Constraints:
1 <= T <= 100
1 <= N <= 107
0 <= Ai <= 107

Example:
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3

Explanation:
Testcase 3: All elements on the right of 7 (at index 0) are smaller than or equal to 7.
            Also, all the elements of right side of 7 (at index 3) are smaller than 7. 
            And, the last element 3 is itself a leader since no elements are on its right.
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

    unsigned int t = 0, n = 0, i = 0, l = 0;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned int arr[n];
        int b[n];
        for(i = 0; i < n; i++){
            cin>>arr[i];
        }
        l = arr[n - 1];
        i = n;
        while(i--){
            if(arr[i] >= l){
                l = arr[i];
                b[i] = l;
            }else b[i] = -1;
        }
        for(i = 0; i < n; i++){
            if(b[i] >= 0)
                cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}