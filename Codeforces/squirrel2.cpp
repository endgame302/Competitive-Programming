#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   int curr = 0;
   int res = 0;
   int i = 0;
   bool flag = false;
   int n2 = t;
   while (t--)
   {
       int n;
       cin >> n;
       flag = false;
       if (curr > n)
       {
           res += curr - n;
           curr = n;
           res++;
       }
       else if(curr < n)
       {
    
           res += n - curr;
           curr = n;
           res++; //eat
       }
       else if(curr == n)
       {
           res++;//eat 
       
       }
    if(i != n2 - 1)
        {res++;    //jump}   
        
        i++;
        }
    }
   cout << res << endl;
}