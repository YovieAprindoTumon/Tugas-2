#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int p,a, b;
void main()
{
    system("cls");
    printf("<=========================>\n");
    printf("<=    Tugas Kakulator    =>\n");
    printf("<=========================>\n");
    printf(" \n1.PingPoroLanSudo * / + -");
    printf(" \n2.SinCosTan");
    printf(" \n3.Hitung Keliling dan Luas");
    printf(" \n4.Hitung Akar Kuadrat");
    printf(" \n5.Exit");
    printf("\n<=========================>");
    printf("\nMasukan Pilihan :");
    scanf("%d",&p);
    switch(p) {
        case 1:
            menu1();
            break;
        case 2:
            menu2();
            break;
        case 3:
            menu3();
            break;
        case 4:
            akar();
            break;
        case 5:
            keluar();
            break;
        default:
            system("cls");
            printf(" INPUT ANDA SALAH PANTEK!\n");
            printf(" Tekan ENTER...");
            getch();
            main();

    }
}
void keluar(){
    system("cls");
    printf(" <================================>\n");
    printf("  =        TY MASBRO HEHE;)     =\n");
    printf(" <================================>\n\n");
    printf(" Tekan ENTER...");
    getch();
}
void menu1(){
    system("cls");
    printf(" <===================>\n");
    printf(" <= PingPoroLanSudo =>\n");
    printf(" <===================>\n");
    printf(" 1. Perkalian x  \n");
    printf(" 2. Pembagian  : \n");
    printf(" 3. Penjumlahan +\n");
    printf(" 4. Pengurangan -\n");
    printf(" 0. kembali       \n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            perkalian();
            break;
        case 2:
            pembagian();
            break;
        case 3:
            penjumlahan();
            break;
        case 4:
            pengurangan();
            break;
        case 0:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT ANDA SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            main();
   }
}
void perkalian(){
    system("cls");
    float angka1,angka2,hasil;
    printf(" <==================>\n");
    printf(" <=    Perkalian   =>\n");
    printf(" <==================>\n\n");
	printf(" Input Angka Pertama    = ");
	scanf("%f",&angka1);
	printf(" Input Angka Kedua      = ");
	scanf("%f",&angka2);
	hasil = angka1 * angka2;
	printf("\n Hasil dari Perkalian   = %d\n\n",hasil);
	printf(" Tekan ENTER...");
	getch();
	lagikali();
}
void lagikali(){
    system("cls");
    int coba;
    printf(" <===================>\n");
    printf(" <=    ULANG BANG?  =>    \n");
    printf(" <===================>\n");
    printf(" 1. Yaa\n");
    printf(" 0. KEMBALI\n");
    printf(" ==================\n");
    printf(" PILIHAN : ");
    scanf("%d",&coba);
    switch(coba){
        case 1:
            perkalian();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            lagikali();
}
}
void pembagian(){
    system("cls");
    float angka1,angka2,hasil;
    printf(" <==================>\n");
    printf(" <=   Pembagian    =>\n");
    printf(" <==================>\n\n");

	printf(" Input Angka Pertama  = ");
	scanf("%f",&angka1);

	printf(" Input Angka Kedua    = ");
	scanf("%f",&angka2);

	hasil = angka1 / angka2;
	printf("\n Hasil dari Pembagian = %.2f\n\n",hasil);
    printf(" Tekan ENTER...");
	getch();
	dibaginya();
}
void dibaginya(){
    system("cls");
    int dibagi;
    printf(" <==================>\n");
    printf(" <=   ULANG BANG?  =>    \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&dibagi);
    switch(dibagi){
        case 1:
            pembagian();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            dibaginya();
    }
}
void penjumlahan(){
    system("cls");
    int angka1,angka2,hasil;
    printf(" <==================>\n");
    printf(" <=  Penjumlahan   =>\n");
    printf(" <==================>\n\n");
	printf(" Input Angka Pertama    = ");
	scanf("%d",&angka1);
	printf(" Input Angka Kedua      = ");
	scanf("%d",&angka2);
	hasil = angka1+angka2;
	printf("\n Hasil dari Penjumlahan  %d + %d = %d\n\n",angka1,angka2,hasil);
    printf(" Tekan ENTER...");
	getch();
	jmlh();
}
void jmlh(){
    system("cls");
    int jml;
    printf(" <==================>\n");
    printf(" <=   ULANG BANG?  =>     \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&jml);
    switch(jml){
        case 1:
            penjumlahan();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            jmlh();
    }

}
void pengurangan(){
    system("cls");
    int angka1,angka2,hasil;
    printf(" <==================>\n");
    printf(" <   Pengurangan   => \n");
    printf(" <==================>\n\n");

	printf(" Input angka pertama    = ");
	scanf("%d",&angka1);

	printf(" Input angka kedua      = ");
	scanf("%d",&angka2);

	hasil = angka1 - angka2;
	printf("\n Hasil dari Pengurangan = %d\n\n",hasil);
    printf(" Press ENTER to continue...");
	getch();
	krng();
}
void krng(){
    system("cls");
    int kurang;
    printf(" <==================>\n");
    printf(" <=   ULANG BANG?  =>   \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&kurang);
    switch(kurang){
        case 1:
            pengurangan();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            krng();
    }
}
void menu2()
{
    system("cls");
    printf(" <==================>\n");
    printf("  =    SinCosTan   = \n");
    printf(" <==================>\n");
    printf(" 1. Sinus          \n");
    printf(" 2. Cosinus        \n");
    printf(" 3. Tangen         \n");
    printf(" 0. KEMBALI        \n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&b);
    switch(b){
        case 1:
            sinuss();
            break;
        case 2:
            cosin();
            break;
        case 3:
            tang();
            break;
        case 0:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            menu2();
    }
}
void sinuss(){
    system("cls");
    printf(" <==================>\n");
    printf("  =      Sinus     = \n");
    printf(" <==================>\n\n");
    double x,sin_x;
    printf(" Input derajat sinus = ");
    scanf("%lf",&x);
    sin_x=sin(x);
    printf(" Hasil sin           (%lf) = %lf\n\n",x,sin_x);
    printf(" Tekan ENTER...");
    getch();
    sinn();
}

void sinn()
{
    system("cls");
    int tsin;
    printf(" <==================>\n");
    printf("  =   ULANG BANG?  =     \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tsin);
    switch(tsin){
        case 1:
            sinuss();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            sinn();
}
}
void cosin(){
   system("cls");
    printf(" <==================>\n");
    printf("  =     Cosinus    = \n");
    printf(" <==================>\n\n");
    double x,cos_x;
    printf(" Input derajat cosinus = ");
    scanf("%lf",&x);
    cos_x = cos(x);
    printf(" Hasil cos         (%lf) = %lf,x\n\n",x,cos_x);
    printf(" Tekan ENTER...");
    getch();
    costanya();
}

void costanya()
{
    system("cls");
    int tcos;
    printf(" <==================>\n");
    printf("  =   ULANG BANG?  =   \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" ==================\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tcos);
    switch(tcos){
        case 1:
            cosin();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            costanya();
    }
}
void tang(){
system("cls");
double x,tan_x;
    printf(" <==================>\n");
    printf("  =     Tangen     = \n");
    printf(" <==================>\n\n");
    printf(" Input derajat tangen = ");
    scanf("%lf",&x);
    tan_x = tan(x);
    printf(" Hasil tan          (%lf)  = %lf,x\n\n",x,tan_x);
    printf(" Tekan ENTER...");
    getch();
    ttang();
}

void ttang()
{
    system("cls");
    int ttan;
    printf(" <==================>\n");
    printf("  =   ULANG BANG?  =     \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&ttan);
    switch(ttan){
        case 1:
            tang();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            ttang();
    }
}
void menu3(){
    int c;
    system("cls");
    printf(" <==============================>\n");
    printf("      Keliling Luas Volume     \n");
    printf(" <==============================>\n");
    printf(" 1. Keliling Bangun Datar      \n");
    printf(" 2. Luas Bangun Datar          \n");
    printf(" 3. Volume Bangun Ruang        \n");
    printf(" 0. KEMBALI                    \n");
    printf(" <==============================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&c);
    switch(c){
        case 1:
            keliling();
            break;
        case 2:
            luas();
            break;
        case 3:
            volu();
            break;
        case 0:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan Enter...");
            getch();
            menu3();
    }
}
void keliling(){
int mk;
     system("cls");
    printf(" <==============================>\n");
    printf("      Keliling Bangun Datar    \n");
    printf(" <==============================>\n");
    printf(" 1. Persegi                    \n");
    printf(" 2. Trapesium                  \n");
    printf(" 3. Layang-layang              \n");
    printf(" 4. Lingkaran                  \n");
    printf(" 0. KEMBALI                    \n");
    printf(" <==============================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&mk);
    switch(mk){
        case 1:
            kelp();
            break;
        case 2:
            ktrp();
            break;
        case 3:
            klyg();
            break;
        case 4:
            klng();
            break;
        case 0:
            menu3();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            menu3();
    }
}
void kelp(){
    system("cls");
    float k,m;
    printf(" <============================>\n");
    printf("       Keliling Persegi      \n");
    printf(" <============================>\n\n");
    printf(" Input panjang sisi = ");
    scanf("%f", &k);
    m = 4 * k;
    printf(" Keliling persegi   = %.2f\n\n",m);
    printf(" Tekan ENTER...");
    getch();
    kpsgtanya();
}
void kpsgtanya(){
system("cls");
    int tkpsg;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tkpsg);
    switch(tkpsg){
        case 1:
            kelp();
            break;
        case 0:
            keliling();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            kpsgtanya();
}
}
void ktrp()
{
    system("cls");
    float s1, s2, s3, s4, k;
    printf(" ============================\n");
    printf("      Keliling Trapesium      \n");
    printf(" ============================\n\n");
    printf(" Input panjang sisi pertama = ");
    scanf("%f", &s1);
    printf(" Input panjang sisi kedua   = ");
    scanf("%f", &s2);
    printf(" Input panjang sisi ketiga  = ");
    scanf("%f", &s3);
    printf(" Input panjang sisi keempat = ");
    scanf("%f", &s4);
    k = s1 + s2 + s3 + s4;
    printf("\n Keliling trapesium         = %.2f\n\n", k);
    printf(" Tekan ENTER...");
    getch();
    ktrptanya();
}
void ktrptanya()
{
    system("cls");
    int tktrp;
    printf(" ==================\n");
    printf("       ULANG BANG?      \n");
    printf(" ==================\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" ==================\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tktrp);
    switch(tktrp){
        case 1:
            ktrp();
            break;
        case 0:
            keliling();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Press ENTER to continue...");
            getch();
            ktrptanya();
    }
}
void klyg()
{
    system("cls");
    float s_a, s_b, k;
    printf(" =================================\n");
    printf("      Keliling Layang-layang      \n");
    printf(" =================================\n\n");
    printf(" Input panjang diagonal pertama = ");
    scanf("%f", &s_a);
    printf(" Input panjang diagonal kedua   = ");
    scanf("%f", &s_b);
    k = 2 * (s_a + s_b);
    printf("\n Keliling layang-layang        = %.2f\n\n",k);
    printf(" Press ENTER to continue...");
    getch();
    klygtanya();
}
void klygtanya()
{
    system("cls");
    int tklyg;
    printf(" ==================\n");
    printf("       ULANG BANG?      \n");
    printf(" ==================\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" ==================\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tklyg);
    switch(tklyg){
        case 1:
            klyg();
            break;
        case 0:
            keliling();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            klygtanya();
    }
}
void klng()
{
    system("cls");
    float j, k;
    printf(" <===============================>\n");
    printf("        Keliling Lingkaran      \n");
    printf(" <===============================>\n\n");
    const float phi = 3.14;
    printf(" Input panjang jari-jari = ");
    scanf("%f", &j);
    k = 2 * phi * j;
    printf(" Keliling lingkaran      = %.2f\n",k);
    printf(" Tekan ENTER...");
    getch();
    klngtanya();
}

void klngtanya()
{
    system("cls");
    int tklng;
    printf(" <==================>\n");
    printf("  *   ULANG BANG?  *    \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tklng);
    switch(tklng){
        case 1:
            klng();
            break;
        case 0:
            keliling();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            klngtanya();
    }
}
void luas(){
    int m4;
    system("cls");
    printf(" <==============================>\n");
    printf("        Luas Bangun Datar      \n");
    printf(" <==============================>\n");
    printf(" 1. Persegi                    \n");
    printf(" 2. Trapesium                  \n");
    printf(" 3. Layang-layang              \n");
    printf(" 4. Lingkaran                  \n");
    printf(" 0. KEMBALI                    \n");
    printf(" <==============================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&m4);
    switch(m4){
        case 1:
            lpsg();
            break;
        case 2:
            ltrp();
            break;
        case 3:
            llyg();
            break;
        case 4:
            llng();
            break;
        case 0:
            menu3();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            luas();
    }
}
void lpsg()
{
    system("cls");
    float s, l;
    printf(" <===========================>\n");
    printf("        Luas Persegi      \n");
    printf(" <===========================>\n\n");
    printf(" Input panjang sisi = ");
    scanf("%f", &s);
    l = s * s;
    printf(" Luas persegi       = %.2f\n\n",l);
    printf(" Press ENTER to continue...");
    getch();
    lpsgtanya();
}

void lpsgtanya()
{
    system("cls");
    int tlpsg;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tlpsg);
    switch(tlpsg){
        case 1:
            lpsg();
            break;
        case 0:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            lpsgtanya();
    }
}
void ltrp()
{
    system("cls");
    float a1, a2, t, l;
    printf(" <===========================>\n");
    printf("        Luas Trapesium      \n");
    printf(" <===========================>\n\n");
    printf(" Input panjang alas bawah = ");
    scanf("%f", &a1);
    printf(" Input panjang alas atas  = ");
    scanf("%f", &a2);
    printf(" Input panjang tinggi     = ");
    scanf("%f", &t);
    l = 0.5 * (a1 + a2) * t;
    printf("\n Luas trapesium              = %.2f\n\n", l);
    printf(" Tekan ENTER...");
    getch();
    ltrptanya();
}

void ltrptanya()
{
    system("cls");
    int tltrp;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tltrp);
    switch(tltrp){
        case 1:
            ltrp();
            break;
        case 0:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            ltrptanya();
    }
}
void llyg()
{
    system("cls");
    float d1, d2, l;
    printf(" <===============================>\n");
    printf("        Luas Layang-layang      \n");
    printf(" <===============================>\n\n");
    printf(" Input panjang diagonal pertama = ");
    scanf("%f", &d1);
    printf(" Input panjang diagonal kedua   = ");
    scanf("%f", &d2);
    l = 0.5 * d1 * d2;
    printf("\n Luas layang-layang           = %.2f\n\n",l);
    printf(" Tekan ENTER...");
    getch();
    llygtanya();
}

void llygtanya()
{
    system("cls");
    int tllyg;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tllyg);
    switch(tllyg){
        case 1:
            llyg();
            break;
        case 0:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            llygtanya();
    }
}
void llng()
{
    system("cls");
    float j, l;
    printf(" <===========================>\n");
    printf("        Luas Lingkaran      \n");
    printf(" <===========================>\n\n");
    const float phi = 3.14;
    printf(" Input panjang jari-jari = ");
    scanf("%f", &j);
    l = phi * j * j;
    printf(" Luas lingkaran          = %.2f\n\n",l);
    printf(" Tekan ENTER...");
    getch();
    llngtanya();
}

void llngtanya()
{
    system("cls");
    int tllng;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tllng);
    switch(tllng){
        case 1:
            llng();
            break;
        case 0:
            luas();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            llngtanya();
    }
}
void volu()
{
    int mv;
    system("cls");
    printf(" <==============================>\n");
    printf("  =     Volume Bangun Ruang    = \n");
    printf(" <==============================>\n");
    printf(" 1. Kubus                      \n");
    printf(" 2. Prisma                     \n");
    printf(" 3. Limas                      \n");
    printf(" 4. Bola                       \n");
    printf(" 0. KEMBALI                    \n");
    printf(" <==============================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&mv);
    switch(mv){
        case 1:
            vkubs();
            break;
        case 2:
            vpris();
            break;
        case 3:
            vlim();
            break;
        case 4:
            vbol();
            break;
        case 0:
            menu3();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            volu();
    }
}
void vkubs()
{
    system("cls");
    float s, v;
    printf(" <=========================>\n");
    printf("        Volume Kubus      \n");
    printf(" <=========================>\n\n");
    printf(" Input panjang sisi kubus = ");
    scanf("%f", &s);
    v = s * s * s;
    printf(" Volume kubus             = %.2f\n\n", v);
    printf(" Tekan ENTER...");
    getch();
    vkubtanya();
}

void vkubtanya()
{
    system("cls");
    int tvkub;
    printf(" <==================>\n");
    printf("      ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tvkub);
    switch(tvkub){
        case 1:
            vkubs();
            break;
        case 0:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            vkubtanya();
    }
}
void vpris()
{
    system("cls");
    float a, t_a, t_p, v;
    printf(" <========================>\n");
    printf("       Volume Prisma     \n");
    printf(" <========================>\n\n");
    printf(" Input panjang alas segitiga = ");
    scanf("%f", &a);
    printf(" Input tinggi alas segitiga  = ");
    scanf("%f", &t_a);
    printf(" Input tinggi prisma         = ");
    scanf("%f", &t_p);
    v = 0.5 * a * t_a * t_p;
    printf("\n Volume prisma segitiga      = %.2f\n\n",v);
    printf(" Tekan ENTER...");
    getch();
    vprista();
}

void vprista()
{
    system("cls");
    int tvpris;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tvpris);
    switch(tvpris){
        case 1:
            vpris();
            break;
        case 0:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            vprista();
    }
}
void vlim()
{
    system("cls");
    float a, t_a, t_l, v;
    printf(" <=========================>\n");
    printf("        Volume Limas      \n");
    printf(" <=========================>\n\n");
    printf(" Input panjang alas segitiga = ");
    scanf("%f", &a);
    printf(" Input tinggi alas segitiga  = ");
    scanf("%f", &t_a);
    printf(" Input tinggi limas          = ");
    scanf("%f", &t_l);
    v = 0.33 * a * t_a * t_l;
    printf("\n Volume limas segitiga       = %.2f\n\n", v);
    printf(" Tekan ENTER...");
    getch();
    vlimta();
}

void vlimta()
{
    system("cls");
    int tvlim;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tvlim);
    switch(tvlim){
        case 1:
            vlim();
            break;
        case 0:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            vlimta();
    }
}

void vbol()
{
    system("cls");
    float j, v;
    printf(" <========================>\n");
    printf("        Volume Bola      \n");
    printf(" <========================>\n\n");
    const float phi = 3.14;
    printf(" Input panjang jari-jari bola = ");
    scanf("%f", &j);
    v = 4.0 / 3.0 * phi * j * j * j;
    printf(" Volume bola                  = %.2f\n\n",v);
    printf(" Tekan ENTER...");
    getch();
    vboltanya();
}

void vboltanya()
{
    system("cls");
    int tvbol;
    printf(" <==================>\n");
    printf("       ULANG BANG?      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&tvbol);
    switch(tvbol){
        case 1:
            vbol();
            break;
        case 0:
            volu();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            vboltanya();
    }
}
void akar()
{
    system("cls");
    float n,r;
    printf(" <==================>\n");
    printf("  =  Akar Kuadrat  = \n");
    printf(" <==================>\n\n");
    printf(" Input bilangan akar = ");
    scanf("%f",&n);
    r = sqrt(n);
    printf(" Hasil akar %.2f     =%2.f\n\n",n,r);
    printf(" Tekan ENTER...");
    getch();
    akd();
}

void akd()
{
    system("cls");
    int aktanya;
    printf(" <==================>\n");
    printf("  =   ULANG BANG?  =      \n");
    printf(" <==================>\n");
    printf(" 1. Ya\n");
    printf(" 0. KEMBALI\n");
    printf(" <==================>\n");
    printf(" PILIHAN ANGKA: ");
    scanf("%d",&aktanya);
    switch(aktanya){
        case 1:
            akar();
            break;
        case 0:
            main();
            break;
        default:
            system("cls");
            printf(" INPUT SALAH!\n");
            printf(" Tekan ENTER...");
            getch();
            akd();
    }
}









