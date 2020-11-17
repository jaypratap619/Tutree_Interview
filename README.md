# Tutree_Interview
solutions of the Tutree Interview problems

1. Write a program in C++ to print the following pattern
1 2 3 4 5 6 7
 2 3 4 5 6 7
  3 4 5 6 7
   4 5 6 7
    5 6 7
     6 7
      7
     6 7
    5 6 7
   4 5 6 7
  3 4 5 6 7
 2 3 4 5 6 7
1 2 3 4 5 6 7

Approach for Problem 1:-

for upper triangle

Rows  = 1 to 7
           
           columns
            
    spaces            numbers        
   =RowNo. - 1       =RowNo to 7

Similar approach can be used for lower traiangle.
2. Find all substrings of a given string that contains all characters of other string.
 Example
string str1 = ‘XYYZXZYZXXYZ’;
string str2 = ‘XYZ’;
 
substring ‘YZX’ present at index 2
substring ‘XZY’ present at index 4
substring ‘YZX’ present at index 6
substring ‘XYZ’ present at index 9

Approach for Problem 2
m = lenght of pattern
n = length of text
1) The first count array store frequencies of characters in pattern.
2) The second count array stores frequencies of characters in current window of text.

3) Store counts of frequencies of pattern in first count array countfP[]. Also store counts of frequencies of characters in first window of text in array countfT[].

4) Now run a loop from i = m to n-1. Do following in loop.
…..a) If the two count arrays are identical, we found an occurrence.
…..b) Increment count of current character of text in countfT[]
…..c) Decrement count of first character in previous window in countfT[]

5) The last window is not checked by above loop, so explicitly check it.
