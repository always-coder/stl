/*
 * Associative array
 */

#include<map>
#include<string>
#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
    map<string,float> stocks;

    stocks["Baidu"] = 180.05;
    stocks["Apple"] = 260.14;
    stocks["Intel"] = 111.22;

    map<string,float>::iterator iter;

    for (iter = stocks.begin(); iter != stocks.end(); ++iter)
    {
	cout << iter->first << ":"
	     << iter->second << endl;
    }

    cout << endl;

    for (iter = stocks.begin(); iter != stocks.end(); ++iter)
    {
	iter->second *= 2;
    }

    for (iter = stocks.begin(); iter != stocks.end(); ++iter)
    {
	cout << iter->first << ":"
	     << iter->second << endl;
    }
  
    cout << endl;

    /* Reame key from "Qualcomm" to "Intel"
     */
    stocks["Qualcomm"] = stocks["Intel"];
    stocks.erase("Intel");

    for (iter = stocks.begin(); iter != stocks.end(); ++iter)
    {
	cout << iter->first << ":"
	     << iter->second << endl;
    }

}
