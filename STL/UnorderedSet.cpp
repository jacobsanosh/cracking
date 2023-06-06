#include<iostream>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> stringSet;
    stringSet.insert("cpp");
    stringSet.insert("python");
    stringSet.insert("java");
    stringSet.insert("c");
    for(auto i:stringSet)
        cout<<i<<" ";
    string search_val="cpp";
    if(stringSet.find(search_val)!=stringSet.end())
    {
        cout<<"\nfound "<<search_val<<endl;
    }
    else{
        cout<<"\nnot found"<<endl;
    }
    unordered_set<string>::iterator itr;
    for(itr=stringSet.begin();itr!=stringSet.end();itr++)
        cout<<(*itr)<<" ";
    
    //unorderedset
    vector<int>v1{1,2,3,4,5,5,1,2,6};
    unordered_set<int>duplicates;
    unordered_set<int>items;
    for(auto i:v1)
    {
       
        if(items.find(i)!=items.end())
        {
            cout<<"\nentered in if";
            duplicates.insert(i);
        }
        else
        {
            items.insert(i);
            cout<<"\nin else";
        }
    }
    cout<<"\nduplicates are "<<endl;
    for(auto d:duplicates)
        cout<<d<<" ";
    unordered_set<int> nums(v1.begin(),v1.end());
    cout<<"\nelements are "<<endl;
    for(auto i:nums)
        cout<<i<<" ";
    cout<<"\nthe no of 1 is "<<nums.count(1);
    cout<<"\nthe elements is  "<<*nums.find(4);
    cout<<"\nnums bucket count "<<nums.bucket_count();
    cout<<"\nnums bucket count "<<nums.bucket_size(3)<<" elements ";

    //erasing
    nums.erase(1);
    cout<<"\nafter erasing the elements are "<<endl;
    for(auto i:nums)
        cout<<i<<" ";
    nums.erase(nums.find(5),nums.end());
    cout<<"\nafter erasing the elements are "<<endl;
    for(auto i:nums)
        cout<<i<<" ";
    nums.erase(nums.begin());
    cout<<"\nis nums is empty "<<nums.empty()<<endl;
    cout<<"\nis nums size "<<nums.size()<<endl;
    cout<<"\nnums max-size "<<nums.size()<<endl;

     unordered_set<string> names2;
    
    unordered_set<string>::hasher fn=names2.hash_function();
    cout<<"\nhash is "<<fn("hello")<<endl;

    names2.reserve(1);
    names2.insert("nandu");
    names2.insert("abhishek");
    names2.insert("deepu");
    names2.insert("sanju");
      for (auto it = names2.begin(); it != names2.end(); it++) {
        cout << *it << " ";
    }
    cout<<"\nbucket  is"<<endl;
    for(auto i:names2)
    {
        cout<<names2.bucket(i)<<" ";
    }
    cout<<"\nbucket count is "<<names2.bucket_count()<<endl;
    cout<<"\nload factor is "<<names2.load_factor()<<endl;

 
    unordered_set<string> us;
    // rehashed
    us.rehash(9);
 
    // insert elements
    us.insert("geeks");
    us.insert("for");
    us.insert("geeks");
    us.insert("users");
    cout<<"\nafter reshash"<<endl;
      for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
 
    cout<<"\nafter emplacing hint"<<endl;
    names2.emplace_hint(names2.begin(),"jacob");
    for(auto i:names2)
        cout<<i<<" ";
}