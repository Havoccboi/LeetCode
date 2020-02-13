class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer = 0;
        for(char ch : S){
         for(int i=0; i < J.size() ; i++ ){
             if(ch == J[i]){
                 answer++;
                 break;
             }
         }
    }
    return answer;    
    }
};
