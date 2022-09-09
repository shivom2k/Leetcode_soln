class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
        for(auto i :nums)
        {
            st.insert(i);        
        }
        int final_len=0;
      for(auto i:nums)
      {
          
          if(st.count(i-1)==0)
          {
              int current_num=i+1;
              int leng=1;
              while(st.count(current_num))
              {
                  
                  current_num++;
                  leng++;
              }
           final_len=max(final_len,leng);
          }
         
          
      }
        return final_len;
    }
};