#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
   /* string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<'b'-'B'<<endl;
    for(auto i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
        
    }
    cout<<s<<endl;
    for(auto i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]+=32;
    }
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin()+3,::tolower);
    cout<<s<<endl;
    */
   //find largest number in an string
  /*string s;
   getline(cin,s);
   sort(s.begin(),s.end(),greater<int>());
   cout<<s<<endl;
   cout<<'b'-0<<endl;
   */ 
  string s="hjsdf sdfsdf srdfu";
  int maxcount=0;
  char c;
  int arr[26];
  for(auto i=0;i<26;i++)
    arr[i]=0;
  for(auto i=0;i<26;i++)
    arr[s[i]-'a']++;
  for(auto i=0;i<26;i++)
    {
        if(maxcount<arr[i])
        {
            maxcount=arr[i];
            c=i+'a';
        }
    }
    cout<<"max count is "<<maxcount<<" max char "<<c;


}
