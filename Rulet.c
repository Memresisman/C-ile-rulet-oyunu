#include <stdio.h>
#include <stdlib.h>
#include <time.h> //rand fonksiyonunu tamamen rastgele yapmak icin
#include <unistd.h> // sleep islemi icin

int main()
{
     int bakiye=10000; // bakiye negatif sayilara  dusebiliyor
     int bahis=1; // while dongusune girmesi icin 1 degeri atandi
 
     printf(" RRRRRRRRR    UUUU   UUUU  LLLL         EEEEEEEE  TTTTTTTTTTTTTTTT\n");
     printf(" RRR    RRR   UUUU   UUUU  LLLL         EEEE            TTT\n");
     printf(" RRR    RRR   UUUU   UUUU  LLLL         EEEE            TTT\n");
     printf(" RRRRRRRRR    UUUU   UUUU  LLLL         EEEEEEE         TTT\n");
     printf(" RRR  RRR     UUUU   UUUU  LLLL         EEEE            TTT\n ");
     printf("RRR    RRR   UUUU   UUUU  LLLL         EEEE            TTT \n ");
     printf("RRR     RRR   UUUUUUUUUU  LLLLLLLLLL   EEEEEEEE        TTT\n\n\n");

     
	 while(bahis!=0)
     {
      sleep(1);
      char renk;
      int rulet;
      char kazanan;
	 printf("\nBahis tutari giriniz cikmak icin 0 (Bakiye= %d):",bakiye); // kullanicinin negatif bir sayi girmeyecegi varsayildi
	 scanf("%d",&bahis);
	 printf("Kirmizi icin k Siyah icin s Yesil icin y giriniz:");
	 bakiye=bakiye-bahis;
	 scanf(" %c",&renk);
	 srand(time(NULL));
    
      
	sleep(1);

    printf("3...\n");
    sleep(1);
    

    printf("2..\n");
    sleep(1);
    

    
    
    printf("1.\n");
    
    

    
	 rulet=(rand() % 33); //0 dan 32 kadar rastgele sayilar uretiyor
    
     if(rulet==0) // 1/33 ihtimal ile yesil renk 
     {
	   kazanan='y' ;
	 }
     
     else if (rulet<=16)  // 16/33 ihtimal ile kirmizi renk
     {
	    kazanan='k' ;
	 }
     
     else if (rulet>16)  // 16/33 ihtimal ile siyah renk
     {
	  kazanan='s' ;
	 }
     
     
     
     printf("\n kazanan: %c\n\n",kazanan);
     
     sleep(1);
     
     
     
     
     
     
     
     
      if(kazanan==renk)
     {
       if(kazanan=='y'){
	   printf("Kazandiniz +%d",(bahis*13));
	   bakiye=bakiye+(14*bahis);
        }
        
        else{
		printf("Kazandiniz +%d",bahis);
	   bakiye=bakiye+(2*bahis);}
	 }
     
     else
     {
	   printf("Kaybettiniz -%d",bahis);
	 }
     
	 
	 }





return 0;
}
