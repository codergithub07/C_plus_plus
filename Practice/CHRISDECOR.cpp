#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int l,lo,so;
        cin>>l>>lo>>so;
        while(lo>=1 && so>=3 && l--)
        {
            lo--;
            so-=3;
           
        }
        if(l>0)
        {
            while(lo>=2 && l--)
            {
                lo-=2;
            }
        }
        
        if(l>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}