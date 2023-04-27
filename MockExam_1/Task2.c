#include <stdio.h>
int main(){
    FILE* fin, *fout;
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","a");
    if((fin=fopen("input.txt","r"))==NULL) printf("Error has happened while opening input.txt file");
    else{
        char c;
        while((c=getc(fin))!=EOF){
            if(c==' ') fputs("....",fout);
            else fputc(c,fout);
        }
        if(!feof(fin)) printf("ERROR!!! Because we have not reached to the end of the file");
        fputs("\n",fout);
    }
    
    fclose(fin);
    fclose(fout);

    //reading output.txt file
    FILE* fptr;
    fptr=fopen("output.txt","r");
    if((fptr=fopen("output.txt","r"))==NULL) printf("Error has happened while opening output.txt file");
    else{
        char line[1000];
        while(fgets(line,1000,fptr)){
            printf("%s",line);
        }
    }
    fclose(fptr);
}
