#include <stdio.h>

int jarak1, jarak2;
int waktu1, waktu2;
int kecepatan1, kecepatan2;

int main() {
    scanf("%d%d",&jarak1, &waktu1);
    scanf("%d%d",&kecepatan1, &waktu2);
    scanf("%d%d",&jarak2, &kecepatan2);
    
    float kecepatan =(float) jarak1 / waktu1 ;
    float jarak =(float) kecepatan1 * waktu2;
    float waktu =(float) jarak2 / kecepatan2;
    
    printf("hasil kecepatan = %.2f\n", kecepatan);
    printf("hasil jarak = %.2f\n", jarak);
    printf("hasil waktu = %.2f", waktu);

    return 0;
}