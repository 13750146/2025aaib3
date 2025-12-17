///week15-2.cpp
///50. Pow(x, n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(x==1) return 1;
        if(n<0) return myPow(1/x,-n);//負的 函數呼叫韓式
        if(n==0) return 1;//所有數的0次方 都是1
        // 思考
        double half = myPow(x,n/2);//一半
        if(n%2==0) return half * half;
        else return half * half * x;
    }
};
