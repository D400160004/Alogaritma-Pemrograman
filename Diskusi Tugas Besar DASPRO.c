#include <stdio.h>
int main()
{
    cover();
}

void menu()
{
    int pil;
    system("cls");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf(" \t\t\t\t-- SELAMAT DATANG --                         \n");
    printf("          --  PROGRAM PERHITUNGAN NILAI RESISTANSI PADA RESISTOR  --         \n");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf("\n\n   				    MENU UTAMA\n");
    printf("   		     -------------------------------------\n");
    printf("   		     1. Input Data Resistor 4 gelang warna\n");
    printf("		     2. Input Data Resistor 5 gelang warna\n");
    printf("   		     3. Tabel kode warna\n");
    printf("   		     4. Keanggotaan\n");
    printf("   		     5. Exit\n\n");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    pil1:
    printf("  		            Tentukan pilihan anda : ");
    scanf("%d",&pil);
    if (pil == 0|| pil>=6)
        {
        printf("\t\t\t     Pilihan anda salah !!\n\n");
        goto pil1;
        }
    switch(pil)
    {
        case 1 : system("cls"); gelang4(); break;
        case 2 : system("cls"); gelang5(); break;
        case 3 : system("cls"); kode(); break;
        case 4 : system("cls"); anggota();break;
        case 5 : system("cls"); printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
    }

}

void kode()
    {

    puts("    ********************** TABEL KODE WARNA RESISTOR **********************\n");
    puts("    ._____________________________________________________________________.");
    puts("    |      |           |                 Gelang Warna                     |");
    puts("    |------+-----------+--------------------------------------------------|");
    puts("    | Kode |   Warna   | Gelang 1 | Gelang 2 |   Gelang 3   |  Gelang 4   |");
    puts("    |------+-----------+----------+----------+--------------+-------------|");
    puts("    |                  |  Angka 1 | Angka 2  |   Pengali    |  Toleransi  |");
    puts("    |------+-----------+----------+----------+--------------+-------------|");
    puts("    |  0   |   Hitam   |    -     |    0     |   1=10^0     |      1%     |");
    puts("    |  1   |   Cokelat |    1     |    1     |    10^1      |      2%     |");
    puts("    |  2   |   Merah   |    2     |    2     |    10^2      |      3%     |");
    puts("    |  3   |   Orange  |    3     |    3     |    10^3      |      4%     |");
    puts("    |  4   |   Kuning  |    4     |    4     |    10^4      |             |");
    puts("    |  5   |   Hijau   |    5     |    5     |    10^5      |             |");
    puts("    |  6   |   Biru    |    6     |    6     |    10^6      |             |");
    puts("    |  7   |   Ungu    |    7     |    7     |    10^7      |             |");
    puts("    |  8   |   Abu-abu |    8     |    8     |    10^8      |             |");
    puts("    |  9   |   Putih   |    9     |    9     |    10^9      |             |");
    puts("    |  10  |   Emas    |    -     |    -     |    0.1       |      5%     |");
    puts("    |  11  |   Perak   |    -     |    -     |    0.01      |      10%    |");
    puts("    |  12  |T. berwarna|    -     |    -     |      -       |      20%    |");
    puts("    ***********************************************************************\n");
    ulang();
}

void anggota()
    {
        printf(" ============================================================================      \n");
        printf("                 -MENENTUKAN NILAI RESISTOR DENGAN GELANG WARNA-                 \n");
        printf(" ============================================================================      \n");
        printf(" \n\n\n\n\n\n");
        printf("                                Disusun oleh :                                    \n\n");
        printf("                   1.   Prahita Ratna R         (D400160001)                      \n");
        printf("                   2.   Syaefudhin              (D400160002)                      \n");
        printf("                   3.   Muhammad Rusdi Wibowo   (D400160003)                      \n");
        printf("                   4.   Muhammad Adnan          (D400160004)                  \n\n\n\n");
        printf("                                 KElOMPOK A3                                     \n");
        printf(" ______________________________________________________________________________\n");
        printf(" ==============================================================================   \n");
        printf("                            JURUSAN TEKNIK ELEKTRO                               \n");
        printf("                                FAKULTAS TEKNIK                                  \n");
        printf("                      UNIVERSITAS MUHAMMADIYAH SURAKARTA                         \n");
        printf(" ______________________________________________________________________________\n");
        printf(" ==============================================================================   \n");
        ulang();
    }

void head()
	{
	printf(" ._____________________.\n");
	printf(" | Kode | Warna        |\n");
	printf(" |------|--------------|\n");
	printf(" |  0   | Hitam        |\n");
	printf(" |  1   | Cokelat      |\n");
	printf(" |  2   | Merah        |\n");
	printf(" |  3   | Orange       |\n");
	printf(" |  4   | Kuning       |\n");
	printf(" |  5   | Hijau        |\n");
	printf(" |  6   | Biru         |\n");
	printf(" |  7   | Ungu         |\n");
	printf(" |  8   | Abu-abu      |\n");
	printf(" |  9   | Putih        |\n");
	printf(" |------|--------------|\n");
	printf(" |  10  | Emas         |\n");
	printf(" |  11  | Perak        |\n");
	printf(" |  12  | Tak berwarna |\n");
	printf(" ***********************\n\n");
	}


void  header4()
    {
        printf("\t\t===============================================\n");
        printf("\t\t  PERHITUNGAN NILAI RESISTANSI 4 GELANG WARNA \n");
        printf("\t\t===============================================\n");
    }

