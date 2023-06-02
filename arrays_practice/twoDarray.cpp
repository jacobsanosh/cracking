#include <iostream>
#include <climits>
using namespace std;
// SPARSE TRAVERSAL
/*
int main()
{
    int row, col;
    cout << "\nenter the row and col size\t";
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    int i = 0, j = 0, k = row - 1, l = col - 1;
    while (i <= k && j <= l)
    {
        for (int z = j; z <= l; z++)
            cout << arr[i][z];
        i++;
        for(int z=i;z<=k;z++)
            cout<<arr[z][k];
        l--;
        for(int z=l;z>=j;z--)
            cout<<arr[k][z];
        k--;
        for(int z=k;z>=i;z--)
            cout<<arr[z][j];
        j++;
    }
}
*/
//TRANSPOSE

/*
int main()
{
    int row,col;
    cout<<"\nenter the row and col size\t";
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
   
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i];
        }
        cout<<'\n';
    }
}
*/
/*
int main()
{
     int row1,row2,col1,col2;
    cout<<"\nenter the row and col size\t";
    cin>>row1>>col1;
    int arr1[row1][col1];
    for(int i=0;i<row1;i++)
        for(int j=0;j<col1;j++)
            cin>>arr1[i][j];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
            cout<<arr1[i][j];
        cout<<"\n";
    }
    cout<<"\nenter the row and col size\t";
    cin>>row2>>col2;
    int arr2[row2][col2];
    for(int i=0;i<row2;i++)
        for(int j=0;j<col2;j++)
            cin>>arr2[i][j];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
            cout<<arr2[i][j];
        cout<<"\n";
    }
    int res[row1][col2];
    for(int i=0;i<row1;i++)
        for(int j=0;j<col2;j++)
            res[i][j]=0;
    // cout<<"the va"<<arr2[0][0];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            for(int k=0;k<col1;k++)
                {
                    // cout<<"\t"<<arr1[i][k]<<arr2[j][k];
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
        }  
    }
    cout<<"\nresuilt is\n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
            cout<<res[i][j];
        cout<<"\n";
    }
}
*/
int main()
{
    int r,c;
    cout<<"\nenter the row and col size";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    cout<<"\narray in sorted order is\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c-1;j++)
            {
                for(int k=j+1;k<c;k++)
                if(arr[i][j]>arr[i][k])
                {
                    int temp=arr[i][j];
                    arr[i][j]=arr[i][k];
                    arr[i][k]=temp;
                }
            }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        
    int target;
    cout<<"\nenter the element that u want to search \t";
    cin>>target;
    int i=0,j=0;
    while(i<r&&j<c)
    {
        cout<<arr[i][j]<<endl;
        if(arr[i][j]==target)
        {
            cout<<"\nfound at pos"<<i+1<<" "<<j+1;
            break;
        }
        else if((arr[i][j]>target ||arr[i+1][j]>target) &&i<r)
        {
            cout<<"\nenter in j";
            // i++;
            j++;
        }
        else if(arr[i][j]<target)
        {
            cout<<"\nenter in i";
            i++;
        }
    }
}