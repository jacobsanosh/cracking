#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
void showque(queue<int> que)
{
    while(!que.empty()){
        cout<<que.front()<<" ";
        que.pop();
    }
}
int main()
{
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    cout<<"\nelements are"<<endl;
    showque(que);

    cout<<"\nque size is "<<que.size();
    cout<<"\nque front is "<<que.front();  
    cout<<"\nque back is "<<que.back();  
    cout<<"\nque empty "<<que.empty();  
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    queue<int> q2;
    q2.push(10);
    q2.push(20);
    q2.push(30);

    q1.swap(q2);
    cout<<"\nafter swaping q1 "<<endl;
    showque(q1);
    cout<<"\nafter swaping q2 "<<endl;
    showque(q2);
    
    cout<<"\nafter emplacing"<<endl;
    q2.emplace(4);
    showque(q2);

}