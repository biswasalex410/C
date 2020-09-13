#include<bits/stdc++.h>
using namespace std;
int main()
{
    map< char, int > mp;
    map<char, int>::iterator it ;

    int t,nc,nl,i,j,k,m,n,b,l;
    double s;
    char a,ln[10001],c;

    cin>>t;//testcase
    for(i=0; i<t; i++)
    {
        s=0;
        cin>>nc;//number of character
        for(j=0; j<nc; j++)
        {
            cin>>a;//character
            cin>>b;//value of character
            mp[a]=b;
        }

        cin>>nl;//number of line
        for(k=0; k<nl; k++)
        {
            cin.getline(ln,10001);
            l=strlen(ln);
            for(m=0; m<l; m++)
            {
                it=mp.find(ln[m]);
                if(it == mp.end())
                {
                    continue;
                }
                else
                {
                    s+=(it->second);
                }

            }
        }
        s/=100;
        printf("%0.2lf$\n",s);
        mp.clear();
    }

}
