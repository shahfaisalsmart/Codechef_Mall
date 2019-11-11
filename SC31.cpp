// BEGINNING WITH THE NAME OF ALMIGHTY GOD
// AUTHOR:: MOHAMMAD FAISAL
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int * arr = new int[10];
    while(t--)
    {
        int n;
        cin >> n;
        // int * arr = new int[n];
        string k;
        cin >> k;
        n--;
        for(int i=0;i<k.length();i++)
        {
            (k[i]=='1') ? arr[i] = 1: arr[i]=0;
        }
        while(n--)
        {
            string s;
            cin >> s;
            int temp;
            for(int i=0;i<s.length();i++)
            {
                (s[i]=='1') ? temp = 1: temp = 0;
                arr[i]^=temp;   
            }
        }
        // for(int i=0;i<10;i++)
        //     cout<<arr[i]<<" ";
        cout<<count(arr,arr+10,1)<<endl;
    }
    return 0;
}
