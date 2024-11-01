#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int L=S.size();

    for(int I=0;I<L;I++)
    {
        if(isupper(S[I]))
        {
            S[I]=tolower(S[I]);
        }
            if(S[I]!='a'&&S[I]!='e'&&S[I]!='i'&&S[I]!='o'&&S[I]!='u'&&S[I]!='y')
            {
                cout<<"."<<S[I];
            }

    }
    cout<<endl;
    return 0;
}