void header5()
    {
        printf("\t\t===============================================\n");
        printf("\t\t  PERHITUNGAN NILAI RESISTANSI 5 GELANG WARNA  \n");
        printf("\t\t===============================================\n");
    }

void ulang()
    {
        char yn;
        scanf("%c", &yn);
        {
            switch (yn)
            {
                case 'y' : menu(); break;
                case 'Y' : menu(); break;
                case 'n' : system("cls"); printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
                case 'N' : system("cls"); printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
                default : {  printf("   Kembali ke menu utama? [y/n] : ");  ulang();  }
            }
        }
    }


void hitungkembali()
    {
        char ljt;
        scanf("%c", &ljt);
        {
            switch (ljt)
            {
                case 'y' : gelang4(); break;
                case 'Y' : gelang4(); break;
                case 'n' : menu(); break;
                case 'N' : menu(); break;
                default : {  printf("   Apakah ingin memasukkan data kembali? [y/n] : ");  hitungkembali();  }
            }
        }
    }

void hitungkembali5()
    {
        char htg;
        scanf("%c", &htg);
        {
        switch (htg)
        {
            case 'y' : gelang5(); break;
            case 'Y' : gelang5(); break;
            case 'n' : menu(); break;
            case 'N' : menu(); break;
            default : {  printf("   Apakah ingin memasukkan data kembali? [y/n] : ");  hitungkembali5();  }
        }
        }
    }

