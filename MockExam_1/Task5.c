#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%i",&n);
    int arr[n];
    int max_=INT_MIN;
    int min_=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%i",arr+i);
        if(i==0) max_=min_=*arr;
        else{
            if(min_>*(arr+i)) min_=*(arr+i);
            if(max_<*(arr+i)) max_=*(arr+i);
        }
    }

    for(int i=0;i<n;i++){
        if(*(arr+i)==max_) printf("%i ",min_);
        else printf("%i ",*(arr+i));
    }

}
