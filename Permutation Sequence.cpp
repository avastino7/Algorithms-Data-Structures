/*

The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

 

Example 1:

Input: n = 3, k = 3
Output: "213"

*/

vector<int>fact(10,1);
class Solution {
public:   
    int Fact(int n){
        //Base
        if(n==1) return 1;
        return fact[n] = n*Fact(n-1);
    }
    void Helper(int n,int numbers,int k,string &res,unordered_map<int,bool>&ismarked){
        if(k < 0) return;
        int tk = k;
        for(int i=1;i<=n;i++){
            if(ismarked[i]) continue;
            if(tk-fact[numbers-1] <= 0){
                ismarked[i] = true;
                res+=to_string(i);
                Helper(n,numbers-1,tk,res,ismarked);
            }else{
                tk-=fact[numbers-1];
            }
        }
    }
    string getPermutation(int n, int k) {
        string res="";
        unordered_map<int,bool> ismarked;
        Fact(9);
        Helper(n,n,k,res,ismarked);
        return res;
    }
};
