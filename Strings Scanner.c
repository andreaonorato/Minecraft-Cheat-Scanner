#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 23

typedef struct {
    const char* string;
    const char* message;
} StringMessagePair;

// These are all the strings to find a cheat client
StringMessagePair stringMessages[MAX_STRINGS] = {
    {"/AVIX-Config", "AVIX Client found"},
    {"trumpclientftw_bape", "Bape Client found"},
    {"dg82fo.pw", "Drek Client found"},
    {"nG@W", "Fusk Client found"},
    {"G0ttaDipMen.java", "Gucci Client found"},
    {"Harambe.png", "Harambe Client found"},
    {"czaarek99", "Incognito Client found"},
    {"+(M0G.V", "Hillary Rodham Clinton Client found"},
    {"dinkio", "Kurium Client found"},
    {"Sa_Vc", "Merge Client found"},
    {"5d@56", "Merge Client found"},
    {"TCNH$1", "Motion Blur Misplace Client found"},
    {"onetap.cc", "Onetap Client found"},
    {"bspkrs.IlIIIlIlIllIIlllIllIllIII", "Spooky Client found"},
    {"com/sun/jna/z/Main", "Vape 2.06 Client found"},
    {"/a.class:::0", "Time Changer Misplace Client found"},
    {"hi.a2", "Veiv Client found"},
    {"0SO1Lk2KASxzsd", "Zuiy Client found"},
    {"yCcADi", "Vape 2.47 Client found"},
    {"74.91.125.194", "Vape 2.50 Client found"},
    {"kc((k", "Premium Vape Client found"},
    {"JNativeHook", "Autoclicker found"},
    {"144.217.241.181", "Vape Lite client found"},
    {"/tcpnodelaymod/COM1", "Vea Client found"}
};

int main() {
    FILE* inFile;
    char a1[256];
    int flag = 0;

    printf("Strings Scanner for injection clients by Andrea (DonTopoGigio_) \nWait a few seconds...\n");

    // Opening file
    if ((inFile = fopen("Search results.txt", "r")) == NULL) {
        fprintf(stderr, "Error opening the file\n");
        return 1;
    }

    // Searching string
    while (fgets(a1, 255, inFile)) {
        for (int i = 0; i < MAX_STRINGS; i++) {
            if (strstr(a1, stringMessages[i].string) != NULL) {
                printf("%s\n", stringMessages[i].message);
                flag = 1;
                break;
            }
        }

        if (flag) {
            break;
        }
    }

    // Check if nothing has been found
    if (flag != 1) {
        printf("Nothing Found");
    }

    // Closing file
    fclose(inFile);

    return 0;
}
