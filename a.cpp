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
        }
        cout<<endl;
    }

/*
0     1  2  3  4

0     1  2  4  7
1     3  5  8 11
2     6  9 12 14
3    10 13 15 16

*/

    cout<<"\nPattern 8 (not done)"<<endl;
    n = 4;
    int arr[n][n];
    for(i = 0; i < n; i++){
        for(j = 1; j <= n; j++){

        }
        cout<<endl;
    }
    cout<<"\nPattern 9"<<endl;
    n = 5;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<char('A' + i)<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 10"<<endl;
    n = 5;
    for(i = 0; i < n; i++){
        for(j = n; j >= n - i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 11 (Pascal's Triangle)(not done)"<<endl;
    n = 6;
    for(i = 1; i <= n; i++){
        for(j = 0; j < n + i - 1; j++){
            if(j < n - i){
                cout<<"  ";
            }
            else cout<<j<<" ";
        }cout<<endl;
    }

    cout<<"\nPattern 12 (Floayd's Triangle)"<<endl;
    n = 4;
    k = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    cout<<"\nPattern 13"<<endl;
    n = 7;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j || j == n - i - 1)
                cout<<"* ";
            else
                cout<<"  ";
            
        }
        cout<<endl;
    }

    cout<<"\nPattern 14"<<endl;
    n = 7;
    for(i = 1; i <= n; i++){
        for(j = n; j > 0; j--){
            if(j == n || j == i || i == 1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 15"<<endl;
    n = 7;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || j == n -1 || j == i)
                cout<<" *";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 16"<<endl;
    n = 7;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == n - 1 || j == n -1 || j == n - i - 1)
                cout<<" *";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
    cout<<"\nPattern 17"<<endl;
    n = 7;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == n-1 || j == 0 || j == i)
                cout<<" *";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 18"<<endl;
    n = 9;
    k = (n + 1)/2;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == k - i - 1 || j == k + i -1)
                cout<<"* ";
            else if(j == i - k + 1|| j == 2 * k - i + 2)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 19"<<endl;
    n = 9;
    k = (n + 1)/2;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == k - i - 1 || j == k + i -1 || i == k - 1)
                cout<<"* ";
            else if(j == i - k + 1|| j == 2 * k - i + 2)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 20"<<endl;
    n = 9;
    k = (n + 1)/2;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == k - i - 1 || j == k + i -1 || j == k - 1)
                cout<<"* ";
            else if(j == i - k + 1|| j == 2 * k - i + 2)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
    cout<<"\nPattern 21 (not done)"<<endl;
    n = 9;
    k = (n + 1)/2;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            
            if((i == j || j == n - i - 1))
                cout<<"* ";
            else if(j == k - i - 1 || j == k + i -1)
                cout<<"* ";
            else if(j == i - k + 1|| j == 2 * k - i + 2)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"\nPattern 22"<<endl;
    cout<<"\nPattern 23"<<endl;
    cout<<"\nPattern 24"<<endl;
    cout<<"\nPattern 25"<<endl;
    
    return 0;
}
