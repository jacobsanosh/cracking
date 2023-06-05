#include<iostream>
#include<algorithm>
#include<climits>
#include<set>
using namespace std;
int main()
{
    set<string,greater<string>> name;
    name.insert("sanosh");
    name.insert("saniya");
    name.insert("sanju");
    name.insert("sanju");
    cout<<"\nnames are"<<endl;
    for(auto i:name)
        cout<<i<<" ";
    cout<<"\nusing begin and end"<<endl;
    for(auto i=name.begin();i!=name.end();i++)
        cout<<*i<<" ";
    cout<<"\nthe size of the sets is "<<name.size();
    cout<<"\nthe  max size of the sets is "<<name.max_size();
    cout<<"\nis set is empty "<<name.empty()<<endl;
    name.insert("nandu");
    name.insert("thala");
    name.insert("kuda");
    set<string,greater<string>>::iterator itr;
    cout<<"\nthe names using iterator"<<endl;
    for(itr=name.begin();itr!=name.end();itr++)
        cout<<*itr<<" ";
    cout<<"\nafter copying into another sets"<<endl;
    set<string>dup(name.begin(),name.end());
    for(itr=dup.begin();itr!=dup.end();itr++)
        cout<<*itr<<" ";
    cout<<"\nin name findiing sanosh "<<*name.find("sanosh");

    //erasing
    name.erase(name.begin(),name.find("saniya"));
    cout<<"\nafter erasing upto sanju "<<endl;
    for(itr=name.begin();itr!=name.end();itr++)
        cout<<*itr<<" ";
    // string remove;
    // remove=name.erase("saniya");
    // cout<<remove<<" is removed";
    set<int> num;
    num.insert(2);
    num.insert(1);
    num.insert(6);
    num.insert(4);
    num.insert(2);
    num.insert(5);
    auto val=num.upper_bound(4);
    cout<<"\n"<<*(val)<<" upper bound ";
    auto val1=num.lower_bound(3);
    cout<<"\n"<<*(val1)<<" lower bound ";
    cout<<"\nloop using rbegin and rend"<<endl;
    for(auto i=num.rbegin();i!=num.rend();i++)
        cout<<*i<<" ";
     cout<<"\nloop using cbegin and crend"<<endl;
    for(auto i=num.cbegin();i!=num.cend();i++)
        cout<<*i<<" ";
    cout<<"\nloop using crbegin and crend"<<endl;
    for(auto i=num.crbegin();i!=num.crend();i++)
        cout<<*i<<" ";
    // auto rem=num.erase(num.begin());
    // cout<<"\nremvoed value is "<<*rem;
    auto itr1=num.end();
    itr1--;
    itr1--;
    num.erase(num.begin(),itr1);
     cout<<"\nafter erasing "<<endl;
    for(auto i=num.cbegin();i!=num.cend();i++)
        cout<<*i<<" ";
    set<int>num2{1,2,3,4};
    set<int>::key_compare comp=num2.key_comp();
    auto l=*num2.end();
    cout<<"nelement using compare function "<<l<<endl;
    set<int>::iterator itr3=num2.begin();
    while(comp(*(itr3),l)){
        cout<<*itr3<<" ";
        itr3++;
    }
    
    set<int>::value_compare vcomp=num2.value_comp();
    auto v1=*num2.end();
    cout<<"\nusing value comparator "<<v1<<endl;
    set<int>::iterator itr4=num2.begin();
    cout<<"\nnums "<<*itr4<<endl;
     do {
       cout << *itr4 << " ";
    } while (comp(*(++itr4), v1));
  
    if(num2.find(2)!=num2.end())
    {
        cout<<"\n2 is found "<<endl;
    }
    else{
        cout<<"\n2 is not found"<<endl;
    }
    cout<<"\n count 2 is "<<num2.count(2)<<endl;
    //equal_range
    auto eq_range=num2.equal_range(2);
    cout<<"\nnum2 2 lower range is "<<*eq_range.first;
    cout<<"\nnum2 2 upper range is "<<*eq_range.second;
    
    cout<<"\nafter emplacing the set "<<endl;
    num2.emplace(10);
    for(auto i:num2)
        cout<<i<<" ";
    num2.emplace_hint(num2.begin(),20);   
    cout<<"\nafter emplacing hint"<<endl;
    for(auto i:num2)
        cout<<i<<" ";

    set<int>s1{1,2,3},s2{4,5,6};
    s1.swap(s2);
    cout<<"\nafter swapping s1"<<endl;
    for(auto i:s1)
        cout<<i<<" ";
     cout<<"\nafter swapping s2"<<endl;
    for(auto i:s2)
        cout<<i<<" ";
}