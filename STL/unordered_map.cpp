#include<iostream>
#include<algorithm>
#include<climits>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> uname;
    uname["sanosh"]=21;
    uname["deepu"]=22;
    uname["nandu"]=20;
    for(auto i:uname)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"\nvalue of sanosh is "<<uname.at("sanosh");
    cout<<"\nusing begin and end "<<endl;
    for(auto i=uname.begin();i!=uname.end();i++)
        cout<<(*i).first<<" "<<(*i).second<<endl;
    int bucket_num=uname.bucket(uname.begin()->first);
    cout<<"\nthe bucket is "<<bucket_num<<endl;
    cout<<"\nthe bucket counts is "<<uname.bucket_count()<<endl;
    cout<<"\nsanosh count is "<<uname.count("sanosh")<<endl;
    if(uname.find("sanosh")!=uname.end())
        cout<<"founded sanosh";
    else    
        cout<<"\nnot founded";
    uname.erase("sanosh");
    cout<<"\nafter erasing"<<endl;
      if(uname.find("sanosh")!=uname.end())
        cout<<"founded sanosh";
    else    
        cout<<"\nnot founded";
    uname.erase(uname.begin(),uname.end());
    cout<<"\nuname size is "<<uname.size();
}