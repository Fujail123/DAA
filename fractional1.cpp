#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    int w;
    cin>>w;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(w>=a[i].second){
            ans+=a[i].first;
            w=w-a[i].second;
            continue;
        }
        int vw=a[i].first/a[i].second;
        ans+=vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
}