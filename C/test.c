class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size()==0) {
            return;
        }
        if (k>=nums.size()) {
            k%=nums.size();
        }
        //倒转前n-k个元素
        Reverse(nums,0,nums.size()-k-1);
        //倒转后k个元素
        Reverse(nums,nums.size()-k,nums.size()-1);
        //倒转整个数组
        Reverse(nums,0,nums.size()-1);
    }
    //定义一个倒转数组的函数
    void Reverse(vector<int>& nums,int left,int right) {
        cout<<"Reverse: "<<left<<" "<<right<<endl;
        while (left<right) {
            int tmp=nums[left];
            nums[left]=nums[right];
            nums[right]=tmp;

            for (int i=0;i<nums.size();++i) {
                cout<<nums[i]<<" ";
            }
            cout<<endl;

            ++left;
            --right;
        }
    }
};
        
        