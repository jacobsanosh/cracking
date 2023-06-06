#include<iostream>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> nums1;
    nums1.insert(1);
    nums1.insert(1);
    nums1.insert(2);
    nums1.insert(3);
    nums1.insert(4);
    nums1.insert(4);
    cout<<"\nunsorted multipleset"<<endl;
    for(auto i=nums1.begin();i!=nums1.end();i++)
        cout<<*i<<" ";
    cout<<"\nis nums1 is empty "<<nums1.empty();
    cout<<"\nno of counts of 1 "<<nums1.count(1);
    
}   