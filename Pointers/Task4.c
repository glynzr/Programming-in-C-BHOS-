#include <stdio.h>
void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main(){
    int a,b;
    scanf("%i%i",&a,&b);
    printf("Before the swap:a=%i,b=%i\n",a,b);
    swap(&a,&b);
    printf("After the swap:a=%i,b=%i\n",a,b);

}
