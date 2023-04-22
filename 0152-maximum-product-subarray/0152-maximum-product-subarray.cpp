class Solution {
public:
     int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int max_so_far = arr[0];
        int min_so_far = arr[0];
        int result = arr[0];
        
        for (int i = 1; i < n; i++) {
            int curr = arr[i];
            int temp_max = max(curr, max(max_so_far * curr, min_so_far * curr));
            min_so_far = min(curr, min(max_so_far * curr, min_so_far * curr));
            max_so_far = temp_max;
            result = max(result, max_so_far);
        }
        return result;
    }
};