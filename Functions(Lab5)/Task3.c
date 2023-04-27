#include <stdio.h>
typedef long long int lli;
lli digitSum(lli x){
    lli sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
lli minsum(lli arr[],int length){
    lli min_=digitSum(arr[0]);
    int index=0;
    for(int i=0;i<length;i++){
        if(min_>=digitSum(arr[i])) {
            min_=digitSum(arr[i]);
            index=i;
        }
    }
    return arr[index];
}

int main(){
    int n;
    scanf("%i",&n);
    lli arr[n];
    for(int i=0;i<n;i++){
        scanf("%lli",arr+i);
    }

    printf("%lli",minsum(arr,n));

}
