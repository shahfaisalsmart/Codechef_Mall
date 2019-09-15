// Author: Mohammad Faisal
// email: mohammad.faisal78612@gmail.com
// Dated: 15-sept-2019
#include<bits/stdc++.h>
using namespace std;
struct company{
    long long package;
    long long req;
};
int main()
{
	int t;
	cin >> t;
	while(t--){
    long long n;
    cin >> n;
    long long m;
    cin >> m;
    long long * arr = new long long[n];
    for(long long i=0;i<n;i++)
    {
        cin >> arr[i]; 
    }
    // map<int,int> mp;
    company * comp = new company[m];
    for(long long i=0;i<m;i++)
    {
        long long a,b;
        cin >> a >> b;
        comp[i].package = a;
        comp[i].req = b;
    }
    long long x=0,y=0;
    vector<int>rem(m,1);
    long long k=0;
    while(n--)
    {
        string s;
        cin >> s;
        // cout<<s<<endl;
        long long len = s.size();
        long long max_so_far = -1e9,idx=-1;
        bool flag = false;
        // int * remaining = new int[m];
        for(long long i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                if(comp[i].package >= arr[k] && comp[i].req>0)
                {
                    if(max_so_far < comp[i].package)
                    {
                        max_so_far = comp[i].package;
                        idx = i;
                        flag=true;
                        // rem[i] = 0;
                    }
                    
                }
                // cout<<"max so far is:"<<max_so_far<<endl;
            }
        }
        if(flag==true)
        {
    	// cout<<"max so far: "<<max_so_far<<endl;
    	// cout<<"idx: "<<idx<<endl;
        x+=max_so_far;
        y++;
        rem[idx] = 0;
        // if(comp[idx].req == 0)
        // 	continue;
        comp[idx].req = comp[idx].req - 1;
        // cout<<"req: "<<comp[idx].req<<endl;
        // y++;
        }
        k++;
    }
    	long long c = count(rem.begin(),rem.end(),1);
    	cout<<y<<" "<<x<<" "<<c<<endl;
    	// delete[] arr;
	}
    // for(int i=0;i<m;i++)
    //     cout<<comp[i].package<<" "<<comp[i].req<<endl;
    // cout<<"total money: "<<x<<endl;
    // cout<<"selected: "<<y<<endl;
    // cout<<count(rem.begin(),rem.end(),1)<<endl;
    return 0;
}
