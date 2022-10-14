//C++ program to find whether a number is palindrome or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int temp=n; 
    int rev=0;  
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp==rev)
        cout<<"Palindrome Number";
    else
        cout<<"Not a Palindrome Number";
    return 0;
}
