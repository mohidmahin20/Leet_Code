class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<pair<int,string>>people;
        for(int i=0;i<n;i++){
            people.push_back({heights[i],names[i]});
        }
        sort(people.begin(),people.end(),greater<pair<int,string>>());
        vector<string> sortedNames;
        for (const auto& p : people) {
        sortedNames.push_back(p.second);
    }

    return sortedNames;
    }
};
