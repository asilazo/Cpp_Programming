/*
The Jaro-Winkler similarity is a string metric measuring edit distance
between two strings. Jaro – Winkler Similarity is much similar to Jaro
Similarity. They both differ when the prefix of two string match.
Jaro – Winkler Similarity uses a prefix scale ‘p’ which gives a more 
accurateanswer when the strings have a common prefix up to a defined 
maximum length l.

Examples:

    Input: s1 = “DwAyNE”, s2 = “DuANE”; 
    Output: Jaro-Winkler Similarity =0.84

    Input: s1=”TRATE”, s2=”TRACE”; 
    Output: Jaro-Winkler similarity = 0.906667


Calculation: 

Jaro Winkler similarity is defined as follows 
Sw = Sj + P * L * (1 – Sj) 
where, 
    Sj, is jaro similarity
    Sw, is jaro- winkler similarity
    P is the scaling factor (0.1 by default)
    L is the length of the matching prefix up to a maximum of 4 characters.

Let s1=”arnab”, s2=”aranb”. The Jaro similarity of the two strings is 
0.933333 (From the above calculation.)
The length of the matching prefix is 2 and we take the scaling factor as 0.1.
Substituting in the formula; 
Jaro-Winkler Similarity= 0.9333333 + 0.1 * 2 * (1-0.9333333) = 0.946667

*/


// C++ implementation of above approach

#include <bits/stdc++.h>


using namespace std;



// Function prototypes for the functions


// Prototype for the function to calculate the
// Jaro Similarity of two strings

double jaro_distance(string s1, string s2);


// Prototype for the fucntion to calculate the
// Jaro Winkler Similarity

double jaro_Winkler(string s1, string s2);

// Driver code
int main()
{
    /* To do

        1. Reimplement the driver code to take a harsh table as input
    */

   
    string s1 = "TRATE", s2 = "TRACE";
 
    // Print Jaro-Winkler Similarity of two strings
    cout << "Jaro-Winkler Similarity ="
         << jaro_Winkler(s1, s2) << endl;
 
    return 0;
}



// Function to calculate the
// Jaro Similarity of two strings

double jaro_distance(string s1, string s2)
{
    // If the strings are equal return 1
    if (s1 == s2)
        return 1.0;
    
    // Get the length of the two strings
    int len1 = s1.length();
    int len2 = s2.length();

    //
    if (len1 == len2)
        return 0.0;
    
    // Maximum distance upto which matching is allowed
    int maxDist = floor(max(len1, len2) / 2) - 1;

    // keep count of matches
    int match = 0;

    /* To do

        1. A harsh table implementation
        2. Initialization
    */


    // Hash for matches
    int hash_s1[s1.length()] = { 0} ,
        hash_s2[s1.length()] = { 0 };
    
    // Traverse through the first string
    for (int i = 0; i < len1; i++)
    {
        

        // Check if there is any matches
        for (int j = max(0, i - maxDist);
             j < min(len2, i + maxDist + 1); j++)

             // if there is a match
             if(s1[i] == s2[j] && hash_s2[j] == 0)
             {
                 hash_s1[i] = 1;
                 hash_s2[j] = 1;
                 match++;
                 break;
             }
    }

     // If there is no match
    if (match == 0)
        return 0.0;
    

    // Number of transpositions
    double t = 0;
 
    int point = 0;
 
    // Count number of occurrences
    // where two characters match but
    // there is a third matched character
    // in between the indices

    for (int i = 0; i < len1; i++)
        if (hash_s1[i]) {
 
            // Find the next matched character
            // in second string
            while (hash_s2[point] == 0)
                point++;
 
            if (s1[i] != s2[point++])
                t++;
        }
 
    t /= 2;
 
    // Return the Jaro Similarity
    return (((double)match) / ((double)len1)
            + ((double)match) / ((double)len2)
            + ((double)match - t) / ((double)match))
           / 3.0;
}



// Jaro Winkler Similarity

double jaro_Winkler(string s1, string s2)
{
    double jaro_dist = jaro_distance(s1, s2);

    // If the jaro Similarity is above a threshold
    if (jaro_dist > 0.7)
    {
        // Find the length of common prefix
        int prefix = 0;

        for (int i = 0; i < min(s1.length(), s2.length()); i++) 
        {
            // If the characters match
            if (s1[i] == s2[i])
                prefix++;
 
            // Else break
            else
                break;
        }

        // Maximum of 4 characters are allowed in prefix
        prefix = min(4, prefix);
 
        // Calculate jaro winkler Similarity
        jaro_dist += 0.1 * prefix * (1 - jaro_dist);
    }

    return jaro_dist;
}