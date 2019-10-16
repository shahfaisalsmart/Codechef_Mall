// Author: Mohammad Faisal
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
        int cake=0,easy=0,sim=0,esymd=0,md=0,mdhard=0,hard=0;
        while(n--)
        {
        string s;
        cin >> s;
        if(s=="cakewalk")   cake++;
        if(s=="easy") easy++;
        if(s=="simple") sim++;
        if(s=="easy-medium") esymd++;
        if(s=="medium") md++;
        if(s=="medium-hard") mdhard++;
        if(s=="hard") hard++;
        }
     //   cout<<cake<<" "<<easy<<" "<<sim<<" "<<esymd<<" "<<md<<" "<<mdhard<<" "<<hard; 
        (cake>=1 && easy>=1 && sim>=1 && (esymd>=1 || md>=1) && (mdhard>=1 || hard>=1)) ? cout<<"Yes" : cout<<"No";
        cout<<endl;
    }
    return 0;
}