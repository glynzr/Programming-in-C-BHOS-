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

/*#include <stdio.h>
int isPalindrome(int x){
    int arr[100];
    int i=0;
    while(x>0){
        *(arr+i)=x%10;
        x/=10;
        i++;
    }

    for(int j=0;j<i;j++){
        if(arr[j]!=arr[i-j-1]) return 0;
    }
    return 1;

}
int main(){
    int n;
    scanf("%i",&n);
    printf("%s\n",isPalindrome(n) ? "Palindrome" : "Not palindrome");
}
*/
