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
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	ios_base::sync_with_stdio(false);
 	cin.tie(0);
 	cout.tie(0);
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		long long int k;
 		cin >> k;
 		int p_ten=0;
 		int p_two=0;
 		while(k%10==0)
 		{
 			p_ten++;
 			k/=10;
 		}
 		while(k%2==0)
 		{
 			p_two++;
 			k/=2;
 		}
 		if(k==1)
 		{
 			(p_ten>=p_two) ? cout<<"Yes":cout<<"No";
 		}
 		else
 		{
 			cout<<"No";
 		}
 		cout<<endl;
 	}
 	return 0;
 }
