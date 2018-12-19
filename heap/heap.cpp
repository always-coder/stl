#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ia[9] = {0, 1, 2, 3, 4, 8, 9, 3, 5};

    vector<int> number(ia, ia + 9);

    make_heap(number.begin(), number.end());

    for (int i = 0; i < number.size(); ++i)
    {
	cout << number[i] << ' ';
    }
    cout << endl;

    number.push_back(7);
    push_heap(number.begin(), number.end());
    for (int i = 0; i < number.size(); ++i)
    {
	cout << number[i] << ' ';
    }
    cout << endl;

    pop_heap(number.begin(), number.end());
    for (int i = 0; i < number.size(); ++i)
    {
	cout << number[i] << ' ';
    }
    cout << endl;
    number.pop_back();

    sort_heap(number.begin(), number.end());
    for (int i = 0; i < number.size(); ++i)
    {
	cout << number[i] << ' ';
    }
    cout << endl;
   
}
