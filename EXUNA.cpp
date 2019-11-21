// AUTHOR:: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int mn = INT_MAX;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			mn = min(mn,x);
		}
		cout<<mn<<endl;
	}
	return 0;
}
