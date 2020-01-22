/*
https://practice.geeksforgeeks.org/problems/c-2-d-arrays-set-2/0/

C++ 2-D Arrays | Set-2

Given n*n spaced integers of a 2-d Array.Task is to set every value in the matrix to 0 if that row or columns contains a 0.

Input:
First line of input file contains an integer T, denoting the number of test cases. Then T test case follow. First line of each test case contains a integer n.Next line contains n*n spaced integers. 

Output:
For each test case, Print the final matrix formed after performing the required task.

Constraints:
1<=T<=110
1<=n<=100
0<=a[i][j]<=1000

Example:
Input:
1
3
1 2 3 4 0 5 0 6 7
Output:
0 0 3 0 0 0 0 0 0 
*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    int t, i, j, k, f = 0;
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
        int z[2*n*n] = {0};
	    f = 0;
	    for(i = 0; i < n; i++){
	        for(j = 0; j < n; j++){
	            if(a[i][j] == 0){
	                z[f] = i;
	                z[f+1] = j;
	                f += 2;
	            }
	        }
	    }
	    for(i = 0; i < f; i += 2){
	        for(j = 0; j < n; j++){
	            a[z[i]][j] = 0;
	            a[j][z[i+1]] = 0;
	        }
	    }
	    for(i = 0; i < n; i++){
	        for(j = 0; j < n; j++){
	            cout<<a[i][j]<<" ";
	        }
	    }

        /*
	    for(i = 0; i < n; i++){
	        for(j = 0; j < n; j++){
	            f = 0;
	            for(k = 0; k < n; k++){
	                if(a[i][k] == 0 || a[k][j] == 0){
	                    f++;
	                }
	            }
	            if(f == 0){
	                cout<<a[i][j]<<" ";
	            }else{
	                cout<<"0 ";
	            }
	        }
	    }
        */
	    cout<<endl;
	}
    
    return 0;
}
