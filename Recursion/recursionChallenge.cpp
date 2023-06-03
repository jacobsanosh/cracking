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
void subeq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    subeq(s.substr(1),ans);
    subeq(s.substr(1),ans+ch);
    subeq(s.substr(1),ans+to_string(code));
} 
bool issafe(int **arr,int x,int y,int n)
{
    if(x<n & y<n &&arr[x][y]==1)
        return true;
    return false;
} 
bool ratinmaze(int **arr,int x,int y,int n,int **solarr)
{
    if((x==(n-1))&& (y==(n-1))){
        solarr[x][y]=1;
        return true;
    }
    if(issafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solarr))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solarr))
            return true;
        solarr[x][y]=0;
        return false;

    }
    return false;
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
    /* 
   string s;
   getline(cin,s);
   replace_string(s);
    */
   /*string s;
   getline(cin,s);
   subeq(s,"");*/
   //array maze problem
   int n;
   cin>>n;
   int **arr=new int*[n];
   for(int i=0;i<n;i++){
    arr[i]=new int[n];
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   int **solarr=new int *[n];
   for(int i=0;i<n;i++)
   {
        solarr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            solarr[i][j]=0;
        }
   }
    cout<<"\nsolution array is"<<endl;
    if(ratinmaze(arr,0,0,n,solarr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cout<<solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}