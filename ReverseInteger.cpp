/**
 * @file ReverseInteger.cpp
 * @author Samoei Oloo
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * 
 */

class Solution {
public:
    int reverse(int x) {
        int revNum=0;
        constexpr int upperLimit = INT_MAX/10;
        constexpr int lowerLimit = INT_MIN/10;
        while (x){
            if(revNum > upperLimit || revNum < lowerLimit) {return 0;}
            revNum = revNum*10 + x%10;
            x/=10;
        }

        return revNum;
    }
};
/** NOTES:
INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. 
INT_MIN specifies that an integer variable cannot store any value below this limit
*/