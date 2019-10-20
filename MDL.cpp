// Author:: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int * arr = new int[n];
	for(int j=0;j<n;j++)
	{
		cin >> arr[j];
	}
	// sort(arr,arr+n);
	int mn = *min_element(arr,arr+n);
	int mx = *max_element(arr,arr+n);
	
	for(int i=0;i<n;i++)
	{
		if(mn==arr[i])
		{
			cout<<mn<<" ";
			mn= -1;
		}
		if(mx==arr[i])
		{
			cout<<mx<<" ";
			mx = -1;
		}
	}
	cout<<endl;
	}
	return 0;
}
