class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = 0, p = 1;
        while(n!=0){
            int rem = n%10;
            s += rem;
            p *= rem;
            n /=10;
        }
        return p-s;
    }
};