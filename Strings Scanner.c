#include<stdio.h>
#include<string.h>
#include<windows.h>

int main() {
    FILE* inFile;

    // String list
    char* a= "/AVIX-Config";
    char* b= "trumpclientftw_bape";
    char* c= "dg82fo.pw";
    char* d= "nG@W";
    char* e= "G0ttaDipMen.java";
    char* f= "Harambe.png";
    char* g= "czaarek99";
    char* h= "+(M0G.V";
    char* i= "dinkio";
    char* l= "Sa_Vc";
    char* m= "5d@56";
    char* n= "TCNH$1";
    char* o= "onetap.cc";
    char* p= "bspkrs.IlIIIlIlIllIIlllIllIllIII";
    char* q= "com/sun/jna/z/Main";
    char* r= "/a.class:::0";
    char* s= "hi.a2";
    char* t= "0SO1Lk2KASxzsd";
    char* u= "yCcADi";
    char* v= "74.91.125.194";
    char* w= "kc(g9";
    char* x= "kc((k";
    char* y= "JNativeHook";
    char* k= "144.217.241.181";
    char* j= "/tcpnodelaymod/COM1";
    char a1[256];
    int flag = 0;

    printf("Strings Scanner for injection clients by DonTopoGigio_\nWait a few seconds...\n");

    // Opening file
    if((inFile = fopen("Search results.txt", "r"))==NULL) {
        fprintf(stderr, "errore nell'apertura del file\n");
    }

    // Searching string
    while(fgets(a1,255,inFile)) {
        if (strstr(a1, a)!=NULL) {
            printf("AVIX Client found\n"); // AVIX a
            flag = 1;
            break; }
        if (strstr(a1, w)!=NULL) {
            printf("Vape Premium Client found\n"); // kc(g9 w
            flag = 1;
            break; }
        if (strstr(a1, b)!=NULL) {
            printf("Bape Client found\n"); // TrumpClient b
            flag = 1;
            break; }
        if (strstr(a1, c)!=NULL) {
            printf("Drek Client found\n"); // dg82fo.pw c
            flag = 1;
            break; }
        if (strstr(a1, d)!=NULL) {
            printf("Fusk Client found\n"); // nG@W d
            flag = 1;
            break; }
        if (strstr(a1, e)!=NULL) {
            printf("Gucci Client found\n"); // G0ttaDipMen.java e
            flag = 1;
            break; }
        if (strstr(a1, f)!=NULL) {
            printf("Harambe Client found\n"); //Harambe.png f
            flag = 1;
            break; }
        if (strstr(a1, g)!=NULL) {
            printf("Incognito Client found\n"); // czaarek99 g
            flag = 1;
            break; }
        if (strstr(a1, h)!=NULL) {
            printf("Hillary Rodham Clinton Client found\n"); // +(M0G.V h
            flag = 1;
            break; }
        if (strstr(a1, i)!=NULL) {
            printf("Kurium Client found\n"); // dinkio i
            flag = 1;
            break; }
        if (strstr(a1, l)!=NULL) {
            printf("Merge Client found\n"); // Sa_Vc l
            flag = 1;
            break; }
        if (strstr(a1, m)!=NULL) {
            printf("Merge Client found\n"); // 5d@56 m
            flag = 1;
            break; }
        if (strstr(a1, n)!=NULL) {
            printf("Motion Blur Misplace Client found\n"); // TCNH$1 n
            flag = 1;
            break; }
        if (strstr(a1, o)!=NULL) {
            printf("Onetap Client found\n"); // onetap.cc o
            flag = 1;
            break; }
        if (strstr(a1, p)!=NULL) {
            printf("Spooky Client found\n"); // bspkrs.IlIIIlIlIllIIlllIllIllIII p
            flag = 1;
            break; }
        if (strstr(a1, q)!=NULL) {
            printf("Vape 2.06 Client found\n"); // com/sun/jna/z/Main q
            flag = 1;
            break; }
        if (strstr(a1, r)!=NULL) {
            printf("Time Changer Misplace Client found\n"); // a.class:::0 r
            flag = 1;
            break; }
        if (strstr(a1, s)!=NULL) {
            printf("Veiv Client found\n"); // hi.a2 s
            flag = 1;
            break; }
        if (strstr(a1, t)!=NULL) {
            printf("Zuiy Client found\n"); // 0SO1Lk2KASxzsd t
            flag = 1;
            break; }
        if (strstr(a1, u)!=NULL) {
            printf("Vape 2.47 Client found\n"); // yCcADi u
            flag = 1;
            break; }
        if (strstr(a1, v)!=NULL) {
            printf("Vape 2.50 Client found\n"); // 74.91.125.194 v
            flag = 1;
            break; }
        if (strstr(a1, x)!=NULL) {
            printf("Premium Vape Client found\n"); // kc((k x
            flag = 1;
            break; }
        if (strstr(a1, y)!=NULL) {
            printf("Autoclicker found\n"); // JNativeHook y
            flag = 1;
            break; }
        if (strstr(a1, k)!=NULL) {
            printf("Vape Lite client found\n"); // 144.217.241.181 k
            flag = 1;
            break; }
        if (strstr(a1, j)!=NULL) {
            printf("Vea Client found\n"); // tcpnodelaymod/COM1 j
            flag = 1;
            break; }
        }

    // Check if nothing has been found
    if (flag!=1) {
        printf("Nothing Found");
    }

    // Closing file
    fclose(inFile);

    system("PAUSE");
}
