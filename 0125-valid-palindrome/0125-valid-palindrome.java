class Solution {
     // Check if a character is ASCII alphanumeric (0-9, A-Z, a-z)
    private static boolean isAlnum(char c) {
        return (c >= '0' && c <= '9') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= 'a' && c <= 'z');
    }

    // Convert ASCII letter to lowercase without using library calls
    private static char toLowerAscii(char c) {
        if (c >= 'A' && c <= 'Z') {
            return (char) (c + ('a' - 'A')); // add 32
        }
        return c;
    }

    // Main palindrome check
    public static boolean isPalindrome(String s) {
        if (s == null) return true; // treat null as palindrome by choice
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            // advance i to next alnum or beyond
            char ci = s.charAt(i);
            if (!isAlnum(ci)) {
                i++;
                continue;
            }

            // move j to previous alnum or before
            char cj = s.charAt(j);
            if (!isAlnum(cj)) {
                j--;
                continue;
            }

            // compare lowercase forms
            char li = toLowerAscii(ci);
            char lj = toLowerAscii(cj);
            if (li != lj) return false;

            i++;
            j--;
        }
        return true;
    }
}