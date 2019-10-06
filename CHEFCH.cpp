// author: Mohammad Faisal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len=s.size(),count=0,count2=1;
     //   bool turn=false;
        if(s[0]=='-')
        {
    //     bool = true;
            for(int i=1;i<len;i++)
            {
                if(i%2!=0 && s[i]=='-')
                    count++;
                else if(i%2==0 && s[i]=='+')
                    count++;
            }
            //count2++;
            for(int i=1;i<len;i++)
            {
                if(i%2!=0 && s[i]=='+')
                    count2++;
                else if(i%2==0 && s[i]=='-')
                    count2++;
            }
        }
        if(s[0]=='+')
        {
            for(int i=1;i<len;i++)
            {
                if(i%2!=0 && s[i]=='+')
                    count++;
                else if(i%2==0 && s[i]=='-')
                    count++;
            }
            //count2++;
            for(int i=1;i<len;i++)
            {
                if(i%2!=0 && s[i]=='-')
                    count2++;
                else if(i%2==0 && s[i]=='+')
                    count2++;
            }
        }
        cout<<min(count,count2)<<endl;
    }
    return 0;
}