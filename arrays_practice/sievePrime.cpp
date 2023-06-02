#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void findallPrime(int arr[],int n,int num)
{   
    int spf[n]={0};//variable for smallest prime factor
    //20->10(2)->5(2)->5
    for(int i=1;i<n;i++)
        spf[i]=i;
   for(int i=2;i<n;i++)
   {
    if(arr[i]==0)
    {
        for(int j=i*i;j<n;j+=i)
        {
            arr[j]=1;
            spf[j]=i;
        }
    }
   }
   for(int i=1;i<n;i++)
    {
        if(arr[i]==0)
            cout<<i<<" ";
    }
    cout<<"\nsmallerst prime fact"<<endl;
    for(auto i=1;i<n;i++)
        cout<<spf[i]<<" ";
    cout<<"\nsmallest prime factor is "<<endl;
    while(num!=1)
    {
        cout<<spf[num]<<" ";
        num/=spf[num];
    }
}
void findGcd(int num1,int num2){
    cout<<"\ngcd";
    int res=0;
    while(num2!=0)
    {
        // cout<<"res"<<res;
        res=num1%num2;
        num1=num2;
        num2=res;

    }
    cout<<"\n"<<num1;

}
int main()
{
    /*int n,num;
    cin>>n>>num;
    int *arr=new int[n]();
    findallPrime(arr,n,num);*/
    int num1,num2;
    cin>>num1>>num2;
    findGcd(num1,num2);
}