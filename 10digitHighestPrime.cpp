

#include<bits/stdc++.h>

using namespace std;
int d=0;
typedef long long ll;
seive(ll n)
{
         ll flag=0,i,c;
        for (i = 2; i *i<=n; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
                    d=1;
              cout<<n<<" ";
             //return 0;

    }

}
int main()
{
          ll a,i,j,ans=0,c=0;
         a=9999999999;
          while(a!=0)
          {
                    seive(a);
                    a--;
                    if(d==1)
                              break;
          }

}
