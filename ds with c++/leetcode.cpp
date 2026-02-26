// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

/* class Solution {
public:
    int addDigits(int num) {
        while(num>9){
        int ans=0, rem;
        while(num!=0){
            rem= num%10;
            num/=10;
            ans+=rem;
        }
        num= ans;

        
    }
    return num;
    }
};
    */
   
    // leap year //

 /*class Solution {
  public:
    bool checkYear(int n) {
        // code here
    if(n%400==0)
    return 1;
    else if(n%4==0 && n%100!=0)
    return 1;
    else
    return 0;
    }
};  */
// Reverse Integer //

/*class Solution {
public:
    int reverse(int x) {
        int ans=0 ,rem;
        while (x!=0){
            rem= x%10;
            x/=10;
        //    if(ans>INT_MAX/10 || ans<INT_MIN/10)
           // return 0;
            ans= ans*10+rem;
        }
        return ans;
        
    }
};*/

// Power of Two //
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;

        while(n!=1){
            if(n%2==1)
            return 0;

            n=n/2;
        }
        return 1;}
    };*/
    // Palindrome Number //
    /*

    class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        int num=x, rem, ans=0;
        while(num){
            rem = num%10;
            num/=10;
            if(ans>INT_MAX/10)
            return 0;
            ans= ans*10+rem;
        };
        if (ans==x)
        return 1;
        else 
        return 0; 
    }
};*/
// Complement of Base 10 Integer //

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans=0, mul=1,rem;
        while(n){
            rem=n%2;
            rem=rem^1;
            n/=2;
            ans= ans+rem*mul;
            mul*=2;
        }
        return ans;
        
    }
};

    
