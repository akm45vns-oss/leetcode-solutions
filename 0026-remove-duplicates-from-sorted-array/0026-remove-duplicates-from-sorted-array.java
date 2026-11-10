class Solution {
    public int removeDuplicates(int[] nums) {
        int d = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[d - 1]) {
                nums[d] = nums[i];
                d++;
            }
        }

        return d;
    }
}