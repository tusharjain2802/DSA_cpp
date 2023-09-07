queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> st;
    queue<int> ans;
    int temp;
    for(int i=0; i<k;i++){
        temp=q.front();
        q.pop();
        st.push(temp);
    }
    for (int i = 0; i < k; i++)
    {
        temp=st.top();
        ans.push(temp);
        st.pop();
    }
    for(int i=0;i<q.size();i++){
        temp=q.front();
        q.pop();
        ans.push(temp);
    }
    return ans;
}
