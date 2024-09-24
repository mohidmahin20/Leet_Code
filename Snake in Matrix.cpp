class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int cnt=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]=="RIGHT"){
                cnt++;
            }
            else if (commands[i]=="LEFT"){
                cnt--;
            }
            else if(commands[i]=="DOWN"){
                cnt=cnt+n;
            }
            else {
                cnt=cnt-n;
            }

        }
        return cnt;
        
    }
};
