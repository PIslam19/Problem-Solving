class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder s=new StringBuilder();
        int n1=word1.length();
        int n2=word2.length();
        int m=Math.max(n1,n2);
        int i=0;
        while(m>0)
        {
            if(n1>0)
            {
                s.append(word1.charAt(i));
                n1--;
            }
            if(n2>0)
            {
                s.append(word2.charAt(i));
                n2--;
            }
            i++;
            m--;
            
        }
        return s.toString();
    }
}