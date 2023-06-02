#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    string str(5,'s');//we will get 5 s
    cout<<str<<endl;
    string name;
    getline(cin,name);
    cout<<"my name is "<<name;
    cout<<"\nappending "<<str.append(name);
    str.clear();
    cout<<"\nafter clear"<<str;
    if(name.compare(str))
    {
        cout<<"\nnot equal";
    }
    name.erase(0,3);//start and how man char
    cout<<"after erase "<<name;
    name.insert(0,"san");
    cout<<"\nname "<<name;
    cout<<"\n"<<name.find("an")<<endl;
    cout<<"\nlength is"<<name.length();
    cout<<"\nsubstring is"<<name.substr(1,3);
    string dig="1234";
    int num=stoi(dig);
    cout<<"\nnum is "<<num;
    cout<<"\nto string is "<<to_string(num)+"2"<<endl;

    string unsorted="asdfghjk";
    sort(unsorted.begin(),unsorted.end());
    cout<<"\nunsorted string is "<<unsorted;
}