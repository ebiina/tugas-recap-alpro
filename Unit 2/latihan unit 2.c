#include <stdio.h>
int main()
{
    int JumlahTransaksi, nominalTransaksi, totalPengeluaran = 0;
    
    printf("masukan jumlah transaksi hari ini: ");
    scanf("%d", & JumlahTransaksi);
    
    if (JumlahTransaksi > 0)
    {
        printf("masukan nominal transaksi:\n");
        for (int i = 0; i< JumlahTransaksi; ++i)
        {
            printf("Transaksi ke-%d: ", i + 1);
            scanf("%d", &nominalTransaksi);
            totalPengeluaran += nominalTransaksi;
        }
    }
    if (JumlahTransaksi <=0)
    {
        printf("tidak ada pengeluaran hari ini");
    } else {
        printf("total pengeluaran hari ini = %d", totalPengeluaran);
    }

    return 0;
}
