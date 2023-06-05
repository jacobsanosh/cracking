#include<iostream>
#include<algorithm>
#include<climits>
#include<stack>
using namespace std;
void show_stack(stack<int> stk)
{
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}
int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout<<"\nthe elements are "<<endl;
    show_stack(stk);
    cout<<"\nis stack is empty "<<stk.empty();
    cout<<"\nstack size is "<<stk.size();
     stack<int> stk1;
    stk1.push(10);
    stk1.push(20);
    stk1.push(30);
    stk1.push(40);
    stk.swap(stk1);
    cout<<"\nafter swap"<<endl;
    show_stack(stk);

    stk.emplace(10);
    cout<<"\nafter emplacing"<<endl;
    show_stack(stk);
}