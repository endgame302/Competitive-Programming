#include <bits/stdc++.h>
using namespace std;


int main() {
    
    
    int n;
    cin >> n;
    int temp = n;
    
    // Check if the number has any other digit. If yes, print -1.
    while(temp)
    {
        int r = temp%10;
        temp = temp/10;
       if(r != 3 && r != 8)
       {
           cout << -1 << endl;
           return 0;
       }
    }
    queue<string> q;
    q.push("3"); // Start bfs with both "3" and "8". BFS interacts with the neighbours.
    q.push("8");
//     vector<long long int> v;
    unordered_set<string> myset; // It acts as the visited array so that we don't put the same number again into the queue.
    myset.insert("3");
    myset.insert("8");
    while(!q.empty())
    {
        string top = q.front();
        q.pop();
        v.push_back(stoi(top));
        if(top.size() >= 9)break;
        
        if(myset.find(top + '3') == myset.end()) 
        {
            q.push(top + '3');
            myset.insert(top + '3');
        }
        if(myset.find(top + '8') == myset.end())
        {
            q.push(top + '8');
            myset.insert(top + '8');
        }
    }
    sort(v.begin(), v.end()); // sort to get things in order
    cout << distance(v.begin(), lower_bound(v.begin(), v.end(), n)) + 1 << endl;  // Binary search to find that element 
    
    return 0;
}
