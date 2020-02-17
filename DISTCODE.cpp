//BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.flush();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        unordered_map<string, int> dp;
        int len = s.size();
        int res =0;
        for(int i=0;i<len-1;i++)
        {       
            string a = to_string(s[i]);
            string b = to_string(s[i+1]);     
            string temp = a+b;
            if(dp[temp]==0)
            {res++;dp[temp]++;
            }

        }
        cout<<res<<endl;
        dp.clear();
    }
    return 0;
}
