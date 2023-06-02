#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
bool sorted(int arr[],int n)
{
    // cout<<pos<<endl;
    if (n==1)
        return true;
    return(arr[0]<arr[1]&&sorted(arr+1,n-1));
}
void reverse_str(string s)
{
    if(s.length()==0)
        return;
    reverse_str(s.substr(1));
    cout<<s[0];

}
void replace_string(string s)
{
    if(s.length()==0)
        return;
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replace_string(s.substr(2));
    }    
    else{
        cout<<s[0];
        replace_string(s.substr(1));
    }

}   
int main()
{
    //check array elemets ares sorted using recursion
   /*int n;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\n"<<sorted(arr,n);
    */ 

   //REVERS OF AN STRING        
   /*string s;
   getline(cin,s);
   reverse_str(s);*/
   //replace pi with values ppixpppi ->p2.14xp3.14
   string s;
   getline(cin,s);
   replace_string(s);
}