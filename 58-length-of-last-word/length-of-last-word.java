class Solution {
    public int lengthOfLastWord(String s) {
        int i=s.length()-1;
        if(s.charAt(i)!=' ')
        {
            while(i>=0&&s.charAt(i)!=' ')
            {
                i--;
            }
            return s.length()-1-i;
        }
        else
        {
            while(i>=0&&s.charAt(i)==' ')
            {
                i--;
            }
            int k=i;
             while(i>=0&&s.charAt(i)!=' ')
            {
                i--;
            }
            return k-i;
        }
    }
}