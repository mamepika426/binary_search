#include <stdio.h>

int n;
int k;
int A[100000];

int sumup(int m){
    int i ; int x = 0; int a;
    for (i = 1 ; i < n; i++){
        if (A[i] % m ==0){
            a = A[i]/m ;
        }
        else {
            a = A[i]/m + 1;
        }
        x = a + x;
        }
    return x < k ;
    }


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0 ;
    ub = 1000000000 ;
    while (ub - lb > 1){
        int m = (ub + lb)/2;
        if (sumup(m)){
              ub = m ;
        }
        else{
            lb = m ;
        }
        }
            
    printf("%d\n",ub) ;
  return 0;
}
