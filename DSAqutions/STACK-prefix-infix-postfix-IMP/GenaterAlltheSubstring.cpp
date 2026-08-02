#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printSubstringsIndexBased(const std::string &str)
{
    int n = str.length();
    vector<string> ans;

    // i is the starting index
    for (int i = 0; i < n; i++)
    {
        // j is the ending index
        for (int j = i; j < n; j++)
        {
            int length = j - i + 1;
            string sub = str.substr(i, length);
            bool hasDuplicate = false;
            vector<bool> seen(256, false);
            for (int i = 0; i < sub.length(); i++)
            { // repeteting withou repetating char
                char ch = sub[i];
                if(seen[ch]){
                    hasDuplicate=true;
                    break;
                }
                seen[ch]=true;
            }
            if (!hasDuplicate)
            {
                ans.push_back(sub);
            }
        }
    }
    int maxi = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        int l = ans[i].length();
        maxi = max(maxi, l);
    }
    return maxi;
}

int main()
{
    cout << printSubstringsIndexBased("abcabcbb");

    return 0;
}