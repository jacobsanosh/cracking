#include<iostream>
#include<algorithm>
#include<climits>
#include<forward_list>
using namespace std;
bool checkeven(int val)
{
    return val%2==0;
}
int main()
{
    forward_list<int> arr;
    arr.assign({1,2,3,4,5});
    for(auto i:arr)
        cout<<i<<" ";
    arr.push_front(0);
    cout<<"\nafter pushing front "<<*arr.begin();
    arr.emplace_front(1);
    cout<<"\nafter emplacing front "<<*arr.begin();
    cout<<"\nafter emplacing function "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.pop_front();
    cout<<"\nafter poping from front "<<arr.front();

    forward_list<int>::iterator it=arr.begin();
    arr.insert_after(it,20);
    cout<<"\nafter insert after is "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.insert_after(it,2,20);
    cout<<"\nafter insert after is "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    vector<int> v1{40,50,60};
    arr.insert_after(it,v1.begin(),v1.end());
    cout<<"\nafter insert after using iterator is "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.insert_after(arr.begin(),{100,200,300});
    cout<<"\nafter insert using list is "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.emplace_after(it,4000);
    cout<<"\nafter emplace_after "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.erase_after(arr.begin(),arr.end());
     cout<<"\nafter erase_after "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    arr.remove(0);
     cout<<"\nafter remove "<<arr.empty();

     forward_list<int> fl{1,2,3,4,5,6};
     fl.remove_if(checkeven);
     cout<<"\nafter remove if "<<endl;
      for(auto i:fl)
        cout<<i<<" ";
    fl.clear();
    cout<<"\nis fl is empty "<<fl.empty();
    forward_list<int>fl1{1,2,3,4};
    forward_list<int>fl2{5,6,7,8};
    fl1.splice_after(fl1.begin(),fl2);
    cout<<"\nafter splice_After "<<endl;
    for(auto i:fl1)
        cout<<i<<" ";
    
    cout<<"\nusing front "<<fl1.front();
    cout<<endl;
    cout<<"\nusing begin and end"<<endl;
    for(auto i=fl1.begin();i!=fl1.end();i++)
        cout<<*i<<" ";
    cout<<"\nusing cbegin and cend"<<endl;
    for(auto i=fl1.cbegin();i!=fl1.cend();i++)
        cout<<*i<<" ";
    forward_list<int>::iterator iter=fl1.before_begin();
    fl1.insert_after(iter,10);
    cout<<"\nusing begin and end iter "<<endl;
    for(auto i=fl1.begin();i!=fl1.end();i++)
        cout<<*i<<" ";
    auto it1 = fl1.cbefore_begin();
    fl1.insert_after(it1, 1000);
 
    cout<<"\nusing cbefore_begin"<<endl;
    for(auto i=fl1.begin();i!=fl1.end();i++)
        cout<<*i<<" ";
    cout<<"\nmax size is "<<fl1.max_size();
    fl1.resize(2);
    cout<<"\nafter resizing it"<<endl;
    for(auto i=fl1.begin();i!=fl1.end();i++)
        cout<<*i<<" ";
    fl1.reverse();
      cout<<"\nafter reversing it"<<endl;
    for(auto i=fl1.begin();i!=fl1.end();i++)
        cout<<*i<<" ";
    
    forward_list<int> fl3{1,2,3,4,4,5,5};
    fl3.unique();
    cout<<"\nafter unique operation "<<endl;
    for(auto i=fl3.begin();i!=fl3.end();i++)
        cout<<*i<<" ";

}