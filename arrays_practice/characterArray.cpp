#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main()
{
    // char a[100]="apple";
    // int i=0;
    // while (a[i]!='\0')
    // {
    //     cout<<a[i];
    //     i++;
    // }
   
   /* int n;
    cout<<"\nenter the size of the array\t";
    cin>>n;
    char arr[n];
    cin>>arr;
    cout<<arr;
    int i=0,j=n-1;
    while(i<(n/2)&&j>=(n/2))
    {
        if(arr[i]!=arr[j])
        {
            cout<<"\nnot an pali"<<arr[i]<<arr[j];
            return 0;
        }
        i++;
        j--;
    }
   cout<<"\nyes pali";
   */
  //larget sentance in an string
  int len,maxlen=0,i=0,t=0,st=0;
  cout<<"\nenter yor array size";
  cin>>len;
  cin.ignore();
  char arr[len];
  cin.getline(arr,len+1);
  cin.ignore();
//   cout<<arr;
  while(i<len)
  {
    if(arr[i]!='\0'&&arr[i]!=' ')
    {
        t++;
        // cout<<arr[i]<<endl;
        maxlen=max(maxlen,t);
        cout<<t<<endl;
        st=i-maxlen;
    }
    else
    {
        cout<<"enter in elze";
        t=0;
    }
    i++;
  }
  cout<<"max len"<<maxlen;
  int k=st+1;
  while(k<(maxlen+st))
  {
    cout<<arr[k];
    k++;
  }
  cout<<"start is"<<arr[st+1];
}