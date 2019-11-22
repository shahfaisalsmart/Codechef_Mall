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
        int n,k;
        cin >> n >> k;
        int dino = n-k;
        while(dino<=n)
        { cout<<dino<<" ";dino++;}
        for(int i=1;i<(n-k);i++)
            cout<<i<<" ";
        cout<<endl;     
    }
    return 0;
}
