#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    
    cout<<"Reversed Integer: "<<rev<<endl;

    return 0;
}
