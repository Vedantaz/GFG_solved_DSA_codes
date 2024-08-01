class Solution
{
    public:
    //Function to calculate the span of stocks price for all n days.
    stack<pair<int, int>> st;
    int next(int price, int i) {
        int span = 1;

        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();

        }
        st.push({price, span});
        return span;
    }
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
        vector<int> res;
        int i=-1;
        while(n--){
            i++;
            res.push_back(next(price[i], i));
        }
        return res;
    }
};