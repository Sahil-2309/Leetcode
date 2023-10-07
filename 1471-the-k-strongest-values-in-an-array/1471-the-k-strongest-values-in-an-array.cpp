class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int m=((n-1)/2);
        vector<int> ans;
        int i = 0, j = n - 1;
        // int count = 0;
        while (i <= j && k--) {
            if (abs(arr[i] - arr[m]) > abs(arr[j] - arr[m])) {
                ans.push_back(arr[i++]);
            } else {
                ans.push_back(arr[j--]);
            }
        }
        return ans;
    }
};