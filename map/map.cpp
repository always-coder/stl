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
    
    auto ops = stocks.find("Baidu");
    cout << "auto-" << ops->first << ":" 
	            << ops->second << endl;

    map<string,float>::iterator search;
    search = stocks.find("Apple");
    cout << "iter-" << search->first << ":"
	            << search->second << endl;
    /*
    for (iter = stocks.begin(); iter != stocks.end(); ++iter)
    {
	cout << iter->first << ":"
	     << iter->second << endl;
    }
    for (auto ops = stocks.begin(); ops != stocks.end(); ++ops)
    {
	cout << ops->first << "::"
	     << ops->second << endl;
    }
    */

}
