#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//check whether an string is ascending order or not
/*
bool checksort(int arr[],int n)
{
    if(n==1)
        return true;
    bool restarray=checksort(arr+1,n-1);
    return (arr[0]<<arr[1]&&restarray);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++)
        cin>>arr[i];
    if(checksort(arr,n))
        cout<<"\nthey are in sorted order "<<endl;
    else    
        cout<<"\nthey ae not in sorted order "<<endl;
}
*/
//increment and decrement using recursion
/*
int dec(int n)
{
    if(n==0)
        return 0;
    cout<<n<<" ";
    return dec(n-1);
}
int inc(int i,int n)
{
    if(i==n)
       return n;
    cout<<i<<" ";
    return inc(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    dec(n);
    inc(0,n);
}
*/
//finding first and last occurrance of an array element
/*
int find_first_coourance(int arr[],int n,int key,int i)
{
    if(n==i)
        return arr[0];
    if(arr[0]==key)
        return i;
    return find_first_coourance(arr+1,n-1,key,i+1);
}
int find_last_occurance(int arr[],int n,int key,int i)
{
    if(i==n)
        return -1;
    int item=find_last_occurance(arr,n,key,i+1);
    // cout<<item<<"item value  ";
    if(item!=-1){
        return item;
    }
    if(arr[i]==key)
        return i;
    return -1;
        
}
int main()
{
    int n,item;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>item;
    cout<<"\nthe first ocurrance is "<<find_first_coourance(arr,n,item,0);
    cout<<"\nthe last ocurrance is "<<find_last_occurance(arr,n,item,0);
}
*/
//replacing the string that with pi
/*
void replacepi(string s)
{
    if(s.length()==0)
        return;  
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    string s;
    getline(cin,s);
    replacepi(s);
}
*/
//moving all x to end
/*
string move_x(string s)
{
    if(s.length()==0)
        return "";
    char ch=s[0];
    string res=move_x(s.substr(1));
    if(ch=='x')
        return res+ch;
    return ch+res;
    

    
}
int main()
{
    string s;
    getline(cin,s);
    cout<<move_x(s);
}
*/
void find_substr(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string res=s.substr(1);
    find_substr(res,ans);
    find_substr(res,ans+ch);
}
int main()
{
    string s;
    getline(cin,s);
   find_substr(s,"");
}