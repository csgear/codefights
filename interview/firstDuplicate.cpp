
// codefight.com  interview firstduplicate

int firstDuplicate(std::vector<int> nums) {
    int result = -1 ;
    
    for (int i = 0; i < nums.size(); ++i) {
        int idx = abs(nums[i]) - 1 ;
        
        if (nums[idx] < 0) {
            result = abs(nums[i]) ;
            break ;
        }
        else
        {
            nums[idx] = -nums[idx];
        }
    }

    return result ;
}
