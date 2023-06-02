#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int power(int n,int p)
{
    // cout<<p<<endl;
    if(p==1)
        return n;
    return n*power(n,p-1);
}
int factorial(int n)
{
    if(n==1)
        return n;
    return n*factorial(n-1);
}
int fibonaci(int n)
{
    if(n==0 ||n==1)
        return n;
    return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    //power of an number
    /*int n,p;
    cin>>n>>p;
    cout<<"\n"<<power(n,p)<<endl;
    */
   //factorial
   /*int n;
   cin>>n;
   cout<<"\n"<<factorial(n)<<endl;*/
   //fibonaci
   int n;
   cin>>n; 
    cout<<"\n"<<fibonaci(n)<<endl;

}