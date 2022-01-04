class Solution {
  public:
    long long squaresInChessBoard(long long N) {
       return 1LL*((N*(N+1))/2)*(2*(N)+1)/3;

    }
};