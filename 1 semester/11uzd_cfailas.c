// Airidas Rupšas JNII21 11 užduotis - failo nuskaitymas C kalboje

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int u;
    int min, avg = 0, max;
    
    FILE *fptr;
    fptr = fopen("height.txt" , "r");

    if(fptr == NULL)
    {
        printf("Klaida nuskaitant failą. ");
        exit (1); 
    }
    fscanf(fptr, "%d", &u);
    
    for(int i = 0; i < u; i++)
    {
        fscanf(fptr, "%d", &array[i]);
    }

    printf("Ūgių skaičius: %d \nŪgiai: ", u);
    min = array[0];
    max = array[0];
        for(int i = 0; i < u; i++)
    {
        printf("%d ", array[i]);
        avg += array[i];
        
        if(min > array[i])
        {
            min = array[i];
        }
        
        if(max < array[i])
        {
            max = array[i];
        }
    }
    
    avg = avg / u;
    
    printf("\nVidutinis ūgis: %d cm.", avg);
    printf("\nMažiausias ūgis: %d cm.", min);
    printf("\nDidžiausias ūgis: %d cm.", max);
    
    FILE *fptr1;
    fptr1 = fopen("atsakymas.txt", "w");
    
    fprintf(fptr1, "\nVidutinis ūgis: %d cm.", avg);
    fprintf(fptr1, "\nMažiausias ūgis: %d cm.", min);
    fprintf(fptr1, "\nDidžiausias ūgis: %d cm.", max);

    fclose(fptr);
    fclose(fptr1);
    return 0;
}
