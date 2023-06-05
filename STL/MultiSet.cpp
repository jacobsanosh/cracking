#include<iostream>
#include<algorithm>
#include<climits>
#include<set>
using namespace std;
int main()
{
    multiset<int> num1;
    num1.insert(1);
    num1.insert(1);
    num1.insert(2);
    num1.insert(3);
    num1.insert(4);
    cout<<"\nelements are "<<endl;
    for(auto i:num1)
        cout<<i<<" ";
    cout<<"\nbeging and end"<<endl;
    for(auto i=num1.begin();i!=num1.end();i++)
        cout<<*i<<" ";
    cout<<"\ncbeging and cend"<<endl;
    for(auto i=num1.cbegin();i!=num1.cend();i++)
        cout<<*i<<" ";
    cout<<"\nrbeging and rend"<<endl;
    for(auto i=num1.rbegin();i!=num1.rend();i++)
        cout<<*i<<" ";
    cout<<"\ncrbeging and crend"<<endl;
    for(auto i=num1.crbegin();i!=num1.crend();i++)
        cout<<*i<<" ";
    cout<<"\nsize of num1 "<<num1.size()<<endl;
    cout<<"\ncheck empty "<<num1.empty();
    num1.insert(num1.end(),10);
    cout<<"\n\after itr insert"<<endl;
    for(auto i=num1.begin();i!=num1.end();i++)
        cout<<*i<<" ";
    auto itr=num1.end();
    itr--;itr--;
    // num1.erase(num1.begin(),itr);
    num1.erase(1);
    cout<<"\nafter erasing"<<endl;
    for(auto i=num1.begin();i!=num1.end();i++)
        cout<<*i<<" ";
    cout<<"\nvalue comp"<<endl;
    multiset<int>::value_compare comp=num1.value_comp();
    multiset<int>::iterator itr1=num1.begin();
    auto i=*num1.rbegin();
    do {
 
        cout << " " << *itr1;
 
    } while (comp(*itr1++, i));
    cout<<"\nkey compare"<<endl;
    multiset<int>::key_compare compv=num1.key_comp();
    multiset<int>::iterator itr2=num1.begin();
     i=*num1.rbegin();
    do {
 
        cout << " " << *itr2;
 
    } while (compv(*itr2++, i));
    if(num1.find(2)!=num1.end())
        cout<<"\nfinded 2 "<<endl;
    else
        cout<<"\nnot finded"<<endl;
    cout<<"\ncounting 2 "<<num1.count(2)<<endl;
    cout<<"\nlower bound of 3 "<<*num1.lower_bound(3)<<endl;
    cout<<"\nupper bound of 3 "<<*num1.upper_bound(3)<<endl;
    multiset<int> s1{1,2,3};
    multiset<int>s2{4,5,6};
    s1.swap(s2);
    cout<<"\nafter swapping s1"<<endl;
    for(auto i:s1)
        cout<<i<<" ";
    cout<<"\nafter swapping s2"<<endl;
    for(auto i:s2)
        cout<<i<<" ";
    num1.emplace(1);
    num1.emplace_hint(num1.begin(),40);
    cout<<"\nafter emplacing num1"<<endl;
    for(auto i:num1)
        cout<<i<<" ";
    auto itr3=num1.equal_range(2);
    cout<<"\nequal lower range "<<*itr3.first;
    cout<<"\nequal upper range "<<*itr3.second;
}