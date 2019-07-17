/*  Reverse Integer

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

 */

#include <iostream>
#include "math.h"
#include <vector>
using namespace  std;

class reverse_integer
{
private:
    int k;
    bool is_negative;
public:
    reverse_integer();
    ~reverse_integer();
    int reverse(int k);
};

reverse_integer::reverse_integer()
{
    k = 0;
    is_negative = false;
}

reverse_integer::~reverse_integer()
{
}

int reverse_integer::reverse(int k)
{
int p, i = 0;
	int reminder;
	vector<int> arr;

	if (k < 0)
	{
		p = (-1) * k;
		is_negative = true;
	}
	else
	{
		p = k;
	}


	while (p > 0)
	{
		reminder = p % 10;
		p = p / 10;
		arr.push_back(reminder);
		i = i + 1;
	}

	int result = 0;
	int itr = arr.size();
    for(int i=0; i < itr ; i++)
	{
		result = result + (arr.back() * pow(10, i));
		arr.pop_back();
		if (result > 2147483647 || result < -2147483647)
		{
			return 0;
		}
	}

	if (is_negative) { return (-1)*result; }
	else { return result; }
}

int main()
{
    int number;
    std::cout << " Enter the number you want to revers : " << std::endl;
    cin >> number ;

    reverse_integer r;
    cout << r.reverse(number) << endl;

    return 0;
}

