#include <stdio.h>
//Functions declaration
int quaters(int cent);
int dimes(int cent);
int nickles(int cent);
int penny(int cent);

//main funcion
int main (void)
{

int cent=0;  
do
 {
    printf("change owed:\n");
    scanf("%d", &cent);
 }while (cent<0);
 
 // Functions calling
int quate=quaters(cent) ;
cent=cent-(quate*25);
int dim=dimes(cent);
cent=cent-(dim*10);
int nic=nickles(cent);
cent=cent-(nic*5);
int peny=penny(cent);
cent=cent-(peny*1);


int total=quate+dim+nic+peny;


printf("Total coins: %d\n", total);
printf("\n");
printf("25 X %d\n",quate);
printf("10 X %d\n",dim);
printf("5 X %d\n",nic);
printf("1 X %d\n",peny);
}



//Function definitio

int quaters(int cent)
{
    int quater=0;
    while(cent>=25)
    {
        cent=cent-25;
        quater++;
    }
    return quater;
    
}

int dimes(int cent)
{
     int dim=0;
    while(cent>=10)
    {
        cent=cent-10;
        dim++;

    }
    return dim;


}

int nickles(int cent)
{ 
    int nick=0;
    while(cent>=5)
    {
        cent=cent-5;
        nick++;

    }
    return nick;


}

int penny(int cent)
{
    int peny=0;
    while(cent>=1)
    {
        cent=cent-1;
        peny++;
    }

    return peny;
} 