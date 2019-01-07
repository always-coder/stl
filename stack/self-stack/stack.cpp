#include<exception>
#include<iostream>
#include "Stack.h"

using namespace std;

int main()
{
    try
    {
        Stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

    }catch(const exception e)
    {
	cerr << "EXCEPTION: " << e.what() << endl;
    }
}
