/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true

Example 2:
Input: "()[]{}"
Output: true

Example 3:
Input: "(]"
Output: false

Example 4:
Input: "([)]"
Output: false

Example 5:
Input: "{[]}"
Output: true
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;


class Solution {
    stack<char> stk;
public:
    bool isValid(string s) {

        bool v = true;
        char cc;
        for(int i = 0; i < s.length() ; i++)
        {
            cc = s[i];
            if(cc == '('|| cc == '[' || cc == '{')
            {
                stk.push(cc);
            }
            else if(cc == ')' ||cc == ']' || cc == '}')
            {
                if(!stk.empty())
                {
                    char temp = stk.top();
                    if(temp == '(' &&  cc == ')')
                    {
                        stk.pop();
                    }
                    else if(temp =='[' && cc==']')
                    {
                        stk.pop();
                    }
                    else if(temp == '{' && cc == '}')
                    {
                        stk.pop();
                    }
                    else
                    {
                       v = false;
                       return v;
                    }

                }
                else
                {
                    stk.push(cc);
                    v = false;
                }  
            }
            else
            {
                cout << "Values entered not valid" << endl;
            }
            
        }

        if(stk.empty())
        {
            v = true;
        }
        else
        {
            v = false;
        }
        return v;
    }
};


int main()
{
    string s;
    bool v;
    Solution check;
    cout << "Enter your test string : " << endl;
    cin >> s;
    v = check.isValid(s);
    cout << "\nAnswer is :" << v << endl;
}