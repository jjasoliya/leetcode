//
//  two_sum.cpp
//  Leetcode_solutions
//
//  Created by Jaymin Jasoliya on 8/28/18.
//  Copyright © 2018 Jaymin Jasoliya. All rights reserved.
//

//  Problem statement :
//  *****************************************************************************************************************
//  Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//  You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//  Example:
//  Given nums = [2, 7, 11, 15], target = 9,
//  Because nums[0] + nums[1] = 2 + 7 = 9,
//  return [0, 1].
//  *****************************************************************************************************************

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> b;
        b = qsort(nums, nums.size(), sizeof(int));
        cout << b << endl;
        }
};







int main(int argc, const char * argv[]) {
    vector<int> a;
    int num_elem;
    int item;
    int target;
    cout << "Enter number of elements in array" << endl;
    cin >> num_elem;
    for(int i = 0; i<num_elem; i++)
    {
        cin >> item;
        a.push_back(item);
    }
    cout << "Enter the target value" << endl;
    cin >> target;
    
    Solution s1;
    s1.twoSum(a, target);
    
    
    return 0;
}
