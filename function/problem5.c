#include<stdbool.h>
#include<stdio.h>

bool isPrime(int n){
    bool isPrime=true;
    if(n<2){
        isPrime=false;
    }
    else{
        for(int i=2 ; i<=n/2 ; i++){
            if(n % i==0){
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}


int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    if(isPrime(n)){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    
    return 0;
}