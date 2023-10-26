 #include<iostream>
 #include<algorithm>
 #include<climits>
 using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(auto i=0;i<nums.size();i++)
        {   
           if(nums[i]==nums[i+1])
                continue;
            else{
                int l=i+1,r=nums.size()-1;
                 while(l<r)
                 {
                     if(nums[l]+nums[r]==-i)
                        res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                     else if(nums[l]+nums[r]>-i)
                        r--;
                    else
                        l++;
                 }
            }

        }
        return res;
    }
 int main()
 {
    int n;
    cin>>n;
    vector<int> res;
    for(auto i=0;i<n;i++)
    {
        int data;
        cin>>data;
        res.push_back(data);
    }
 }