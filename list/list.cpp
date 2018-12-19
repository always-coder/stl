#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    list<int> number;

    cout << "list size is:" << number.size() << endl;
    
    /*insert node to list tail*/
    number.push_back(0);
    number.push_back(1);
    number.push_back(2);
    number.push_back(3);
    cout << "list size is:" << number.size() << endl;

    list<int>::iterator iter;
    for (iter = number.begin(); iter != number.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;

    /*insert node to list head*/
    number.push_front(-1);
    number.push_front(-2);
    for (iter = number.begin(); iter != number.end(); ++iter)
    {
	cout << *iter << ' ';
    }
    cout << endl;

    /*insert node to optional position*/
   
    /*
       find search scop is [begin, end)
       include begin, but not end
    */
    iter = find(number.begin(), number.end(), 2);
    if (iter != number.end())
    {
	cout << "find the numner:"<< *iter  << endl;
    }else
    {
	cout << "can not find the number" << endl;
    }

    number.insert(iter, 15);
    iter ++;
    number.insert(iter, 25);
    
    /*erase node*/
    iter = find(number.begin(), number.end(), -2);
    if (iter != number.begin())
    {
	number.erase(iter);
    }else
    {
	cout << "list head" << endl;
	number.pop_front();
    }

    for (iter = number.begin(); iter != number.end(); ++iter)
    {
	cout << *iter << ' ';
    }
    cout << endl;

    cout << "the first number of list:" << number.front() << endl;
    cout << "the last number of list:" << number.back() << endl;

}
