//                                ببِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
///==================================================///
///               !! HELLO WORLD !!                  ///
///                 >>IT'S ME<<                      ///
///               MOHAMMAD FAISAL                    ///
///==================================================///
//THIS CODE IS IMPLEMENTED BY DUGGU_123(MOHAMMAD FAISAL)
// author: MOHAMMAD FAISAL (email: mohammad.faisal78612@gmail.com)
// Beginning with the name of Almighty God ALLAH SUBHANA-WATAA-A-ALLAH.
/*
 
        _/ _/ _/ _/  _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
       _/           _/       _/   _/  _/         _/       _/  _/
      _/ _/ _/     _/ _/ _/ _/   _/  _/ _/ _/   _/ _/ _/ _/  _/
     _/           _/       _/   _/        _/   _/       _/  _/
    _/           _/       _/   _/  _/ _/ _/   _/       _/  _/ _/ _/ _/
 
 */
/*
MIT License
	Copyright (c) 2019 Mohammad Faisal <mohammad.faisal78612@gmail.com>
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
#include<bits/stdc++.h>
using namespace std;
bool check(map<int,int> mp)
{
    for(auto &u: mp)
    {
        if(u.second!=2 && u.second!=4)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
    map<int,int> mp;
	for(int i=0;i<4;i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	// for(auto&k: mp)
	// 	cout<<k.second<<" ";
    (check(mp)) ? cout<<"YES": cout<<"NO";
    cout<<endl;
    }
    return 0;
}
