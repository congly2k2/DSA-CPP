// ReSharper disable all
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr)
    {
    }

    ListNode(int x) : val(x), next(nullptr)
    {
    }

    ListNode(int x, ListNode* next) : val(x), next(next)
    {
    }
};

class Solution
{
public:
    // Problem 1: https://leetcode.com/problems/two-sum/
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> pairIdx;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (pairIdx.find(target - num) != pairIdx.end())
            {
                return {i, pairIdx[target - num]};
            }
            pairIdx[num] = i;
        }

        return {};
    }

    // Problem 2: https://leetcode.com/problems/add-two-numbers/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        ListNode* tail = nullptr;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                tail = l1;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            tail->val = sum % 10;
            carry = sum / 10;

            if (!l1 && l2) {
                tail->next = l2;
                l1 = l2;
                l2 = nullptr;
            }

            if (!l1 && carry) {
                tail->next = new ListNode(carry);
                break;
            }
        }

        return head;
    }

    // Problem 3: https://leetcode.com/problems/longest-substring-without-repeating-characters/
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIdx;
        int maxLen = 0, left = 0;

        for (int right = 0; right < s.length(); right++)
        {
            if (lastIdx.count(s[right]) && lastIdx[s[right]] >= left)
            {
                left = lastIdx[s[right]] + 1;
            }

            lastIdx[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
