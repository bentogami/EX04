#include <iostream>
#include "2DRectangle.h"
#include <assert.h>
#include <string>
using namespace std;

void doTest(string testDescription, bool testCase, bool expected);

int main()
{
	Rectangle2D one, two(0,0,4,4);
	doTest("Two contains one: ", (two.contains(one)), true);
	doTest("Two contains (0,1.5): ", (two.contains(0, 1.5)), true);
	doTest("One overlaps two: ", (one.overlaps(two)), true);
	doTest("Two overlaps one: ", (two.overlaps(one)), true);
}

//A networking friend of mine told me about this test idea:
void doTest(string testDescription, bool testCase, bool expected)
{
	cout << testDescription;
	cout << boolalpha << (testCase) << endl;
	assert(testCase == expected);
}

