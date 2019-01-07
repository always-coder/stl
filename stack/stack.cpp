#include<stack>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    
    cout << st.top() << endl;
    st.top() = 100;

    cout << st.top() << endl;

    st.pop();
    st.pop();
    /*
    while(!st.empty()){
        cout << st.top() << " ";
	st.pop();
    }
    */
    cout << endl;

}
