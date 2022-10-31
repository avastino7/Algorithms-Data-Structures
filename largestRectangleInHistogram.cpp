class Solution {
private:
    vector<int> nextSmallerElements(vector<int> &heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0; i--){
            while(st.top()!= -1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerElements(vector<int> &heights,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            while(st.top()!= -1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElements(heights, n);//indices

        vector<int> prev(n);
        prev = prevSmallerElements(heights, n);
        int area = INT_MIN;

        for(int i=0; i<n; i++){
            int l = heights[i];
            
            if(next[i] == -1){
                next[i] = n;
            }

            int b = next[i] - prev[i] -1;
            area = max(area, l*b);
        }

        return area;
    }
};
