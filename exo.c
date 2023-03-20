#include <stdio.h>
// 1st fonction/procédure
void entr(int tab[5]){
    int i,j,x;
for(i=0;i<5 ; i++){
    for(j=i+1;j<6 ;j++){
        if(tab[i]>tab[j]){
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
        }
    }
}
}
// 2nd fonction/procédure
void entr2(int tab[5]){
    int i,j,x;
    for(i=0;i<5 ; i++){
        for(j=i+1;j<6 ;j++){
            if(tab[i]<tab[j]){
                x=tab[i];
                tab[i]=tab[j];
                tab[j]=x;
            }
        }
    
    }}


int main() {
    int i;
int tab[5]={3,2,1,4,5} ,tab2[5]={3,2,1,6,5};
entr(tab);
entr2(tab2);
for(i=0;i<5;i++){
    
    printf("%d\t",tab2[i]);
}
printf("\n");
for(i=0;i<5;i++){
    
    printf("%d\t",tab[i]);
}

}
