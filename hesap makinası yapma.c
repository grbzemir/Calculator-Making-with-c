#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {

    printf("************************************\n");
    printf("\n");
    printf("******      MENU      ******\n");
    printf("\n");
    printf("************************************\n");
    printf("\n");
    printf("1.Toplama islemi\n");
    printf("2.Cikarma islemi\n");
    printf("3.Carpma islemi\n");
    printf("4.Bolme islemi\n");
    printf("5.kare bulma islemi\n");
    printf("6.kup bulma islemi\n");
    printf("7.kok bulma islemi\n");
    printf("8.Denklem cozme islemi(5x^2+4x+3)\n");
    

    int s1,s2,sonuc,secim;  
    printf("\n\n");

    printf("isleminizi giriniz: ");
    scanf("%d",&secim);

    switch(secim)
    {
        case 1:
        printf("toplama islemi secildi\n");
        printf("ilk sayiyi giriniz: ");
        scanf("%d",&s1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&s2);
        sonuc=s1+s2;
        printf("sonuc: %d",sonuc);
        break;
    
        case 2:
        printf("cikarma islemi secildi\n");
        printf("ilk sayiyi giriniz: ");
        scanf("%d",&s1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&s2);
        sonuc=s1-s2;
        printf("sonuc: %d",sonuc);
        break;
    
        case 3:
        printf("carpma islemi secildi\n");
        printf("ilk sayiyi giriniz: ");
        scanf("%d",&s1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&s2);
        sonuc=s1*s2;
        printf("sonuc: %d",sonuc);
        break;
    
        case 4:
        printf("bolme islemi secildi\n");
        printf("ilk sayiyi giriniz: ");
        scanf("%d",&s1);
        printf("ikinci sayiyi giriniz: ");
        scanf("%d",&s2);
        sonuc=s1/s2;
        printf("sonuc: %d",sonuc);
        break;

        case 5:
        printf("kare bulma islemi secildi\n");
        printf("sayiyi giriniz: ");
        scanf("%d",&s1);
        sonuc=sqrt(s1);
        printf("sonuc: %d",sonuc);
        break;
    
        case 6:
        printf("kup bulma islemi secildi\n");
        printf("sayiyi giriniz: ");
        scanf("%d",&s1);
        sonuc=pow(s1,3);
        printf("sonuc: %d",sonuc);
        break;

        case 7:
        printf("kok bulma islemi secildi\n");
        printf("sayiyi giriniz: ");
        scanf("%d",&s1);
        sonuc=pow(s1,1/2);
        printf("sonuc: %d",sonuc);
        break;
    
        case 8:
        printf("denklem cozme islemi secildi\n");
        printf("denklemi giriniz: ");
        scanf("%d",&s1);
        sonuc=5*pow(s1,2)+4*s1+3;
        printf("sonuc: %d",sonuc);
        break;

    }
    
        return 0;
    }

