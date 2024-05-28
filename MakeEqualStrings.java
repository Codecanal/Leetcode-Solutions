package DSA.Leetcode;

public class MakeEqualStrings {
    public int equalSubstring(String s, String t, int maxCost) {
        int maxLength = 0;
        int currentCost = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            // Calculate the cost of changing s[right] to t[right]
            currentCost += Math.abs(s.charAt(right) - t.charAt(right));

            // If the currentCost exceeds maxCost, move the left pointer to the right
            while (currentCost > maxCost) {
                currentCost -= Math.abs(s.charAt(left) - t.charAt(left));
                left++;
            }

            // Update the maximum length of the substring
            maxLength = Math.max(maxLength, right - left + 1);
        }

        return maxLength;
    }
    public static void main(String[] args){


    }
}
