int factorial(int n) {
  // base case: 
  if (n == 0)
    return 1;
	
  // recursive case:
  return n*factorial(n-1);
  
  return -1;
};
