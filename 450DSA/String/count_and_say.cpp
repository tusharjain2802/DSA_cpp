class Solution {
public:
    string countAndSay(int n) {
        string final="11";
        int count=1;
        if(n==1){
            return "1";
        }
        for(int i=3;i<n+1;i++){
            string str="";
            count=1;
            for(int j=0;j<final.size();j++){
                if(final[j] != final[j+1]){
                    str+= count+'0';
                    str.push_back(final[j]);
                    count=1;
                    
                }
                else{
                    count++;
                }
            }
            final = str;
        }
        return final;
              
    }
};