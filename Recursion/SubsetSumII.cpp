// #include <bits/stdc++.h>
// using namespace std;

// void SubSetSum(int *arr, int size, vector<int> ds, vector<vector<int>> ans, int index)
// {
//     ans.push_back(ds);
//     for (int i = index; i < size; i++)
//     {
//         if (i != index && arr[i] == arr[i - 1])
//             continue;
//         ds.push_back(arr[i]);
//         SubSetSum(arr, size, ds, ans, index + 1);
//         ds.pop_back();
//     }

//     // if (size == index)
//     // {
//     //     ans.push_back(ds);
//     //     return;
//     // }
//     // ds.push_back(arr[index]);
//     // SubSetSum(arr, size, ds, ans, index + 1); // pick
//     // ds.pop_back();
//     // SubSetSum(arr, size, ds, ans, index + 1); // not pick
// }

// vector<vector<int>> CallSubset(int *arr, int size)
// {
//     vector<int> ds;
//     vector<vector<int>> ans;
//     int index = 0;
//     sort(arr[0], arr[size - 1]);
//     SubSetSum(arr, size, ds, ans, index);
//     return ans;
// }

// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     vector<vector<int>> x = CallSubset(arr, 4);
//     for (auto it : x)
//     {
//         for (auto i : it)
//         {
//             cout << i << " ";
//         }
//         cout << "" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;
void printAns(vector<vector<int>> &ans)
{
    cout << "The unique subsets are " << endl;
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "]";
    }
    cout << " ]";
}
class Solution // gives unique vector of vectors
{
public:
    void fun(vector<int> &nums, int index, vector<int> ds, set<vector<int>> &res)
    {
        if (index == nums.size())
        {
            sort(ds.begin(), ds.end());
            res.insert(ds);
            return;
        }
        ds.push_back(nums[index]);
        fun(nums, index + 1, ds, res);
        ds.pop_back();
        fun(nums, index + 1, ds, res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        set<vector<int>> res;
        vector<int> ds;
        fun(nums, 0, ds, res);
        for (auto it = res.begin(); it != res.end(); it++)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = obj.subsetsWithDup(nums); // doubt
    printAns(ans);
    return 0;
}