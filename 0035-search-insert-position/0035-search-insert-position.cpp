class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;  // Tính chỉ số giữa

            if (nums[mid] == target) {
                return mid;  // Tìm thấy target
            } else if (nums[mid] < target) {
                left = mid + 1;  // Tìm kiếm nửa bên phải
            } else {
                right = mid - 1; // Tìm kiếm nửa bên trái
            }
        }

        // Nếu không tìm thấy, left sẽ là vị trí chèn
        return left;
    }
};
