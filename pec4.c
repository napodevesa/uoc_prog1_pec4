/*pac4-pec4 solution */

#include <stdio.h>
#define MAX_PATIENTS 10

typedef enum { MALE, FEMALE } tGender;

int main(int argc, char **argv){
    int id[MAX_PATIENTS];
    int birthYear[MAX_PATIENTS];
    tGender gender[MAX_PATIENTS];
    float weight[MAX_PATIENTS];
    int height[MAX_PATIENTS];
    int numPatients;
    int i;
    
    printf("Number of patients to enter ?");
    scanf("%d", &numPatients);
    
    while(numPatients <= 0 || numPatients > MAX_PATIENTS) {
        printf("Invalid number of patients.");
        printf("Number of patients to enter ?");
        scanf("%d", &numPatients);
    }

    for(i = 0; i < numPatients; i++) {
        printf("Patient id: ");
        scanf("%d", &id[i]);
        printf("Patient birth year: ");
        scanf("%d", &birthYear[i]);
        printf("Patient gender (0 = MALE, 1 = FEMALE): ");
        scanf("%d", (int *) &gender[i]);
        printf("Patient weight [kg]: ");
        scanf("%f", &weight[i]);
        printf("Patient height [cm]: ");
        scanf("%d", &height[i]);
    }
    
    return 0;
}

