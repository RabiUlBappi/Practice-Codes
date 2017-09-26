#include<bits/stdc++.h>
using namespace std;

int input;
vector<int> v;
map<int,int> mp;

int main(){
    while(cin>>input){
        if(mp[input]==0) v.push_back(input);
        mp[input]++;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    return 0;
}
