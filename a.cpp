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

    //Variables 
    int i, j, k, n;
    cout<<"Pattern 1"<<endl;
    n = 7;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<char('A' + j)<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 2"<<endl;
    n = 5;
    for(j = 0; j < n; j++){
        for(i = 0; i < 2 * n - 1; i++){
            if(i < j || i >= (2 * n - 1) - j)
                cout<<"  ";
            else
                cout<<"& ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 3"<<endl;
    n = 6;
    for(i = 0; i < n; i++){
        for(j = 1; j <= n + i; j++){
            if(j == i + n || j == n - i || i == n - 1){
                cout<<"& ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"\nPattern 4"<<endl;
    n = 5;
    for(i = 0; i < n; i++){
        for(j = 1; j <= n + i; j++){
            if(j < n - i)
                cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\nPattern 5"<<endl;
    n = 5;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\nPattern 6"<<endl;
    n = 4;
    for(i = 0; i < n; i++){
        for(j = 0; j <= n + i; j++){
            if(j < n - i)
                cout<<" ";
            else if((j - n - i) % 2 == 0)
                cout<<"*";
            else cout<<"A";
        }
        cout<< endl;
    }

    cout<<"\nPattern 7"<<endl;
    n = 5;
    for(i = 0; i < n; i++){
        k = i;
        for(j = n + i; j > 0; j--){
            if(j > 2 * i + 1)
                cout<<" "; 
            else if(j > i + 1){ 
                cout<<j - k;
                k -= 2;
                }
            else cout<<(j + i);

            if(j >= n*n) break;
        }
        cout<<endl;
        if (i >= n*n) break;
    }

/*
0     1  2  3  4

0     1  2  4  7
1     3  5  8 11
2     6  9 12 14
3    10 13 15 16

      0  0  1  3
      2  3  5  7
      5  7  9 10
      9 11 12 12
*/

    cout<<"\nPattern 8"<<endl;
    n = 4;
    for(i = 0; i < n; i++){
        for(j = 1; j <= n; j++){
            cout<<(j)<<" ";
            
        }
        cout<<endl;
    }
    cout<<"\nPattern 9"<<endl;
    cout<<"\nPattern 10"<<endl;
    cout<<"\nPattern 11"<<endl;
    cout<<"\nPattern 12"<<endl;
    cout<<"\nPattern 13"<<endl;
    cout<<"\nPattern 14"<<endl;
    cout<<"\nPattern 15"<<endl;
    cout<<"\nPattern 16"<<endl;
    cout<<"\nPattern 17"<<endl;
    cout<<"\nPattern 18"<<endl;
    cout<<"\nPattern 19"<<endl;
    cout<<"\nPattern 20"<<endl;
    cout<<"\nPattern 21"<<endl;
    cout<<"\nPattern 22"<<endl;
    cout<<"\nPattern 23"<<endl;
    cout<<"\nPattern 24"<<endl;
    cout<<"\nPattern 25"<<endl;
    
    return 0;
}
