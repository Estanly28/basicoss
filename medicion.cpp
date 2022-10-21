#include <stdio.h>
int main ()
{
    int op;
    float dato;
    printf("Conversiones\n");
    printf("1- libras a kilos\n");
    printf("2- kilos a libras\n");
    printf("3- Milimetros a Metros\n");
    printf("4- Metros a Milimetros\n");
   
    printf("Ingrese opcion: \n");
    scanf("%d",&op);
    
    switch (op)
    {
    case 1:
        printf("Ingrese cantidad de libras\n");
        scanf("%f",&dato);
        printf("Por %.2f libras hay %.2f kilos \n",dato,dato/(00.453592));
        break;
    case 2:
        printf("Ingrese cantidad de kilos\n");
        scanf("%f",&dato);
        printf("Por %.2f kilos hay %.2f libras\n",dato,dato*2.20462);
        
        break;
    case 3:
        printf("Ingrese cantidad de Milimetros\n");
        scanf("%f",&dato);
        printf("Por %.2f Milimetros hay %.2f Metros\n",dato,dato/1000);
        break;
    case 4:
        printf("Ingrese cantidad de Metros\n");
        scanf("%f",&dato);
        printf("Por %.2f Metros hay %.2f Milimetros\n",dato,dato*1000);
        break;
    
    }

    return 0;
}
