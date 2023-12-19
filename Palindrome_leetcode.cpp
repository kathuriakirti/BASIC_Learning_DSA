#define kirti long long
class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        kirti rem,rev{0};
        while(n>0){
            rem= n%10;
            n/=10;
            rev= rev*10+rem;
        }
        return rev==x;
    }
};
