/*
Jaro Similarity is the measure of similarity between two strings.
The value of Jaro distance ranges from 0 to 1, where 1 means the 
strings are equal and 0 means no similarity between the two strings.

Examples:
    Input: s1 = “CRATE”, s2 = “TRACE”; 
    Output: Jaro Similarity = 0.733333

    Input: s1 = “DwAyNE”, s2 = “DuANE”; 
    Output: Jaro Similarity = 0.822222

*/


# include <bits/stdc++.h>
#include <string>

using namespace std;

// Function to calculate the
// Jaro Similarity of two strings

double jaro_distance(string s1, string s2)
{
    // if string are equal
    if (s1 == s2)
        return 1.0;
    
    // length of two strings
    int len1 = s1.length(), len2 = s2.length();

    if (len1 == 0 ||  len2 == 0)
        return 0.0;
    
     // Maximum distance upto which matching is allowed
     int max_dist = floor(max(len1, len2) / 2) - 1;

     // Count of matches
     int match = 0;
     
}