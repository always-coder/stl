#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
#include<string>
using namespace std;

int main()
{
    deque<string> coll;

    coll.assign(5, string("deque"));
    coll.push_front("begin");
    coll.push_back("end");
    
    /*
    copy(coll.cbegin(), coll.cend(),
         ostream_iterator<string>(cout, "\n"));
    */

    for (int i = 0; i < coll.size(); ++i)
    {
	cout << coll[i] << " ";
    }

    cout << endl;
}
