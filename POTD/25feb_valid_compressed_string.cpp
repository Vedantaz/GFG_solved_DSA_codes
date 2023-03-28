class Solution{

    public:
        int checkStrings(string S, string T){
            int i=0, j=0;   // simultaneously for t and s

            while(i<T.size() and j<S.size()){
                if(T[i] >= '0' and T[i]<= '9'){

                    int count = 0;
                    while(i<T.size() and T[i] >= '0' and T[i] <= '9'){
                        count = count*10 +( T[i] - '0' );
                        i++;

                    }
                    j = j-count;


                }
                else if(ifT[i] != S[j]) return false;
                else {i++; j++;}
            }
            if(i == T.size() and j == S.size()){
                return true;
            }




        }
} 

// it going along with in both string simultaneously.