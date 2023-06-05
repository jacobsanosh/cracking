#include<iostream>
#include<algorithm>
#include<climits>
#include<map>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>names;
    names["sanosh"]=71;
    names["nandu"]=48;
    names["alen"]=12;
    // map<string,int>::iterator itr;
    auto itr=names.begin();
    while(itr!=names.end()){
        cout<<itr->first<<" "<<itr->second<<endl;
        itr++;
    }
    cout<<"\nsize of names is "<<names.size();
    cout<<"\nmax size of names is "<<names.max_size();
    cout<<"\ncheck names is empty "<<names.empty();
    names.insert(pair<string,int>("abhishek",1));
    names.insert(pair<string,int>("sona",61));
    cout<<"\nafter pair insert "<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    // itr=names.end();
    // itr--;itr--;
    // names.erase(names.begin(),names.find("sona"));
    names.erase("sona");
     cout<<"\nafter erase "<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
        cout<<"\nafter inserting"<<endl;
    names.insert({"athul",23});
    names.insert({"thala",6});
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    if(names.count("alen"))
        cout<<"\nalen is found"<<endl;
    else   
        cout<<"\nalen not found"<<endl;

    //***********
    pair<map<string,int>::iterator,map<string,int>::iterator> itr1;
    itr1= names.equal_range("athul");
    cout<<"\nusing map equal_range lower "<<itr1.first->first<<" "<<itr1.first->second;
    cout<<"\nusing map equal_range upper "<<itr1.second->first<<" "<<itr1.second->second;
    cout<<"\nprintinting using map begin and end"<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    cout<<"\nprintinting using map cbegin and cend"<<endl;
    for(auto i=names.cbegin();i!=names.cend();i++)
        cout<<i->first<<" "<<i->second<<endl;
     cout<<"\nprintinting using map rbegin and rend"<<endl;
    for(auto i=names.rbegin();i!=names.rend();i++)
        cout<<i->first<<" "<<i->second<<endl;
    cout<<"\nprintinting using map crbegin and crend"<<endl;
    for(auto i=names.crbegin();i!=names.crend();i++)
        cout<<i->first<<" "<<i->second<<endl;
    names.emplace("saniya",45);
    names.emplace("sanju",34);

    cout<<"\nafter emplacing"<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
    
    auto itr2=names.lower_bound("saniya");
    cout<<"\nlower bound of saniya is "<<(*itr2).first<<" "<<(*itr2).second;
    itr2=names.upper_bound("saniya");
    cout<<"\nupper bound of saniya is "<<(*itr2).first<<" "<<(*itr2).second;

    names.emplace_hint(names.begin(),"deepu",41);
    names.emplace_hint(names.begin(),"hari",34);
     cout<<"\nafter emplacing hint"<<endl;
    for(auto i=names.begin();i!=names.end();i++)
        cout<<(*i).first<<" "<<(*i).second<<endl; 
    

    cout<<"\nusing value comp"<<endl;
    auto last=*names.rbegin();
    auto i=names.begin();
    do{
        cout<<i->first<<" "<<i->second<<endl;
    }while(names.value_comp()(*i++,last));

    cout<<"\nusing key comp"<<endl;
    map<string,int>::key_compare mycomp=names.key_comp();
    string lastname=names.rbegin()->first;
    i=names.begin();
    do{
        cout<<i->first<<" "<<i->second<<endl;
    }while(mycomp((*i++).first,lastname));

    cout<<"\n abhishek values is "<<names.at("abhishek");
    map<int, char> map1,map2;
 
    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';
 
  map2[5] = 'w';
    map2[6] = 'x';
    map2[7] = 'y';

    swap(map1,map2);
    cout<<"\nafter swaping map 1"<<endl;
     for (auto it = map1.begin();it != map1.end(); it++)
        cout << "\t" << it->first << "\t" << it->second << '\n';
    cout<<"\nafter swaping map 2"<<endl;
     for (auto it = map2.begin();it != map2.end(); it++)
        cout << "\t" << it->first << "\t" << it->second << '\n';
}