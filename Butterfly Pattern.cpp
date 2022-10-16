//C++ program to print butterfly pattern

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    //for upper half
    for(int i=1; i<=n; i++){
        //for printing starting pattern
        for(int j=1; j<=i; j++)
            cout<<"*";
            
        //for printing spaces in between pattern
        for(int j=1; j<=2*(n-i); j++)
            cout<<" ";
            
        //for print ending pattern
        for(int j=1; j<=i; j++)
            cout<<"*";
            
        //provide next line 
        cout<<endl;
    }
    
    //for lower half
    for(int i=n; i>=1; i--){
        //for printing starting pattern
        for(int j=1; j<=i; j++)
            cout<<"*";
            
        //for printing spaces 
        for(int j=1; j<=2*(n-i); j++)
            cout<<" ";
            
        //for printing ending pattern
        for(int j=1; j<=i; j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
