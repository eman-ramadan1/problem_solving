class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; //neg num not a palindrome 

        string s = to_string(x); //to convert int num to string  to compare each digit
        int n = s.size();// num of digit of num

        for (int i = 0; i < n / 2; i++) { //compare eche digit from begg to ech digit of end and check if it equal
            if (s[i] != s[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};
