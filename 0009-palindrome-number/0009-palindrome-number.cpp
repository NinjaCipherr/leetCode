class Solution {
public:
    bool isPalindrome(int x) {
        // Trường hợp x < 0 hoặc x chia hết cho 10 nhưng không phải là 0
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        // Đảo ngược một nửa số và so sánh
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Kiểm tra nếu x bằng reversedHalf (đối với số chẵn chữ số)
        // hoặc x bằng reversedHalf / 10 (đối với số lẻ chữ số)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
