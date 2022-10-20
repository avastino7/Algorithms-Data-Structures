#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr {1,2 ,3 ,4 , 7, 9, 10};
    int cnt=0;
    for(int i=0; i<arr.size(); i++)
        cnt+=1;
        
    cout<<"Count of array elements: "<<cnt<<endl;

    return 0;
}
