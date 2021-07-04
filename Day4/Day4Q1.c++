#include <bits/stdc++.h>
#include<vector>
using namespace std;
 int solution(vector<int> &nums, int cur,int total)
    {
        if(cur==nums.size())
            return total;
        return solution(nums , cur+1 , total^nums[cur]) + solution(nums, cur+1, total) ;
    }
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {   
        cin>>a;
        v.push_back(a);
    }
    int cur=0;
    int total=0;
    int sum=solution(v,cur,total);
    cout<<sum;
   

}