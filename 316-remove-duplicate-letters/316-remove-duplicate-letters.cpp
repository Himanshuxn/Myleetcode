class Solution {
public:
    string removeDuplicateLetters(string s) {
     vector<int> count(254,0);
     vector<bool> visited(254,false);
        string result = "0";
        for(auto i : s)
        {
            count[i]++;
        }
        for(auto i : s)
        {
            count[i]--;
            if(visited[i])
            continue;
            while(i<result.back() && count[result.back()])
            {
                visited[result.back()]=false;
                result.pop_back();
            }
            result+=i;
            visited[i]=true;
        }
        return result.substr(1);
    }
};