// a simple recursion code that returns the fatorial of N
int fact(int n)
{
    if(n == 1)          //base case
        return 1;    
    else                //recursive case
        return n * fact(n-1);
    
}
