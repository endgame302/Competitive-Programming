#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v;
    while (n--)
    {
        long long int temp;
        cin >> temp;
        v.push_back(temp);
    }
    long long int k;
    cin >> k;
    sort(v.begin(), v.end());
    while (k--)
    {
        long long int l;
        cin >> l;
    	vector<long long int>::iterator it = lower_bound(v.begin(), v.end(), l);
        if (*it < v[0])
        {
        	cout << 0 << endl;
        }
        else 
        {
    	cout << it - v.begin() + 1<< endl;
        }
        	
    }
}