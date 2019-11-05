// MIT License
// Copyright (c) 2019 Mohammad Faisal <mohammad.faisal78612@gmail.com>
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// platform: Codechef:: Problems:: Attendence
// Coded On: 05/11/2019
// Beginning with the name of Almighty God ALLAH SUBHANA-WATAA-A-ALLAH.

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    map<string,int> mp;
    vector<pair<string,string> > name;
    string s,t;
    // cin >> s >> t;
    // mp[s]++;
    // cout<<s<<" "<<t<<endl;
    while(n--)
    {
        cin >> s >> t;
        name.push_back(make_pair(s,t));
        mp[s]++;
    }
    // for(auto &k: mp)
    // 	cout<<k.first<<" "<<k.second<<endl;
    for(int i=0;i<name.size();i++)
    {
        (mp[name[i].first]>1) ? cout<<name[i].first<<" "<<name[i].second<<endl:cout<<name[i].first<<endl;
    }
    }
    return 0;
}
