#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    int data[5] = {0, 1, 3, 5, 2};
    priority_queue<int> pq(data, data+5);


    while(!pq.empty())
    {
	cout << pq.top() << ' ';
	pq.pop();
    }

    cout << endl;
}