void gelang4()
    {
        int g,h;
        int  a,b,c,d,j,p,m,r;
        float maks, min,tol,maks1, min1,tol1,maks2, min2,tol2;
        float res,res1,res2,resT,arus,volt,v,u,resTP,vp;

        system("cls");
        header4();
        head();

        loop1:
        printf("\t\t\t \n silahkan pilih 1 resistor atau 2 resistor ? [1/2] ");
        scanf ("%d",&p);
        printf("\n");

        if (p>2)
                {
                printf("\t\t\t kode salah!\n\n");
                goto loop1;
                }
        if (p==1)
        {
            loop2:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop2;
            }
            loop3:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop3;
            }
            loop4:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);

            switch (c) //penyeleksian kondisi pada gelang ketiga
            {
            case 0 : g=a*(pow(10,1));h=b*(pow(10,0));break;
            case 1 : g=a*(pow(10,2));h=b*(pow(10,1));break;
            case 2 : g=a*(pow(10,3));h=b*(pow(10,2));break;
            case 3 : g=a*(pow(10,4));h=b*(pow(10,3));break;
            case 4 : g=a*(pow(10,5));h=b*(pow(10,4));break;
            case 5 : g=a*(pow(10,6));h=b*(pow(10,5));break;
            case 6 : g=a*(pow(10,7));h=b*(pow(10,6));break;
            case 7 : g=a*(pow(10,8));h=b*(pow(10,7));break;
            case 8 : g=a*(pow(10,9));h=b*(pow(10,8));break;
            case 9 : g=a*(pow(10,10));h=b*(pow(10,9));break;
            case 10 : g=a*(pow(10,0));h=b*(pow(10,-1));break;
            case 11 : g=a*(pow(10,-1));h=b*(pow(10,-2));break;
            default : {printf("\t\t\t kode salah!\n"); goto loop4; }
            }

            loop5:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);
            if (d>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop5;
            }

            switch(d)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop5;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if (c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
                else if (c==9) printf("\t\t\t\t\t    3. Putih\n");
                else if(c==10) printf("\t\t\t\t\t     3. Emas\n");
                else printf("\t\t\t\t\t     3. Perak\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if (d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else if(d==11) printf("\t\t\t\t\t     4. Perak\n");
                else printf("\t\t\t\t\t   4. T.berwarna\n");
            printf("                                           :-------------:\n");
            res=g+h; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks=res+(tol/100*res); //penghitungan nilai maksimum
            min=res-(tol/100*res); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi                       = %.0f Ohm\n", res); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n ");

            loop6:
            printf(" tekan (1) untuk menghitung voltage \n");
            printf(" tekan (2) untuk menghitung arus \n");
            printf(" tekan (3) untuk keluar program \n");
            printf(" silahkan pilih : [1/2/3]  ");
            scanf ("%d",&m);
            if (m>3)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop6;
            }
            if (m==1)
            {
                    system ("cls");
                    printf ("\t\t\t menghitung voltage total \n\n\n");
                    printf ("   rumus mencari V (voltage) total adalah V=IxR \n");
                    printf ("   jika ingin mencari voltage total maka kita harus \n");
                    printf ("   menginput besarnya nilai arus yang masuk pada rangkaian \n\n\n");


                    printf ("\n   masukkan nilai arus: ");
                    scanf  ("%f",&arus);
                    printf ("\n\   maka: \n");
                    printf ("   Arus        : %.3f A\n",arus);
                    printf ("   R           : %.0f ohm\n",res);
                    v=arus*res;
                    printf ("   volt total  : %.3f volt\n",v);
            }

            if (m==2)
            {
                    system ("cls");
                    printf ("\t\t\t  menghitung arus total \n\n\n");
                    printf ("   rumus mencari I (arus) total adalah I=V/R \n");
                    printf ("   jika ingin mencari arus maka kita harus \n");
                    printf ("   menginput besarnya nilai voltage yang masuk pada rangkaian \n\n\n");

                    printf ("\n   masukkan nilai voltage: ");
                    scanf  ("%f",&volt);
                    printf ("\n\   maka: \n");
                    printf ("   Voltage         : %.3f volt\n",volt);
                    printf ("   R               : %.0f ohm\n",res);
                    u=(volt)/(res);
                    printf ("   arus total      : %.3f A\n",u);
            }
            if (m==3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
            }
            printf("\n\n");
            hitungkembali();
        }


        if (p==2)
        {
            printf("   ________________\n");
            printf("   resistor 1 \n");
            printf("   ----------------\n");
            loop7:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop7;
            }
            loop8:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop8;
            }
            loop9:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);

            switch (c) //penyeleksian kondisi pada gelang ketiga
            {
            case 0 : g=a*(pow(10,1));h=b*(pow(10,0));break;
            case 1 : g=a*(pow(10,2));h=b*(pow(10,1));break;
            case 2 : g=a*(pow(10,3));h=b*(pow(10,2));break;
            case 3 : g=a*(pow(10,4));h=b*(pow(10,3));break;
            case 4 : g=a*(pow(10,5));h=b*(pow(10,4));break;
            case 5 : g=a*(pow(10,6));h=b*(pow(10,5));break;
            case 6 : g=a*(pow(10,7));h=b*(pow(10,6));break;
            case 7 : g=a*(pow(10,8));h=b*(pow(10,7));break;
            case 8 : g=a*(pow(10,9));h=b*(pow(10,8));break;
            case 9 : g=a*(pow(10,10));h=b*(pow(10,9));break;
            case 10 : g=a*(pow(10,0));h=b*(pow(10,-1));break;
            case 11 : g=a*(pow(10,-1));h=b*(pow(10,-2));break;
            default : {printf("\t\t\t kode salah!\n"); goto loop9; }
            }

            loop10:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);
            if (d>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop10;
            }

            switch(d)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop10;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if (c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
                else if (c==9) printf("\t\t\t\t\t    3. Putih\n");
                else if(c==10) printf("\t\t\t\t\t     3. Emas\n");
                else printf("\t\t\t\t\t     3. Perak\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if (d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else if(d==11) printf("\t\t\t\t\t     4. Perak\n");
                else printf("\t\t\t\t\t   4. T.berwarna\n");
            printf("                                           :-------------:\n");
            res1=g+h; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol1=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks1=res1+(tol1/100*res1); //penghitungan nilai maksimum
            min1=res1-(tol1/100*res1); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi R 1                   = %.0f Ohm\n", res1); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol1); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks1); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min1); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n");

            printf("   ________________\n");
            printf("   resistor 2 \n");
            printf("   ----------------\n");
            loop11:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop11;
            }
            loop12:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop12;
            }
            loop13:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);

            switch (c) //penyeleksian kondisi pada gelang ketiga
            {
            case 0 : g=a*(pow(10,1));h=b*(pow(10,0));break;
            case 1 : g=a*(pow(10,2));h=b*(pow(10,1));break;
            case 2 : g=a*(pow(10,3));h=b*(pow(10,2));break;
            case 3 : g=a*(pow(10,4));h=b*(pow(10,3));break;
            case 4 : g=a*(pow(10,5));h=b*(pow(10,4));break;
            case 5 : g=a*(pow(10,6));h=b*(pow(10,5));break;
            case 6 : g=a*(pow(10,7));h=b*(pow(10,6));break;
            case 7 : g=a*(pow(10,8));h=b*(pow(10,7));break;
            case 8 : g=a*(pow(10,9));h=b*(pow(10,8));break;
            case 9 : g=a*(pow(10,10));h=b*(pow(10,9));break;
            case 10 : g=a*(pow(10,0));h=b*(pow(10,-1));break;
            case 11 : g=a*(pow(10,-1));h=b*(pow(10,-2));break;
            default : {printf("\t\t\t kode salah!\n"); goto loop13; }
            }

            loop14:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);
            if (d>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop14;
            }

            switch(d)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop14;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if (c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
                else if (c==9) printf("\t\t\t\t\t    3. Putih\n");
                else if(c==10) printf("\t\t\t\t\t     3. Emas\n");
                else printf("\t\t\t\t\t     3. Perak\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if (d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else if(d==11) printf("\t\t\t\t\t     4. Perak\n");
                else printf("\t\t\t\t\t   4. T.berwarna\n");
            printf("                                           :-------------:\n");
            res2=g+h; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol2=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks2=res2+(tol2/100*res2); //penghitungan nilai maksimum
            min2=res2-(tol2/100*res2); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi R 2                   = %.0f Ohm\n", res2); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol2); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks2); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min2); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n ");
            printf("   R 1 : %.0f ohm \n",res1);
            printf("   R 2 : %.0f ohm \n\n\n",res2);

            loop15:
            printf(" tekan (1) untuk menghitung voltage \n");
            printf(" tekan (2) untuk menghitung arus \n");
            printf(" tekan (3) untuk keluar program \n");
            printf(" silahkan pilih : [1/2/3]  ");
            scanf ("%d",&m);
            if (m>3)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop15;
            }
            if (m==3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);

            }
            if (m==1)
            {
                system ("cls");
                printf ("\t\t\t menghitung voltage total \n\n\n");
                printf (" rumus mencari V (voltage) total adalah V=IxR \n");
                printf (" jika ingin mencari voltage total maka kita harus \n");
                printf (" menginput besarnya nilai arus yang masuk pada rangkaian \n\n\n");
                printf (" rangkaian apa yang akan dibuat? \n");

                loop16:
                printf ("\n tekan (1) untuk rangkaian SERI dan tekan (2) untuk rangkaian PARALEL :[1/2] ");
                scanf ("%d",&r);

                system ("cls");

                printf ("\t\t\t menghitung voltage total \n\n\n");
                if (r>2)
                    {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop16;
                    }
                if (r==1)
                {
                    printf ("   rangkaian SERI \n\n");
                    printf ("   --------------- \n");
                    resT=res1+res2;
                    printf("\n   masukkan nilai arus: ");
                    scanf ("%f",&arus);
                    printf ("\n   maka: \n");
                    printf ("   Arus         : %.3f A\n",arus);
                    printf ("   R 1          : %.0f ohm\n",res1);
                    printf ("   R 2          : %.0f ohm\n",res2);
                    printf ("   R total      : %.0f ohm\n",resT);
                    v=arus*resT;
                    printf("   volt total   : %.3f volt\n",v);
                }
                if (r==2)
                {
                    printf ("   rangkaian PARALEL \n\n");
                    printf ("   ------------------ \n");
                    resTP=(res1*res2)/(res1+res2);
                    printf("\n   masukkan nilai arus: ");
                    scanf ("%f",&arus);
                    printf ("\n   maka: \n");
                    printf ("   Arus         : %.3f A\n",arus);
                    printf ("   R 1          : %.0f ohm\n",res1);
                    printf ("   R 2          : %.0f ohm\n",res2);
                    printf ("   R total      : %.0f ohm\n",resTP);
                    vp=arus*resTP;
                    printf("   volt total   : %.3f volt\n",vp);
                }
            }

            if (m==2)
            {
                    system ("cls");
                    printf ("\t\t\t menghitung arus total \n\n\n");
                    printf (" rumus mencari I (arus) total adalah I=V/R \n");
                    printf (" jika ingin mencari arus maka kita harus \n");
                    printf (" menginput besarnya nilai voltage yang masuk pada rangkaian \n\n\n");
                    printf (" rangkaian apa yang akan dibuat? \n");

                    loop17:
                    printf ("\n tekan (1) untuk rangkaian SERI dan tekan (2) untuk rangkaian PARALEL :[1/2] ");
                    scanf ("%d",&r);

                    system ("cls");

                    printf ("\t\t\t menghitung arus total \n\n\n");
                    if (r>2)
                        {
                        printf("\t\t\t kode salah!\n\n");
                        goto loop17;
                        }
                    if (r==1)
                    {
                        printf ("   rangkaian SERI \n\n");
                        printf ("   --------------- \n");
                        resT=res1+res2;
                        printf("\n   masukkan nilai voltage: ");
                        scanf ("%f",&volt);
                        printf ("\n   maka: \n");
                        printf ("   Voltage      : %.3f volt\n",volt);
                        printf ("   R 1          : %.0f ohm\n",res1);
                        printf ("   R 2          : %.0f ohm\n",res2);
                        printf ("   R total      : %.0f ohm\n",resT);
                        u=(volt)/(resT);
                        printf("   arus total   : %.3f A\n",u);
                    }
                    if (r==2)
                    {
                        printf ("   rangkaian PARALEL \n\n");
                        printf ("   ------------------ \n");
                        resTP=(res1*res2)/(res1+res2);
                        printf("\n   masukkan nilai voltage: ");
                        scanf ("%f",&volt);
                        printf ("\n   maka: \n");
                        printf ("   Voltage      : %.3f volt\n",volt);
                        printf ("   R 1          : %.0f ohm\n",res1);
                        printf ("   R 2          : %.0f ohm\n",res2);
                        printf ("   R total      : %.0f ohm\n",resTP);
                        u=(volt)/(resTP);
                        printf("   arus total   : %.3f A\n",u);
                    }
            }
            printf("\n\n");
            hitungkembali();
        }
    }



