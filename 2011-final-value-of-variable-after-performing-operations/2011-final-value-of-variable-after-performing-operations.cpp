class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int m=0;
       for(int i=0;i<operations.size();i++)
       {
           if(operations[i]=="X++"||operations[i]=="++X")
           m++;
            else
            m--;
       }
       return m;
    }
};