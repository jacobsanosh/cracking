#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int getbit(int n,int pos)
{
    return(n&(1<<pos)!=0);
}
int setbit(int n,int pos)
{
    return(n|(1<<pos));
}
int clearbit(int n,int pos)
{
    return(n&~(1<<pos));
}
int updatebit(int n,int b,int pos)
{
    if(b==0)
        return(n&~(1<<pos));
    else
        return(n|(1<<pos));
}
bool checkBinary(int n)
{
    cout<<(n&(n-1))<<endl;
    if((n&(n-1))==0)
        return true;
    return false;

}
int countBinary(int n)
{
    int count=1;
    while(n&(n-1)!=0)
    {
        count++;
        n-=1;
    }
    return count;
}
void subset(int arr[],int n)
{

    for(auto i=0;i<(1<<n);i++)//for 7 counts
    {
        for(auto j=0;j<n;j++)
        {
            // cout<<(i&(1<<j));
            if(i&(1<<j))
            {
             cout<<arr[j];
            }
        }
        cout<<endl;
    }
}
int findUnique(int arr[],int n)
{
    int xorsum=0;
    for(auto i=0;i<n;i++)
    {
        // cout<<"hi";
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int gettingbits(int n,int pos)
{
    return(n&(1<<pos));
}
void findTwounique(int arr[],int n)
{
    int xorsum=0;
    for(auto i=0;i<n;i++)
        xorsum^=arr[i];
    int temp=xorsum,pos=0;
    while(temp&1!=1)
    {
        pos++;
        cout<<temp;
        temp=temp>>1;
    }
    cout<<"\n pos is "<<pos<<endl;
    int tempxor=0;
    for(auto i=0;i<n;i++)
    {
        if(gettingbits(arr[i],pos))
            tempxor=(arr[i]^tempxor);
    }
    cout<<tempxor<<endl;
    cout<<(tempxor^xorsum)<<endl;
}
int main()
{
    /*cout<<(1<<1)<<endl;
    cout<<getbit(5,2)<<endl;
    cout<<setbit(6,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;*/
    /*int n;
    cout<<"\nenter the number"<<endl;
    cin>>n;
    if(checkBinary(n))
        cout<<"\npower of 2"<<endl;
    else
        cout<<"\nnot power of 2";*/
   /*
    int n;
    cout<<"\nenter the number"<<endl;
    cin>>n;
    cout<<"\ncounts "<<countBinary(n);
    */
   /*int n;
   cin>>n;
   int *arr=new int(n);
   for(auto i=0;i<n;i++)
        cin>>arr[i];
    subset(arr,n);
    cout<<"\n"<<(3&1)<<endl;
    cout<<"\n"<<(3&2)<<endl;
    cout<<"\n"<<(3&4)<<endl;
    */
   //find unique number from array
   /*
   int n;
   cin>>n;
   int *arr=new int(n);
   for(auto i=0;i<n;i++)
    cin>>arr[i];
   cout<<"find unique "<<findUnique(arr,n);
   */
  //find two unique number from the array
    int n;
    cin>>n;
    int *as=new int(n);
    for(auto i=0;i<n;i++)
        cin>>as[i];
   cout<<"find unique";
   findTwounique(as,n);
}