void gelang5()
    {

        int x,y,z;
        int e;
        int g,h;
        int  a,b,c,d,j,p,m,r;
        float maks, min,tol,maks1, min1,tol1,maks2, min2,tol2;
        float res,res1,res2,resT,arus,volt,v,u,resTP,vp;

        system("cls");
        header5();
        head();

        loop1:
        printf("\t\t\t \n silahkan pilih 1 resistor atau 2 resistor ? [1/2] ");
        scanf ("%d",&p);
        printf("\n");
        if (p>2)
                {
                printf("\t\t\t kode salah!\n\n");
                goto loop1;
                }
        if (p==1)
        {
            loop2:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop2;
            }
            loop3:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop3;
            }
            loop4:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);
            if (c>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop4;
            }
            loop5:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);

            switch (d) //penyeleksian kondisi pada gelang ketiga
            {
                case 0 : x=a*(pow(10,2));y=b*(pow(10,1));z=c*(pow(10,0));break;
                case 1 : x=a*(pow(10,3));y=b*(pow(10,2));z=c*(pow(10,1));break;
                case 2 : x=a*(pow(10,4));y=b*(pow(10,3));z=c*(pow(10,2));break;
                case 3 : x=a*(pow(10,5));y=b*(pow(10,4));z=c*(pow(10,3));break;
                case 4 : x=a*(pow(10,6));y=b*(pow(10,5));z=c*(pow(10,4));break;
                case 5 : x=a*(pow(10,7));y=b*(pow(10,6));z=c*(pow(10,5));break;
                case 6 : x=a*(pow(10,8));y=b*(pow(10,7));z=c*(pow(10,6));break;
                case 7 : x=a*(pow(10,9));y=b*(pow(10,8));z=c*(pow(10,7));break;
                case 8 : x=a*(pow(10,10));y=b*(pow(10,9));z=c*(pow(10,8));break;
                case 9 : x=a*(pow(10,11));y=b*(pow(10,10));z=c*(pow(10,9));break;
                case 10 : x=a*(pow(10,1));y=b*(pow(10,0));z=c*(pow(10,-1));break;
                case 11 : x=a*(pow(10,0));y=b*(pow(10,-1));z=c*(pow(10,-2));break;
                default : {printf("\t\t\t kode salah!\n"); goto loop5; }
            }


            loop6:
            printf("\t\t\t Masukkan Kode Gelang 5 = ");
            scanf("%d",&e);
            if (e>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop6;
            }

            switch(e)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop6;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     1. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if(c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if(d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==4) printf("\t\t\t\t\t     4. Kuning\n");
                else if(d==5) printf("\t\t\t\t\t     4. Hijau\n");
                else if(d==6) printf("\t\t\t\t\t     4. Biru\n");
                else if(d==7) printf("\t\t\t\t\t     4. Ungu\n");
                else if(d==8) printf("\t\t\t\t\t     4. Abu-abu\n");
                else if (d==9) printf("\t\t\t\t\t     4. Putih\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else printf("\t\t\t\t\t     4. Perak\n");
            if  (e == 0) printf("\t\t\t\t\t     5. Hitam\n");
                else if(e == 1) printf("\t\t\t\t\t     5. Cokelat\n");
                else if (e==2) printf("\t\t\t\t\t     5. Merah\n");
                else if(e==3) printf("\t\t\t\t\t     5. Orange\n");
                else if(e==10) printf("\t\t\t\t\t     5. Emas\n");
                else if(e==11) printf("\t\t\t\t\t     5. Perak\n");
                else printf("\t\t\t\t\t   5. T.berwarna\n");
            printf("                                           :------------:\n");
            res=x+y+z; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks=res+(tol/100*res); //penghitungan nilai maksimum
            min=res-(tol/100*res); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi                       = %.0f Ohm\n", res); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n ");

            loop7:
            printf(" tekan (1) untuk menghitung voltage \n");
            printf(" tekan (2) untuk menghitung arus \n");
            printf(" tekan (3) untuk keluar program \n");
            printf(" silahkan pilih : [1/2/3]  ");
            scanf ("%d",&m);
            if (m>3)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop7;
            }
            if (m==1)
            {
                    system ("cls");
                    printf ("\t\t\t menghitung voltage total \n\n\n");
                    printf ("   rumus mencari V (voltage) total adalah V=IxR \n");
                    printf ("   jika ingin mencari voltage total maka kita harus \n");
                    printf ("   menginput besarnya nilai arus yang masuk pada rangkaian \n\n\n");


                    printf ("\n   masukkan nilai arus: ");
                    scanf  ("%f",&arus);
                    printf ("\n\   maka: \n");
                    printf ("   Arus        : %.3f A\n",arus);
                    printf ("   R           : %.0f ohm\n",res);
                    v=arus*res;
                    printf ("   volt total  : %.3f volt\n",v);
            }

            if (m==2)
            {
                    system ("cls");
                    printf ("\t\t\t  menghitung arus total \n\n\n");
                    printf ("   rumus mencari I (arus) total adalah I=V/R \n");
                    printf ("   jika ingin mencari arus maka kita harus \n");
                    printf ("   menginput besarnya nilai voltage yang masuk pada rangkaian \n\n\n");

                    printf ("\n   masukkan nilai voltage: ");
                    scanf  ("%f",&volt);
                    printf ("\n\   maka: \n");
                    printf ("   Voltage         : %.3f volt\n",volt);
                    printf ("   R               : %.0f ohm\n",res);
                    u=(volt)/(res);
                    printf ("   arus total      : %.3f A\n",u);
            }
            if (m==3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);
            }
            printf("\n\n");
            hitungkembali5();
        }

        if (p==2)
        {
            printf("   ___________\n");
            printf("   resistor 1 \n");
            printf("   -----------\n");
            loop8:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop8;
            }
            loop9:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop9;
            }
            loop10:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);
            if (c>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop10;
            }
            loop11:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);

            switch (d) //penyeleksian kondisi pada gelang ketiga
            {
                case 0 : x=a*(pow(10,2));y=b*(pow(10,1));z=c*(pow(10,0));break;
                case 1 : x=a*(pow(10,3));y=b*(pow(10,2));z=c*(pow(10,1));break;
                case 2 : x=a*(pow(10,4));y=b*(pow(10,3));z=c*(pow(10,2));break;
                case 3 : x=a*(pow(10,5));y=b*(pow(10,4));z=c*(pow(10,3));break;
                case 4 : x=a*(pow(10,6));y=b*(pow(10,5));z=c*(pow(10,4));break;
                case 5 : x=a*(pow(10,7));y=b*(pow(10,6));z=c*(pow(10,5));break;
                case 6 : x=a*(pow(10,8));y=b*(pow(10,7));z=c*(pow(10,6));break;
                case 7 : x=a*(pow(10,9));y=b*(pow(10,8));z=c*(pow(10,7));break;
                case 8 : x=a*(pow(10,10));y=b*(pow(10,9));z=c*(pow(10,8));break;
                case 9 : x=a*(pow(10,11));y=b*(pow(10,10));z=c*(pow(10,9));break;
                case 10 : x=a*(pow(10,1));y=b*(pow(10,0));z=c*(pow(10,-1));break;
                case 11 : x=a*(pow(10,0));y=b*(pow(10,-1));z=c*(pow(10,-2));break;
                default : {printf("\t\t\t kode salah!\n"); goto loop11; }
            }


            loop12:
            printf("\t\t\t Masukkan Kode Gelang 5 = ");
            scanf("%d",&e);
            if (e>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop12;
            }

            switch(e)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop12;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     1. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if(c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if(d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==4) printf("\t\t\t\t\t     4. Kuning\n");
                else if(d==5) printf("\t\t\t\t\t     4. Hijau\n");
                else if(d==6) printf("\t\t\t\t\t     4. Biru\n");
                else if(d==7) printf("\t\t\t\t\t     4. Ungu\n");
                else if(d==8) printf("\t\t\t\t\t     4. Abu-abu\n");
                else if (d==9) printf("\t\t\t\t\t     4. Putih\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else printf("\t\t\t\t\t     4. Perak\n");
            if  (e == 0) printf("\t\t\t\t\t     5. Hitam\n");
                else if(e == 1) printf("\t\t\t\t\t     5. Cokelat\n");
                else if (e==2) printf("\t\t\t\t\t     5. Merah\n");
                else if(e==3) printf("\t\t\t\t\t     5. Orange\n");
                else if(e==10) printf("\t\t\t\t\t     5. Emas\n");
                else if(e==11) printf("\t\t\t\t\t     5. Perak\n");
                else printf("\t\t\t\t\t   5. T.berwarna\n");
            printf("                                           :------------:\n");
            res1=x+y+z; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol1=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks1=res1+(tol1/100*res1); //penghitungan nilai maksimum
            min1=res1-(tol1/100*res1); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi R 1                   = %.0f Ohm\n", res1); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol1); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks1); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min1); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n ");

            printf("   ___________\n");
            printf("   resistor 2 \n");
            printf("   -----------\n");

            loop13:
            printf("\t\t\t Masukkan Kode Gelang 1 = ");
            scanf("%d",&a);

            if (a>9 || a==0)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop13;
            }
            loop14:
            printf("\t\t\t Masukkan Kode Gelang 2 = ");
            scanf("%d",&b);
            if (b>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop14;
            }
            loop15:
            printf("\t\t\t Masukkan Kode Gelang 3 = ");
            scanf("%d",&c);
            if (c>9)
            {
            printf("\t\t\t kode salah!\n\n");
            goto loop15;
            }
            loop16:
            printf("\t\t\t Masukkan Kode Gelang 4 = ");
            scanf("%d",&d);

            switch (d) //penyeleksian kondisi pada gelang ketiga
            {
                case 0  : x=a*(pow(10,2));y=b*(pow(10,1));z=c*(pow(10,0));break;
                case 1  : x=a*(pow(10,3));y=b*(pow(10,2));z=c*(pow(10,1));break;
                case 2  : x=a*(pow(10,4));y=b*(pow(10,3));z=c*(pow(10,2));break;
                case 3  : x=a*(pow(10,5));y=b*(pow(10,4));z=c*(pow(10,3));break;
                case 4  : x=a*(pow(10,6));y=b*(pow(10,5));z=c*(pow(10,4));break;
                case 5  : x=a*(pow(10,7));y=b*(pow(10,6));z=c*(pow(10,5));break;
                case 6  : x=a*(pow(10,8));y=b*(pow(10,7));z=c*(pow(10,6));break;
                case 7  : x=a*(pow(10,9));y=b*(pow(10,8));z=c*(pow(10,7));break;
                case 8  : x=a*(pow(10,10));y=b*(pow(10,9));z=c*(pow(10,8));break;
                case 9  : x=a*(pow(10,11));y=b*(pow(10,10));z=c*(pow(10,9));break;
                case 10 : x=a*(pow(10,1));y=b*(pow(10,0));z=c*(pow(10,-1));break;
                case 11 : x=a*(pow(10,0));y=b*(pow(10,-1));z=c*(pow(10,-2));break;
                default : {printf("\t\t\t kode salah!\n"); goto loop16; }
            }


            loop17:
            printf("\t\t\t Masukkan Kode Gelang 5 = ");
            scanf("%d",&e);
            if (e>12)
            {
            printf("\t\t\t nilai toleransi salah !\n\n");
            goto loop17;
            }

            switch(e)
            {
            case 10: j= 5; break;
            case 11: j = 10; break;
            case 12: j = 20; break;
            case 0: j = 1; break;
            case 1: j = 2; break;
            case 2: j = 3; break;
            case 3: j = 4; break;
            default : printf("\t\t\t nilai toleransi salah !\n\n"); goto loop17;
            }

            //Cetak warna gelang
            printf(" \n  Warna gelang yang anda inputkan adalah :  -------------:\n");
            if (a == 1) printf("\t\t\t\t\t     1. Cokelat\n");
                else if (a==2) printf("\t\t\t\t\t     1. Merah\n");
                else if(a==3) printf("\t\t\t\t\t     1. Orange\n");
                else if(a==4) printf("\t\t\t\t\t     1. Kuning\n");
                else if(a==5) printf("\t\t\t\t\t     1. Hijau\n");
                else if(a==6) printf("\t\t\t\t\t     1. Biru\n");
                else if(a==7) printf("\t\t\t\t\t     1. Ungu\n");
                else if(a==8) printf("\t\t\t\t\t     1. Abu-abu\n");
                else printf("\t\t\t\t\t     1. Putih\n");
            if  (b == 0) printf("\t\t\t\t\t     2. Hitam\n");
                else if(b == 1) printf("\t\t\t\t\t     2. Cokelat\n");
                else if (b==2) printf("\t\t\t\t\t     2. Merah\n");
                else if(b==3) printf("\t\t\t\t\t     2. Orange\n");
                else if(b==4) printf("\t\t\t\t\t     2. Kuning\n");
                else if(b==5) printf("\t\t\t\t\t     2. Hijau\n");
                else if(b==6) printf("\t\t\t\t\t     2. Biru\n");
                else if(b==7) printf("\t\t\t\t\t     2. Ungu\n");
                else if(b==8) printf("\t\t\t\t\t     2. Abu-abu\n");
                else printf("\t\t\t\t\t     2. Putih\n");
            if  (c == 0) printf("\t\t\t\t\t     3. Hitam\n");
                else if(c == 1) printf("\t\t\t\t\t     3. Cokelat\n");
                else if(c==2) printf("\t\t\t\t\t     3. Merah\n");
                else if(c==3) printf("\t\t\t\t\t     3. Orange\n");
                else if(c==4) printf("\t\t\t\t\t     3. Kuning\n");
                else if(c==5) printf("\t\t\t\t\t     3. Hijau\n");
                else if(c==6) printf("\t\t\t\t\t     3. Biru\n");
                else if(c==7) printf("\t\t\t\t\t     3. Ungu\n");
                else if(c==8) printf("\t\t\t\t\t     3. Abu-abu\n");
            if  (d == 0) printf("\t\t\t\t\t     4. Hitam\n");
                else if(d == 1) printf("\t\t\t\t\t     4. Cokelat\n");
                else if(d==2) printf("\t\t\t\t\t     4. Merah\n");
                else if(d==3) printf("\t\t\t\t\t     4. Orange\n");
                else if(d==4) printf("\t\t\t\t\t     4. Kuning\n");
                else if(d==5) printf("\t\t\t\t\t     4. Hijau\n");
                else if(d==6) printf("\t\t\t\t\t     4. Biru\n");
                else if(d==7) printf("\t\t\t\t\t     4. Ungu\n");
                else if(d==8) printf("\t\t\t\t\t     4. Abu-abu\n");
                else if (d==9) printf("\t\t\t\t\t     4. Putih\n");
                else if(d==10) printf("\t\t\t\t\t     4. Emas\n");
                else printf("\t\t\t\t\t     4. Perak\n");
            if  (e == 0) printf("\t\t\t\t\t     5. Hitam\n");
                else if(e == 1) printf("\t\t\t\t\t     5. Cokelat\n");
                else if (e==2) printf("\t\t\t\t\t     5. Merah\n");
                else if(e==3) printf("\t\t\t\t\t     5. Orange\n");
                else if(e==10) printf("\t\t\t\t\t     5. Emas\n");
                else if(e==11) printf("\t\t\t\t\t     5. Perak\n");
                else printf("\t\t\t\t\t   5. T.berwarna\n");
            printf("                                           :------------:\n");
            res2=x+y+z; //penghitungan nilai dengan menjumlahkan variabel g dan h
            tol2=j; //assigment pada variabel tol dengan nilai yang ada pada variabel j
            maks2=res2+(tol2/100*res2); //penghitungan nilai maksimum
            min2=res2-(tol2/100*res2); //penghitungan nilai minimum
            puts(" \n ==================================**************==============================");
            puts("   Cetak Hasil perhitungan:");
            puts("  ----------------------------------------------------------------------------");
            printf("   Nilai Resistansi R 2                   = %.0f Ohm\n", res2); //nilai hambatan
            printf("   Toleransi                              = %.0f %%\n", tol2); //mencetak nilai toleransi
            printf("   Batas Atas  (+)                        = %.0f Ohm\n", maks2); //mencetak nilai maksimum
            printf("   Batas Bawah (-)                        = %.0f Ohm\n\n", min2); //mencetak nilai minimum
            puts(" ==================================**************==============================\n\n ");

            printf("   R 1 : %.0f ohm \n",res1);
            printf("   R 2 : %.0f ohm \n\n\n",res2);

            loop18:
            printf(" tekan (1) untuk menghitung voltage \n");
            printf(" tekan (2) untuk menghitung arus \n");
            printf(" tekan (3) untuk keluar program \n");
            printf(" silahkan pilih : [1/2/3]  ");
            scanf ("%d",&m);
            if (m>3)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop18;
            }
            if (m==3)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);

            }
            if (m==1)
            {
                system ("cls");
                printf ("\t\t\t menghitung voltage total \n\n\n");
                printf (" rumus mencari V (voltage) total adalah V=IxR \n");
                printf (" jika ingin mencari voltage total maka kita harus \n");
                printf (" menginput besarnya nilai arus yang masuk pada rangkaian \n\n\n");
                printf (" rangkaian apa yang akan dibuat? \n");

                loop19:
                printf ("\n tekan (1) untuk rangkaian SERI dan tekan (2) untuk rangkaian PARALEL :[1/2] ");
                scanf ("%d",&r);

                system ("cls");

                printf ("\t\t\t menghitung voltage total \n\n\n");
                if (r>2)
                    {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop19;
                    }
                if (r==1)
                {
                    printf ("   rangkaian SERI \n\n");
                    printf ("   --------------- \n");
                    resT=res1+res2;
                    printf("\n   masukkan nilai arus: ");
                    scanf ("%f",&arus);
                    printf ("\n   maka: \n");
                    printf ("   Arus         : %.3f A\n",arus);
                    printf ("   R 1          : %.0f ohm\n",res1);
                    printf ("   R 2          : %.0f ohm\n",res2);
                    printf ("   R total      : %.0f ohm\n",resT);
                    v=arus*resT;
                    printf("   volt total   : %.3f volt\n",v);
                }
                if (r==2)
                {
                    printf ("   rangkaian PARALEL \n\n");
                    printf ("   ------------------ \n");
                    resTP=(res1*res2)/(res1+res2);
                    printf("\n   masukkan nilai arus: ");
                    scanf ("%f",&arus);
                    printf ("\n   maka: \n");
                    printf ("   Arus         : %.3f A\n",arus);
                    printf ("   R 1          : %.0f ohm\n",res1);
                    printf ("   R 2          : %.0f ohm\n",res2);
                    printf ("   R total      : %.0f ohm\n",resTP);
                    vp=arus*resTP;
                    printf("   volt total   : %.3f volt\n",vp);
                }
            }

            if (m==2)
            {
                    system ("cls");
                    printf ("\t\t\t menghitung arus total \n\n\n");
                    printf (" rumus mencari I (arus) total adalah I=V/R \n");
                    printf (" jika ingin mencari arus maka kita harus \n");
                    printf (" menginput besarnya nilai voltage yang masuk pada rangkaian \n\n\n");
                    printf (" rangkaian apa yang akan dibuat? \n");

                    loop20:
                    printf ("\n tekan (1) untuk rangkaian SERI dan tekan (2) untuk rangkaian PARALEL :[1/2] ");
                    scanf ("%d",&r);

                    system ("cls");

                    printf ("\t\t\t menghitung arus total \n\n\n");
                    if (r>2)
                        {
                        printf("\t\t\t kode salah!\n\n");
                        goto loop20;
                        }
                    if (r==1)
                    {
                        printf ("   rangkaian SERI \n\n");
                        printf ("   --------------- \n");
                        resT=res1+res2;
                        printf("\n   masukkan nilai voltage: ");
                        scanf ("%f",&volt);
                        printf ("\n   maka: \n");
                        printf ("   Voltage      : %.3f volt\n",volt);
                        printf ("   R 1          : %.0f ohm\n",res1);
                        printf ("   R 2          : %.0f ohm\n",res2);
                        printf ("   R total      : %.0f ohm\n",resT);
                        u=(volt)/(resT);
                        printf("   arus total   : %.3f A\n",u);
                    }
                    if (r==2)
                    {
                        printf ("   rangkaian PARALEL \n\n");
                        printf ("   ------------------ \n");
                        resTP=(res1*res2)/(res1+res2);
                        printf("\n   masukkan nilai voltage: ");
                        scanf ("%f",&volt);
                        printf ("\n   maka: \n");
                        printf ("   Voltage      : %.3f volt\n",volt);
                        printf ("   R 1          : %.0f ohm\n",res1);
                        printf ("   R 2          : %.0f ohm\n",res2);
                        printf ("   R total      : %.0f ohm\n",resTP);
                        u=(volt)/(resTP);
                        printf("   arus total   : %.3f A\n",u);
                    }
            }
            printf("\n\n");
            hitungkembali5();
        }
    }

