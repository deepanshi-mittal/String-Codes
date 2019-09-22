#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int i=1;
    string org=str;
    sort(str.begin(),str.end());
    do
    {
        if(str==org)
            break;
        i++;
    }
    while(next_permutation(str.begin(),str.end()));
    cout<<i;
    return 0;
}