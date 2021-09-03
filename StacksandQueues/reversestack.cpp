#include <iostream>
#include <stack>
using namespace std;
void insertbottom(stack<int> &st ,int element){
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int topelement=st.top();
    st.pop();
    insertbottom(st,element);
    st.push(topelement);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    
int element=st.top();
st.pop();
reverse(st);
insertbottom(st,element);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

}