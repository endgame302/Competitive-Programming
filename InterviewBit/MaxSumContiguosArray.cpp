/*
  Kadane's Algorithm
  At each step, you have two choices --> Should I take the next element or not?
  WHY NEXT? 
  Because the sum is contiguos
  So, if sum increases on taking next element, we extend the array.
  Otherwise, we start a new array.
 
 maxSum[i] = max(maxSum[i-1] + arr[i], arr[i]);
*/




int Solution::maxSubArray(const vector<int> &a) {
    // Kadane algorithm
    // Either you extend or you start a new array
    int prefix = a[0] ;
    int maxsum = -10000000;
  
    for(int i = 1;i < a.size(); i++)
    {   
        maxsum = max(maxsum + a[i], a[i]); 
        prefix = max(prefix, maxsum);     
    }
    return prefix;
}
