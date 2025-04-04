#include <iostream>
using namespace std;

extern void testIsPrime(); //test for the prime number
extern void testIsPowerOfTwo(); //test for the power of two
extern void testReduceFraction(); //test for reduce fraction

int main() {
    testIsPrime();
    testIsPowerOfTwo();
    testReduceFraction();
    return 0;
}
//I put all the cpp test in to one main cpp to better visibility.