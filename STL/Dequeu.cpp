#include<iostream>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> deq{1,2,3,4};
    cout<<"\nafter inserting the elements"<<endl;
    for(auto i:deq)
        cout<<i<<" ";
    deq.insert(deq.begin(),0);
    deq.insert(deq.begin(),2,0);//for inserting two zeros
    cout<<"\nthe first element is "<<deq[0]<<endl;
    cout<<"\ninserting two zeros"<<deq[0]<<endl;
    for(auto i:deq)
        cout<<i<<" ";
    
    //inserting an range of value from an vector
    vector<int> v1{1,2,3};
    deq.insert(deq.begin(),v1.begin(),v1.end());
     cout<<"\nafter inserting an range "<<endl;
    for(auto i:deq)
        cout<<i<<" ";
    cout<<"\nusing begin and end"<<endl;
    for(auto i=deq.begin();i!=deq.end();i++)
        cout<<*i<<" ";
    cout<<"\nusing rbegin and rend"<<endl;
    for(auto i=deq.rbegin();i!=deq.rend();i++)
        cout<<*i<<" ";
    cout<<"\nmax size of the deque "<<deq.max_size()<<endl;

    deque<int> d1;
    d1.assign(10,5);
    cout<<"\nusing assign operator"<<endl;
    for(auto i:d1)
        cout<<i<<" ";
    d1.resize(3);
    cout<<"\nafter resize operator"<<endl;
    for(auto i:d1)
        cout<<i<<" ";
    d1.push_front(1);
    d1.push_front(2);
    d1.push_back(3);
    cout<<"\nafter pushback and push front operator"<<endl;
    for(auto i:d1)
        cout<<i<<" ";
    cout<<"\nafter pop front and pop back"<<endl;
    d1.pop_back();
    d1.pop_front();
     for(auto i:d1)
        cout<<i<<" ";
    d1.erase(d1.begin()+2);//remove third element
    cout<<"\nafter erasing"<<endl;
    cout<<"\nthe their element is "<<d1.at(2)<<endl;
    for(auto i:d1)
        cout<<i<<" ";
    d1.clear();
    cout<<"\nis d1 is empty"<<d1.empty()<<endl;
    deque<int> d2{1,2,3},d3{4,5,6};
    d2.swap(d3);
    cout<<"\nafter swaping d2"<<endl;
    for(auto i:d2)
        cout<<i<<" ";
    cout<<"\nafter swaping d3"<<endl;
    for(auto i:d3)
        cout<<i<<" ";
    
    d3.emplace_front(0);
    cout<<"\nafter emplacing at front is "<<d3.at(0);
    d3.emplace_back(4);
    cout<<"\nafter emplacing at back is "<<d3.at(d3.size()-1);
}