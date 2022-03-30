#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
vector<int> v1;
v1.push_back(5);
v1.push_back(34);
v1.push_back(234);
v1.push_back(567);
v1.push_back(557);

vector<int> :: iterator it;

for(it=v1.begin();it!=v1.end();it++){

cout<<*it<<" ";
}


return 0;
}

