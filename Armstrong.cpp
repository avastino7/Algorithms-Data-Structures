#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int temp=n;
    int sum=0;
    while(temp)
    {
        int last=temp%10;
        sum+=last*last*last;
         temp/=10;
    }
    sum==n?true:false;
    
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    if(isArmstrong)
    {
        cout<<"YES! It is a Armstrong number";
    }
    else
    {
        cout<<"NO It's not";
    }

  return 0;
}
