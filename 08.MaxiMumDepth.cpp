class Solution {
public:
    int maxDepth(string s) {
       int count=0;
       int max_time=0;
    
       for(char c:s)
       {
        if(c=='(')
        {
            count++;
            if(count>max_time)
            {
                max_time=count;
            }
         
        }
        else if(c==')')
        {
            count--;
        }
       } 
        return max_time;
    }
   
};
