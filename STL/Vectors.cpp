#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    for(auto i=0;i<n;i++)
        arr.push_back(i);
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.cbegin();i<arr.cend();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.rbegin();i<arr.rend();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=arr.crbegin();i<arr.crend();i++)
        cout<<*i<<" ";
    cout<<endl;
    cout<<"size is "<<arr.size()<<endl;;
    cout<<"max size is "<<arr.max_size()<<endl;
    cout<<"capacity is "<<arr.capacity()<<endl;
    arr.resize(3);
    cout<<"\nafter removing the elements"<<endl;
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    cout<<"\ncheck empty or not "<<arr.empty()<<endl;
    arr.shrink_to_fit();
    cout<<"after shrinking "<<arr.size()<<endl;
    cout<<"at pointer "<<arr.at(1)<<endl;
    cout<<"at front "<<arr.front()<<endl;
    cout<<"at back "<<arr.back()<<endl;
    cout<<"data  "<<*arr.data()<<endl;
    // arr.assign(5,10));
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    arr.push_back(4);
    arr.push_back(5);
    cout<<endl;
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    arr.pop_back();
    arr.insert(arr.begin(),10);
    cout<<"\ninserted at pos 0 "<<arr[0];
    arr.erase(arr.begin());
    cout<<endl;
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    arr.clear();
    cout<<endl;
    for(auto i=arr.begin();i<arr.end();i++)
        cout<<*i<<" ";
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v1.swap(v2);
    cout<<endl;
    for(auto i=v1.begin();i<v1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=v2.begin();i<v2.end();i++)
        cout<<*i<<" ";
    v1.emplace(v1.begin(),5);
    cout<<"\nafter replacing\t"<<v1[0];
    v1.emplace_back(10);
    cout<<endl;
     for(auto i=v1.begin();i<v1.end();i++)
        cout<<*i<<" ";
    cout<<"\nlast elements\t"<<*(v1.end()-1);
    cout<<endl<<endl<<"blah"<<endl;
    for(auto i:v1)
        cout<<i<<" ";
    v1.insert(v1.begin()+3,9);
    cout<<"\nelemets a 3 th position is"<<v1[3]<<endl;
}