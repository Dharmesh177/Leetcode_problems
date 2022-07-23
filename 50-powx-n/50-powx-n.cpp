class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};
// This is a classic problem: in order to computer the value of x raised to the nth power, you might start to consider first of all the case in which n is positive.

// Let's assume that n == 13, so we can say pow(x, 13) == pow(x, 1) * pow(x, 4) * pow(x, 8).

// Looks familiar? We basically decomposed 13 in its binary digits (1101).

// Okay, then: why would we care? Because that is how a computer efficiently gets powers: at each step we multiply x by itself, so we will get x(^1), x^2, x^4, x^8, x^16 and so on.

// Starting to see the bits of the puzzle coming together now, now? We can decompose n as a binary number and then keep multiplying for x raised to some power of 2 value as we go along and - boom, the magic is done!

// Okay now, but what about negative powers?

// Well, instead of multiplying, we divide. Period.

// No, really: it changes that little.

// Iterative approach, easier to follow:

// class Solution {
// public:
//     double myPow(double x, int n) {
//         double res = 1;
//         while (n) {
//             if (n % 2) res = n > 0 ? res * x : res / x;
//             x = x * x;
//             n /= 2;
//         }
//         return res;
//     }
// };