#include <stdio.h>
#include <string.h>
enum State{
    ONHOLD=0,
    PUBLISHED
};
typedef struct Book{
    int pages;
    char title[1000];
    char author[1000];
    enum State currState;
} Book;

void printBook(Book book){
    printf("The title of the book: %s\n",book.title);
    printf("The author of the book:%s\n",book.author);
    printf("The number of pages in the book:%i\n",book.pages);
    printf("%s", book.currState==ONHOLD ? "Not published!\n" : "Published!\n");
}
int main(){
    Book Book1;
    strcpy(Book1.title,"C programming");
    strcpy(Book1.author,"S.Kochan");
    Book1.pages=658;
    Book1.currState=PUBLISHED;
    printBook(Book1);
}
