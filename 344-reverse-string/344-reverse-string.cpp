class Solution {
public:
    void reverseString(vector<char>& s) {
        
        /*
            1. make two pointers to reverse elements in the vector
            2. using recursion to repeat the work
        */
        
        // make two pointers
        int size, low, high;
        
        size = s.size();
        low = 0;
        high = size - 1;
        
        // call recursion function
        recursion(s, low, high);
    
    }
    
private:
    void recursion(vector<char>& s, int low, int high)
    {
        if(low >= high) // set base case
            return; // end recursion when it is done
        else
        {
            // exchange each element
            char temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            
            // call the function itself again
            recursion(s, low + 1, high - 1);
        }
            
    }
};