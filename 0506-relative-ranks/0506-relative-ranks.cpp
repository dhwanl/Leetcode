class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int, int>> q;

        for(int i = 0; i < score.size(); i++)
        {
            q.push({score[i], i});
        }

        int i = 0;

        vector<string> a(q.size());

        while(!q.empty())
        {
            string temp;

            if(i == 0)
            {
                temp = "Gold Medal";
            }
            else if(i == 1)
            {
                temp = "Silver Medal";
            }
            else if(i == 2)
            {
                temp = "Bronze Medal";
            }
            else
            {
                temp = to_string(i + 1);
            }

            a[q.top().second] = temp;
            i++;
            q.pop();

        }

        return a;
    }
};