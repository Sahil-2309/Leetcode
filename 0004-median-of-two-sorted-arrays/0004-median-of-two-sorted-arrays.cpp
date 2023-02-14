class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        vector<int> a;
        int j=0,i=0,k=0;
        while(k<nums1.size()+nums2.size()&&j<nums1.size()&&i<nums2.size())
        {
            if(nums1[j]<nums2[i])
            {
                a.push_back(nums1[j++]);
            }
            else
            {
                a.push_back(nums2[i++]);     
            }
        }
        if(j<nums1.size())
        {
            while(j<nums1.size())
                a.push_back(nums1[j++]);
        }
        if(i<nums2.size())
        {
            while(i<nums2.size())
                a.push_back(nums2[i++]);
        }
        int s = a.size();
        if(s%2!=0)
            median = a[s/2];
        else
        {
            median = double(a[s/2]+a[(s/2)-1])/2;
        }
        return median;
    }
};