/*


Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

*/

class Solution {
public:
    bool isop(string s){
        return (s=="+" or s=="-" or s=="*" or s=="/");
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        string ff, ss;
        if(tokens.size()==1 and !isop(tokens[0])) return stoi(tokens[0]);
        for(auto i=0;i<tokens.size();i++){
            while(i<tokens.size() and !isop(tokens[i])){ st.push(tokens[i]); i++;}
            
            if(st.size()) {ss=st.top(); st.pop();}
            if(st.size()) {ff=st.top(); st.pop();}
            
            // take stoll instead of stoi as "*" operations between two large numbers might overflows the range of integer 
            if(tokens[i]=="+") st.push(to_string(stoll(ff)+stoll(ss)));
            else if(tokens[i]=="*") st.push(to_string(stoll(ff)*stoll(ss)));
            else if(tokens[i]=="-") st.push(to_string(stoll(ff)-stoll(ss)));
            else if(tokens[i]=="/") st.push(to_string(stoll(ff)/stoll(ss)));
            
        }
        return stoi(st.top());
    }
};
