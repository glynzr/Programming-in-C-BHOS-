#include <stdio.h>
int isPalindrome(int x){
    int original=x;
    int reverse=0;
    while(x>0){
        reverse=reverse*10+x%10;
        x/=10;
    }

    return reverse==original;
}
int main(){
    int n;
    scanf("%i",&n);
    if(isPalindrome(n)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}