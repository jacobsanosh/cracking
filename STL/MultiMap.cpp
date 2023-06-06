#include<iostream>
#include<algorithm>
#include<climits>
#include<map>
using namespace std;
int main()
{
    multimap<string,int> names;
    names.insert(pair<string,int>("sanosh",71));
    names.insert(pair<string,int>("nandu",48));
    names.insert(pair<string,int>("abhishek",1));
    names.insert(pair<string,int>("abhishek",1));
    cout<<"\nmultiset datas are"<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;

    cout<<"\nmultiset datas cbegin and cend"<<endl;
    for(auto i=names.cbegin();i!=names.cend();i++)
        cout<<i->first<<" "<<i->second<<endl;

    cout<<"\nmultiset datas rbegin and rend"<<endl;
    for(auto i=names.rbegin();i!=names.rend();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    cout<<"\nmultiset datas crbegin and crend"<<endl;
    for(auto i=names.crbegin();i!=names.crend();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    cout<<"\nthe size of multiset is "<<names.size();

    names.emplace_hint(names.begin(),"athul",1);
    cout<<"\nmultiset datas using emplace hint"<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    cout<<"\nmultiset is empty or not "<<names.empty();
    cout<<"\nmultiset max size is  "<<names.max_size();

    multimap<string,int>::iterator it;
    pair<string,int>value=*names.rbegin();
    it=names.begin();
    cout<<"\nvalue comp"<<endl;
    do{
        cout<<(*it).first<<endl;

    }while(names.value_comp()(*it++,value));

    multimap<string,int>s1,s2;
    s1.insert(pair<string,int>("a",1));
    s1.insert(pair<string,int>("b",2));
    s1.insert(pair<string,int>("c",3));
    //insert in s2
    s2.insert(pair<string,int>("d",4));
    s2.insert(pair<string,int>("e",5));
    s2.insert(pair<string,int>("f",6));

    s1.swap(s2);
    cout<<"\nmultiset datas are s1 "<<endl;
    for(auto i=s1.begin();i!=s1.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    cout<<"\nmultiset datas are s2 "<<endl;
    for(auto i=s2.begin();i!=s2.end();i++)
        cout<<i->first<<" "<<i->second<<endl;

    names.emplace("alen",12);
    names.emplace("kartha",6);
    cout<<"\nmultiset datas are names "<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    auto itr2=s1.upper_bound("d");
    cout<<"\ns1 lower bound "<<(*itr2).first<<endl;
    cout<<"\ns2 upper bound "<<(*itr2).second<<endl;
    cout<<"\ncount is "<<names.count("abhishek");

    // names.erase(names.begin(),names.find("sanosh"));
    // cout<<"\nmultiset names after erase "<<endl;
    // for(auto i=names.begin();i!=names.end();i++)
    //     cout<<i->first<<" "<<i->second<<endl;
    
    cout<<"\nusing equal range"<<endl;
    auto itr3=names.equal_range("abhishek");
     for (auto itr = itr3.first; itr != itr3.second; ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    auto val2=names.lower_bound("sanosh");
     cout<<"\nnames first bound "<<(*val2).first<<endl;
    cout<<"\nnames second bound "<<(*val2).second<<endl;

    cout<<"\nvalue compis "<<endl;
    multimap<string,int>::key_compare kcomp=names.key_comp();
    string val=names.rbegin()->first;
    multimap<string,int>::iterator itr4=names.begin();
    do{
        cout<<itr4->first<<" "<<itr4->second<<endl;
    }while(kcomp((*itr4++).first,val));

}