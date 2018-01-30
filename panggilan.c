#include <stdio.h>

int main()
{
    int jamA, menitA, jamB, menitB, detikA, detikB, detik, waktuA, waktuB, biaya;
	
    printf("WAKTU PANGGILAN AWAL \n ");
    printf("masukan waktu memulai panggilan(jam) :",jamA);
    scanf("%i",&jamA);
    printf("masukan waktu memulai panggilan(menit) :",menitA);
    scanf("%i",&menitA);
    printf("masukan waktu memulai panggilan(detik) :",detikA);
    scanf("%i",&detikA);
    printf("\n");
    
    printf("WAKTU PANGGILAN AKHIR \n ");
    printf("masukan waktu mengakhiri panggilan(jam) :",jamB);
    scanf("%i",&jamB);
    printf("masukan waktu mengakhiri panggilan(menit) :",menitB);
    scanf("%i",&menitB);
    printf("masukan waktu mengakhiri panggilan(detik) :",detikB);
    scanf("%i",&detikB);
    printf("\n");
    
    waktuA= (jamA*3600)+(menitA*60)+ detikA;
    waktuB= (jamB*3600)+(menitB*60)+ detikB;
    
    detik = waktuB-waktuA;
    biaya = (detik/60)*700;
    printf("Lama waktu bicara anda adalah %d jam %d menit %d detik \n",(jamB-jamA),(menitB-menitA),(detikB-detikA));
    printf("jadi biaya yang harus dikeluarkan adalah :%i  \n",biaya);
    
    system("pause");
    return 0;
    
}
