#include <bits/stdc++.h>
using namespace std;
pair <int,int> pairs()
{
    pair <int,int> p = {1,2};
    pair <int,int> q = {3,4};
    return {p.first+q.first,p.second+q.second};
}
int main()
{
    pair <int,int> ans = pairs();
    cout << ans.first <<" "<< ans.second << endl;
    return 0;
}