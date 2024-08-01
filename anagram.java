import java.util.Arrays;

class Solution {
    // Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a, String b) {
        String res = a.replaceAll("\\s", "");
        String res2 = b.replaceAll("\\s", "");
        char[] char1 = res.toCharArray();
        char[] char2 = res2.toCharArray();

        Arrays.sort(char1);
        Arrays.sort(char2);
        return Arrays.equals(char1, char2);
        // Your code here

    }

    public static void main(String args[]) {
        boolean res = isAnagram("dantve", "vedant");
        System.out.println(res);

    }
}