class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        /*
        
        1. make a new vector to retrun the index values
        2. use two pointers with binary search
            - two loops needed
                - to find out all cases in the sum of all elements
                - to use binary search
        3. return values must be add by one
        4. do not use the same element twice
        
        */
        
        vector<int> res; // a new vector
        
        int low, high, mid, subtraction, size;
        
        size = numbers.size();
        
        for(int i = 0; i < size; i++)
        {
            //mid = low + (high - low) / 2; // bianry search
            
            low = 0; // two pointers
            high = size - 1; // two pointers
            
            subtraction = target - numbers[i]; // find the remain from the vector
            
            for(; low <= high;)
            {
                mid = low + (high - low) / 2; // bianry search
                
                if(mid == i)
                    low = mid + 1;
                else if(numbers[mid] == subtraction)
                {
                    res.push_back(i + 1); // add 1 to the index number
                    res.push_back(mid + 1); // add 1 to the index number
                    return res; // end 
                    
                }else if(numbers[mid] > subtraction)
                    high = mid - 1; // change high if number[mid] > subtraction
                else
                    low = mid + 1; //change low
            }
        }
        return res;
    }
};