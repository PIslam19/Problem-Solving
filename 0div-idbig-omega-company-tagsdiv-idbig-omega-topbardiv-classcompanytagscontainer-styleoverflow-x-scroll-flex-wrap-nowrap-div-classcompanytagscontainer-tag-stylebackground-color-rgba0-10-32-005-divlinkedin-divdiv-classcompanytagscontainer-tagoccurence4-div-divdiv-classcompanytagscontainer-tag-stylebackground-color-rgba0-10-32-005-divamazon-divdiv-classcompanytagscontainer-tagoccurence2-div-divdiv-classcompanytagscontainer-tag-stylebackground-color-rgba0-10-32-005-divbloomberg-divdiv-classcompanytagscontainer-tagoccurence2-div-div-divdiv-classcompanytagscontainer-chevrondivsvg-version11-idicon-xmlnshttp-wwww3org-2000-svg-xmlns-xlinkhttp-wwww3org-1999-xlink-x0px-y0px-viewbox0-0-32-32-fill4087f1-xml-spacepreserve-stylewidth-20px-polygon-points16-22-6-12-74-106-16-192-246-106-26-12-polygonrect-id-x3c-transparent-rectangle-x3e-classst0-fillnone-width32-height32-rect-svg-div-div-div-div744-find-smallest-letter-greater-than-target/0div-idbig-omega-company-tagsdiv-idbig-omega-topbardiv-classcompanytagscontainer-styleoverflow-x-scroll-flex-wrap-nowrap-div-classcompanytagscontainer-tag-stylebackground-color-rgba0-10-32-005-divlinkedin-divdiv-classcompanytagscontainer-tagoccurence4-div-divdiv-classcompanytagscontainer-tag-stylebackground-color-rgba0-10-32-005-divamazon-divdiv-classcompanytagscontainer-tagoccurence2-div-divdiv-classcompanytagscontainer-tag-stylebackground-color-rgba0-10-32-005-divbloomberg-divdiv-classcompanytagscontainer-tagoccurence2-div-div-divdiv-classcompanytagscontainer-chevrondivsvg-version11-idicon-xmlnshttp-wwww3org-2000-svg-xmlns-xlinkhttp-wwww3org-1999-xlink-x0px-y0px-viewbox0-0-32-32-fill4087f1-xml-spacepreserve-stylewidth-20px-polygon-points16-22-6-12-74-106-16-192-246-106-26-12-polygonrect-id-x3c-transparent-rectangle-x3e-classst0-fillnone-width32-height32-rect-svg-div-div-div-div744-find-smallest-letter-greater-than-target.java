class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int s=0;
        int e=letters.length -1;
       for(int i=0;i<=e;i++)
       {
           if(letters[i]>target)
           {
               return letters[i];
           }
       }
        return letters[0];
    }
}