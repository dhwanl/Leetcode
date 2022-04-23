class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int size, low, high;
        
        size = s.size();
        low = 0;
        high = size - 1;
        
        recursion(s, low, high);
    
    }
    
private:
    void recursion(vector<char>& s, int low, int high)
    {
        if(low >= high)
            return;
        else
        {
            char temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            
            recursion(s, low + 1, high - 1);
        }
            
    }
};