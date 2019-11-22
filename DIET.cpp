// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
		// cout<<"k:: "<<k<<endl;
		int * arr = new int[n+1];
		for(int i=1;i<=n;i++)
			cin >> arr[i];
        long long rem=0;
        bool flag = true;
        for(int i=1;i<=n;i++)
        {
            // int x;
            // cin >> x;
            // x+=rem;
            rem+=arr[i];
            // cout<<"rem:: "<<rem<<endl;
            if(rem < k)
            {
                cout<<"NO "<<i;
                flag = false;
                break;
            }
            else
            {
                rem-=k;
            }
        }
        if(flag) cout<<"YES";
        cout<<endl;
        delete[] arr;
    }
    return 0;
}
