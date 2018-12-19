#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> number;
    vector<int>::iterator iter;

    
    for(int i = 1; i < 10; i++)
    {
	cout << "the capacity of vector is:" << number.capacity() << endl;
	number.push_back(i);
    }

    cout<< "first number of vector: " << number.front() << endl;
    cout<< "last number of vector: " << number.back() << endl;
    cout<< "the size of vector: " << number.size() << endl;
    cout<< "the capacity of vector is: " << number.capacity() << endl;

    for (int i = 0; i < number.size(); ++i)
	    cout << number[i] <<' ';
    cout << endl;

    number.pop_back();
    
    for (int i = 0; i < number.size(); ++i)
	    cout << number[i] <<' ';
    cout << endl;

    /*
       find a element in a vector
       find in file algorithm
    */
    iter = find(number.begin(), number.end(), 9);
    if (iter != number.end())
    {
	number.erase(iter);
    }else
    {
	cout << "delete last number" << endl;
	number.pop_back();
    }

    for (int i = 0; i < number.size(); ++i)
	    cout << number[i] <<' ';
    cout << endl;
    
    /*
    iter = number.begin();
    cout << "iterator is :" << *iter << endl;
    iter = number.end();
    cout << "iterator is :" << *iter << endl;
    */
    number.clear();
    cout << "the size of vector is: " << number.size() << endl;
}





