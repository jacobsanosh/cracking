#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
#include<climits>
using namespace std;
bool checkeven(int val){
    return (val%2==0);
}
int main()
{
    list <int> lst{1,2,3};
    for(auto i:lst)
        cout<<i<<endl;
    cout<<"first element is "<<lst.front()<<endl;
    cout<<"last element is "<<lst.back()<<endl;
    lst.push_front(0);
    cout<<"first element is after pushing in front "<<lst.front()<<endl;
    lst.push_back(4);
    cout<<"last element is after pushing in back "<<lst.back()<<endl;
    lst.pop_front();
    cout<<"poped out"<<endl;
    cout<<"after poping front we can see that first element is "<<lst.front();
    lst.pop_back();
    cout<<"after poping out last element from the list is "<<lst.back()<<endl;
    auto it=lst.begin();
    advance(it,2);
    lst.insert(it,5);
    for(auto i:lst)
        cout<<i<<" "<<endl;
    cout<<"\ninsered 5 at position 2"<<endl;
    cout<<*(lst.begin());
    cout<<"\nthe size of the list is "<<lst.size()<<endl;
    cout<<"\nthe end of the position is "<<*(lst.end())<<endl;

    //accessing
    list<int>::iterator ite;
    cout<<"\nusing reverese iterator "<<endl;

    for(ite=lst.begin();ite!=lst.end();ite++)
        cout<<*ite<<" ";
    cout<<"\nusing reverse iterator"<<endl;
    for(auto ite=lst.rbegin();ite!=lst.rend();ite++)
        cout<<*ite<<" ";
    cout<<"\nafter using constant begin"<<endl;
    for(auto ite=lst.cbegin();ite!=lst.cend();ite++)
        cout<<*ite<<" ";
    cout<<"\nafter using constant reverse"<<endl;
    for(auto ite=lst.crbegin();ite!=lst.crend();ite++)
        cout<<*ite<<" ";
    cout<<"\ncheckig for empty "<<lst.empty();

    list<int>::iterator iter;
    iter=lst.begin();
    advance(iter,2);
    lst.erase(iter);
    cout<<"\nafter ersase"<<endl;
    for(auto i:lst)
        cout<<i<<" ";
    
    //using assingn method
    cout<<"\nafter using assign method"<<endl;
    list<int> demlist;
    demlist.assign(4,5);
    for(auto i:demlist)
        cout<<i<<" ";
  
    demlist.remove(5);
    cout<<"\nafter removing all the 5 from the list"<<demlist.empty()<<endl;
    
    list<int> numlst{1,2,3,4,5,6};
    cout<<"\nafter removingeven numbers "<<endl;
    numlst.remove_if(checkeven);
    for(auto i:numlst)
        cout<<i<<" ";
    numlst.reverse();
    cout<<"\nafter reversing the elements are "<<endl;
    for(auto i:numlst)
        cout<<i<<" ";
    cout<<"\nthe size of list is "<<numlst.size();
    numlst.resize(2);
    cout<<"\nthe resized list is "<<endl;
    for(auto i:numlst)
        cout<<i<<" ";
    numlst.sort();
    cout<<"\nafter sorting  "<<endl;
    for(auto i:numlst)
        cout<<i<<" ";
    cout<<"\nmax size of the list is "<<numlst.max_size()<<endl;

    list<int> dup{1,2,1,1,3,4,5};
    dup.unique();
    cout<<"\nafter removing dup"<<endl;
    for(auto i:dup)
        cout<<i<<" ";
    dup.emplace_front(10);
    dup.emplace_back(15);
    cout<<"\nafter emplacing"<<endl;
     for(auto i:dup)
        cout<<i<<" ";
    swap(numlst,dup);
    cout<<"\nafter swaping numlist is "<<endl;
    for(auto i:numlst)
        cout<<i<<" ";
    cout<<"\nafter swaping dup is "<<endl;
    for(auto i:dup)
        cout<<i<<" ";
    cout<<"\nafter performing slicing operation "<<endl;
    numlst.splice(numlst.end(),dup);
    cout<<"\nafter splice numlist is "<<endl;
    for(auto i:numlst)
        cout<<i<<" ";
    list <int>l1{3,2,1},l2{4,5,6};
    l1.sort();
    l2.sort();
    l1.merge(l2);
    cout<<"\nafter merging "<<endl;
    for(auto i:l1)
        cout<<i<<" ";
    list<int>::iterator l1iter=l1.begin();
    advance(l1iter,3);
    l1.emplace(l1iter,100);
     cout<<"\nafter emplacing "<<endl;
    for(auto i:l1)
        cout<<i<<" ";
}   