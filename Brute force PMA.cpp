#include <bits/stdc++.h>

using namespace std;
// Brute Force Algorithm
int bruteForceSearch(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; ++i)
    {
        int j;
        for (j = 0; j < m; ++j)

        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
            return i; // pattern found at index i
    }
    return -1; // pattern not found
}
// Main function for testing
int main()
{
    string text = "My Name is Md Robiul Islam";
    string pattern = "Robiul";
    // Brute Force Algorithm
    int index = bruteForceSearch(text, pattern);
    if (index != -1)
        cout << "Pattern found at index " << index << "\n";
    else
        cout << "Pattern not found.\n";
    return 0;
}