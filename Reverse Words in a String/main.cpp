 class Solution {
 public:
     void reverseWords(string &s) {
         reverse(s.begin(), s.end());
         int start = 0, end = 0, j = 0;
         while(start != s.length())
         {
             while(start != s.length() && s[start] == ' ') start ++;
             for(end = start; end != s.length() && s[end] != ' '; end ++);
             if(j != 0 && start <= end - 1) s[j ++] = ' ';
             for(int i = end - 1; start < i; start ++, i --)
                 swap(s[i], s[start]), s[j ++] = s[start];
             while(start < end) s[j ++] = s[start ++];
         }
         s.resize(j);
     }
 };