#include<iostream>
#include<algorithm>
#include<climits>
#include<array>
#include<tuple>//for get method
using namespace std;
int main()
{
    array<int,6> arr{1,2,3,4,5,6};
    for(auto i:arr)
        cout<<i<<" ";
    //for accessing we can use at,get,[] 
    cout<<"\nusing at operator "<<arr.at(0);
    cout<<"\nusing at operator last element "<<get<arr.size()-1>(arr);
    cout<<"\nusing [] operator "<<arr[3];
    cout<<"\nusing front operator "<<arr.front();
    cout<<"\nusing end operator "<<arr.back();
    cout<<"\nreturn the size of the array "<<arr.size();
    cout<<"\nit will return max size of the array "<<arr.max_size();
    array<int,5> arr1{1,2,3,4,5};
    array<int,5> arr2{6,7,8,9,10};
    arr1.swap(arr2);
    cout<<"\nafter swapping arr1 is "<<endl;
    for(auto i:arr1)
        cout<<i<<" ";
    cout<<"\nafter swapping arr2 is "<<endl;
    for(auto i:arr2)
        cout<<i<<" ";
    cout<<"\nis array is empty "<<arr1.empty();
    arr1.fill(0);
    cout<<"\nafter filling 0 in arr1 is "<<endl;
    for(auto i:arr1)
        cout<<i<<" ";
}