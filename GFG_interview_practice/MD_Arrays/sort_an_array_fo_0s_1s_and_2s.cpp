/*
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0/

Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.

*/
/*


These are the folowing steps:

    Maintain 3 variables low, high and mid
        low - all elements before low are 0
        mid - all elements between low and mid are 1
        high - all elements after high are 2
    Initially low, mid are set at 0 and high is at n-1
    Now, we iterate mid from 0 to high, and for every element
        if it is equal to 0, we swap it with element at low, and increement low and mid
        else if it is equal to 2, we swap it with element at high, and decreement high
        else we just increement mid (i.e element is equla to 1)
    This method ensures partition, as low and high maintain elements according to their values, and then change their positions, ensuring all elements before low are lower than low_value and all elements after high are higher than high_value


*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    unsigned int t, n, i , x, y, z, temp;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned int a[n];
        x = y = 0;
        /*
        Can replace below code with commented code in end.
        */
        z = n - 1;
        for(i = 0; i < n; i++){
            cin>>a[i];
        }
        while(y <= z){
            if(a[y] == 0){
                temp = a[y];
                a[y] = a[x];
                a[x] = temp;
                
                x++;
                y++;
            }
            else if(a[y] == 2){        
                temp = a[y];
                a[y] = a[z];
                a[z] = temp;
                
                z--;
            }
            else{
                y++;
            }
        }
        for(i = 0; i < n; i++)
            cout<<a[i]<<" ";
        
        //Till here
        cout<<endl;
    }
    
    return 0;
}

/*
        for(i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == 0) x++;
            else if(a[i] == 1) y++;
        }
        i = 0;
        while(i < x){
            a[i] = 0;
            cout<<a[i]<<" ";
            i++;
        }
        while(i < x + y){
            a[i] = 1;
            cout<<a[i]<<" ";
            i++;
        }
        while(i < n){
            a[i] = 2;
            cout<<a[i]<<" ";
            i++;
        }
*/