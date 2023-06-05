#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
void showqueue(priority_queue<int> que)
{
    while(!que.empty())
    {
        cout<<que.top()<<" ";
        que.pop();
    }
}
void showqueue_second(priority_queue<int,vector<int>,greater<int>> que)
{
    while(!que.empty())
    {
        cout<<que.top()<<" ";
        que.pop();
    }
}
int main()
{
    priority_queue<int> pque;
    pque.push(1);
    pque.push(2);
    pque.push(3);
    pque.push(4);
    showqueue(pque);
    int arr[]={1,2,3,4,5};
    priority_queue<int,vector<int>,greater<int>> que1(arr,arr+5);
    cout<<"\nafter show queue "<<endl;
    showqueue_second(que1);
    
    cout<<"\nqueu is empty"<<que1.empty();
    cout<<"\nqueu size is"<<que1.size();
    cout<<"\nqueu top is "<<que1.top();
    que1.push(10);
    cout<<"\nfirst elements is "<<que1.top();

    priority_queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    priority_queue<int> q2;
    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.push(40);
    q1.swap(q2);
    showqueue(q1);

    q1.emplace(40);
    cout<<"\nafter emplace"<<endl;
    showqueue(q1);
}