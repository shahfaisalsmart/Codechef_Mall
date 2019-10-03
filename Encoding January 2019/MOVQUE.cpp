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

// platform: Codechef Encoding january 2019
// Coded On: 03/10/2019
// Beginning with the name of Almighty God ALLAH SUBHANA-WATAA-A-ALLAH.

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
long long solve(long long n)
{
    long long p = log2(n);
    return pow(2,p);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    system("clear");
    
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long k;
        k = solve(n);
        cout<<k<<endl;
    }
    return 0;
}
