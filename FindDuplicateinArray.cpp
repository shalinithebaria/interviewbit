int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (A.size() <= 1) 
        return -1;
    int slow = A[0]; 
    int fast = A[A[0]]; 
    while (fast != slow) { 
        slow = A[slow]; 
        fast = A[A[fast]]; 
    } 
    fast = 0; 
    while (slow != fast) { 
        slow = A[slow]; 
        fast = A[fast]; 
    } 
    return slow; 
}