void cover()
{
    char w;
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf("                ---TUGAS BESAR ALGORITMA DAN DASAR PEMROGRAMAN---              \n");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================\n");
    printf(" \n\n");
    printf("                 -MENENTUKAN NILAI RESISTOR DENGAN GELANG WARNA-               \n");
    printf(" \n\n\n\n\n\n");
    printf("                              Disusun oleh :                                \n\n");
    printf("                   1.   Prahita Ratna N         (D400160001)                      \n");
    printf("                   2.   Syaefudhin              (D400160002)                      \n");
    printf("                   3.   Muhammad Rusdi Wibowo   (D400160003)                      \n");
    printf("                   4.   Muhammad Adnan          (D400160004)                      \n");
    printf(" \n\n\n\n\n\n\n\n");
    printf(" ______________________________________________________________________________\n");
    printf(" ==============================================================================   \n");
    printf("                             JURUSAN TEKNIK ELEKTRO                               \n");
    printf("                                 FAKULTAS TEKNIK                                  \n");
    printf("                       UNIVERSITAS MUHAMMADIYAH SURAKARTA                         \n");
    printf("                                      2016                                       \n");
    printf(" ______________________*************________*************______________________\n");
    printf(" ==============================================================================\n");
    printf("\n\n\n\n");
    loop7:
    printf(" tekan (1) untuk melanjutkan program \n");
    printf(" tekan (2) untuk keluar program \n");
    printf(" silahkan pilih : [1/2]  ");
    scanf ("%d",&w);
    if (w>2)
            {
                    printf("\t\t\t kode salah!\n\n");
                    goto loop7;
            }
            if (w==1)
            {
                menu();
            }
            if (w==2)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\t\t Terima Kasih telah menggunakan program ini...\n\n\n\n\n\n\n\n\n\n\n\n\n");return(0);

            }
}


