#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void burbuja(char *item, int cont);
void burbujaAgitacion(char *item, int cont);
void selec(char *item, int cont);
void insert(char *item, int cont);
void shell(char *item, int cont);

int main (){

    char s[255]="4312352987";
    char r[255]="9645";
    int i = strlen(s);
    printf("Long: %i. \n",i);
    shell(s, strlen(s));
    printf("La cadena odenada es: %s. \n",s);
    //burbujaAgitacion(r, strlen(r));
    //printf("La cadena odenada es: %s. \n",r);
    return 0;
}

//Burbuja normal
void burbuja (char *item, int cont){
    register int a, b;
    register char t;

    for(a=1; a<cont; ++a){
        for(b=cont-1; b>=a; b--){
            if(item[b-1] > item[b]){
                t = item[b-1];
                item[b-1] = item[b];
                item[b] = t;
            }        
        }
        //printf(item);
        //printf("\n");
    }
}

//Burbuja Agitación
void burbujaAgitacion (char *item, int cont){
    register int a;
    int inter;
    char t;

    do {
        inter=0;
        for(a=cont-1;a>0;--a){
            if(item[a-1]>item[a]){
                t=item[a-1];
                item[a-1]=item[a];
                item[a]=t;
                inter = 1;
            }
        }
        for(a=1; a<cont;++a){
            if(item[a-1]>item[a]){
                 t=item[a-1];
                item[a-1]=item[a];
                item[a]=t;
            }
        }

    }while(inter);
}

void selec(char *item, int cont){
    register int a,b,c;
    int inter;
    char t;
    for(a=0;a<cont-1;++a){
        inter=0;
        c=a;
        t=item[a];
        for(b=a+1;b<cont;++b){
            if(item[b]<t){
                c=b;
                t=item[b];
                inter=1;
            }
        }
        if(inter){
            item[c]=item[a];
            item[a]=t;
        }
        printf(item);
        printf("\n");
    }
}

void insert(char *item,int cont){
    register int a,b;
    char t;
    for(a=1;a<cont;++a){
        t=item[a];
        for(b=a-1;(b>=0)&&(t<item[b]);b--){
            item[b+1] = item[b];
        }
        printf("Posicion: %i \n",b);
        item[b+1]=t;
    }
}

void shell(char *item, int cont){
    register int i, j, salto,k;
    char x,a[5];
    a[0]=9;a[1]=5;a[2]=3;a[3]=2;a[4]=1;

    for(k=0;k<5;k++){
        salto=a[k];
        for(i=salto;i<cont;++i){
            x=item[i];
            for(j=i-salto;(x<item[j] && (j>=0));(j=j-salto)){
                item[j+salto]=item[j];
            }
            item[j+salto]=x;
        }
    }
}

void quickSort(char *item, int cont){
    register int i, j, salto,k;
    char x,a[5];
    a[0]=9;a[1]=5;a[2]=3;a[3]=2;a[4]=1;

    for(k=0;k<5;k++){
        salto=a[k];
        for(i=salto;i<cont;++i){
            x=item[i];
            for(j=i-salto;(x<item[j] && (j>=0));(j=j-salto)){
                item[j+salto]=item[j];
            }
            item[j+salto]=x;
        }
    }
}
