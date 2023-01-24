#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"


int main() {
    int s0=0, s1=0, S0=0, S1=0, i1=0, i2=0, o0=0, o1=0;
    while(true){
        if (S0==0 && S1==0){
            system("cls");
            printf("   +--^----------,--------,-----,--------^-,\n");
            printf("   | |||||||||   `--------'     |          O\n");
            printf("   `+---------------------------^----------|\n");
            printf("    `I_,---------,---------,--------------' \n");
            printf("      / XXXXXX /'|       /'                 \n");
            printf("     / XXXXXX /  `      /'                  \n");
            printf("    / XXXXXX /`-------'                     \n");
            printf("   / XXXXXX /                               \n");
            printf("  / XXXXXX /                                \n");
            printf(" (________(                                 \n");
            printf("The gun is idle\n");
            printf("Current state: %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("Input: %d%d\n", i1, i2);
            printf("\n");
        }
        else if (S0==0 && S1==1){
            system("cls");
            printf("   +--^----------,--------,-----,--------^-,       \n");
            printf("   | |||||||||   `--------'     |          O - - - \n");
            printf("   `+---------------------------^----------|       \n");
            printf("    `I_,---------,---------,--------------'        \n");
            printf("      / XXXXXX /'|       /'                        \n");
            printf("     / XXXXXX /  `      /'                         \n");
            printf("    / XXXXXX /`-------'                            \n");
            printf("   / XXXXXX /                                      \n");
            printf("  / XXXXXX /                                       \n");
            printf(" (________(                                        \n");
            printf("The gun is firing\n");
            printf("Current state: %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("Input: %d%d\n", i1, i2);
            printf("\n");
        }
        else if (S0==1 && S1==0){
            system("cls");
            printf("          Clack! Clack!    (no ammo sounds) \n");
            printf("   +--^----------,--------,-----,--------^-,\n");
            printf("   | |||||||||   `--------'     |          O\n");
            printf("   `+---------------------------^----------|\n");
            printf("    `I_,---------,---------,--------------' \n");
            printf("      / XXXXXX /'|       /'                 \n");
            printf("     / XXXXXX /  `      /'                  \n");
            printf("    / XXXXXX /`-------'                     \n");
            printf("   / XXXXXX /                               \n");
            printf("  / XXXXXX /                                \n");
            printf(" (________(                                 \n");
            printf("The gun is empty\n");
            printf("Current state: %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("Input: %d%d\n", i1, i2);
            printf("\n");
        }
        else if (S0==1 && S1==1){
            system("cls");
            printf("         +--^----------,--------,-----,--------^-,  \n");
            printf("         | |||||||||   `--------'     |          O  \n");
            printf("         `+---------------------------^----------|  \n");
            printf("          `I_,---------,---------,--------------'   \n");
            printf("            / XXXXXX /'|       /'                   \n");
            printf("           / XXXXXX /  `      /'                    \n");
            printf("          / XXXXXX /`-------'                       \n");
            printf("         / XXXXXX /                                 \n");
            printf("        / XXXXXX /                                  \n");
            printf("       (________(                                   \n");
            printf("       /  / /  /                                    \n");
            printf("      /  / /  /                                     \n");
            printf("     /  / /  /                                      \n");
            printf("    /  / /  /                                       \n");
            printf("    `------'                                        \n");
            printf("The gun is reloading\n");
            printf("Current state: %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("Input: %d%d\n", i1, i2);
            printf("\n");
        }

        printf("\nEnter an input (0(none), 1, 2, 3(both):");
        int input;
        scanf("%d", &input);
        if (input == 0){
            i1 = 0;
            i2 = 0;
        }
        else if (input == 1){
            i1 = 1;
            i2 = 0;
        }
        else if (input == 2){
            i1 = 0;
            i2 = 1;
        }
        else if (input == 3){
            i1 = 1;
            i2 = 1;
        }
        else{
            i1 = 0;
            i2 = 0;
        }
        
        state(s0, s1, i1, i2, &S0, &S1);
        s0 = S0;
        s1 = S1;
        output(s0, s1, &o0, &o1);
    }
    return 0;
}
