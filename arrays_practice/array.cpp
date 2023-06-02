#include<iostream>
using namespace std;
int main()
{
   /* int arr[]={7,2,1,6,9,3,4,5};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    for(int i=1;i<8;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && current<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    int a=6;
    int *b=&a;
    cout<<"address"<<b;
    cout<<"value of b is "<<*b;
    int **c= &b;
    cout<<"\nthe value is"<<**c<<endl;
    int *po=arr;
    cout<<"\n value is"<<*(po+1);*/
    typedef struct 
    {
        int rollno;
    }demo;

    demo d;
    d.rollno=71;
    cout<<d.rollno;
    
    
}