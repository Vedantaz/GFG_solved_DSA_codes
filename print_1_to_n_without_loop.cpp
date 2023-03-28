class solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here

       
        if(N != 0){
            printNos(N-1);   // it automatically stores it like stack
            cout << N<< " ";
        }
        
        
    }
}
    