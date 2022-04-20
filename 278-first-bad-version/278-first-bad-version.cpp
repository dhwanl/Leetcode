// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    
        // using binary search to minimize the number of calls to the API
        int low = 1;
        int high = n;
        int firstOne; // a variable to find the first bad one.
        
        for(; low <= high;)
        {
            int mid = low + (high - low) / 2; // keep dividing numbers into halves
            
            if(isBadVersion(mid))
            {
                firstOne = mid; 
                high = mid - 1; // find smaller numbers that are also bad ones
                
            }else
                low = mid + 1; // find bigger numbers that are bad ones
        }
        
        return firstOne;
    }
};