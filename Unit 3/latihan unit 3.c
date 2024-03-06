#include <stdio.h>

int main()
{ 
    int JumlahElemen, i;
    int array[100];
    
    printf("masukan jumlah elemen array: ");
    scanf("%d", &JumlahElemen);
    
    printf("masukan nilai elemen array:\n");
    for (i = 0; i < JumlahElemen; i++);
    {
        scanf("%d", &array[i]);
    }
    
    int jumlah = 0;
    for (i = 0; i <jumlah; i++)
    { 
        jumlah += array[i];
    }
    
    printf("hasil penjumlahan seluruh elemen array: %d\n", jumlah);
    
    return 0;
}