 #include <stdio.h>
int mnoz(int a, int b){return a * b;}
int dodaj(int a, int b){return a + b;}
int odej(int a, int b){return a - b;}
int dziel(int a,int b){return a  / b;}

int main(void)
{
       int a = 2, b = 5;  /*deklaracja zmiennych*/
       char wybor;
       scanf("%c" , &wybor); /* czytaj z konsoli i zapisz wartosc pod wybor*/

       if(wybor == '*'){
printf("wynik mnozenia: %i\n", mnoz(a, b));
}else

       

       if(wybor == '+'){
printf("wynik dodawania: %i\n", dodaj(a, b));
}else
       

       if(wybor == '-'){
printf("wynik odejmowania: %i\n", odej(a, b));
}else
       if(wybor == '/'){
printf("wynik dzielenia: %i\n", dziel(a, b));

}else{



}; /* ten srednik jest opcjonalny jesli wystepuje klamry */

       return 0;
}
