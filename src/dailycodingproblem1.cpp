#include "dailycodingproblem1.h"
#include <set>

using namespace std;

bool problem1(int* nums, int size, int target) {
	set<int> exist;

	for (int i = 0; i < size; ++i) {
		if (exist.find(target - nums[i]) != exist.end()) {
			return true;
		}
		exist.insert(nums[i]);
	}	
	return false;
}
