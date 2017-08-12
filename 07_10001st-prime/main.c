#include <stdio.h>
#include <math.h>
int main(void){

    int i, c = 0;
    for(i = 1; c< 10001; c +=is_prime(i)?1:0, i++);
    printf("%d", i-1);
    return 1;
}

int is_prime(int n){
    int i = 2;
    int max = sqrt(n);
    if (n ==1)
        return 0;
    while( i<=max ){
        if(fmod(n,i)==0)
            return 0;
        i++;
    }
    return 1;
}
