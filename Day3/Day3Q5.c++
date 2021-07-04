#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    vector<int> index;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        index.push_back(a);
    }
    vector<int> target;
    int size = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (index[i] == size)
        {
            target.push_back(nums[i]);
        }
        else
        {
            auto it = target.begin();
            target.insert(it + index[i], nums[i]);
        }
        size++;
    }
    for(int i=0;i<target.size();i++){
        cout<<target[i]<<" ";
    }

}
