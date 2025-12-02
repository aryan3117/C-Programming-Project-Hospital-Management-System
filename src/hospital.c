// hospital.c
#include "hospital.h"
#include <strings.h>   // for strcasecmp

struct Patient patientList[100];
int totalPatients = 0;

struct Appointment appList[100];
int totalApps = 0;

void addPatient() {
    printf("\n--- Register Patient ---\n");

    printf("Patient Name: ");
    scanf(" %[^\n]", patientList[totalPatients].name);

    printf("Age: ");
    scanf("%d", &patientList[totalPatients].age);

    printf("Gender: ");
    scanf(" %[^\n]", patientList[totalPatients].gender);

    printf("Problem: ");
    scanf(" %[^\n]", patientList[totalPatients].problem);

    totalPatients++;

    printf("-> Patient added successfully!\n");
}

void book(struct Department dept[], int n) {
    char pname[50];
    int dChoice, docChoice;

    printf("\n--- Book Appointment ---\n");
    printf("Enter patient name: ");
    scanf(" %[^\n]", pname);

    // Check if patient exists
    int ok = 0;
    for(int i = 0; i < totalPatients; i++) {
        if(strcmp(pname, patientList[i].name) == 0) {
            ok = 1;
            break;
        }
    }

    if(!ok) {
        printf("Patient not found. Please register first!\n");
        return;
    }

    printf("\nDepartments:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, dept[i].name);
    }

    printf("Choose: ");
    scanf("%d", &dChoice);
    dChoice--;

    if(dChoice < 0 || dChoice >= n) {
        printf("Invalid department!\n");
        return;
    }

    printf("\nAvailable Doctors in %s:\n", dept[dChoice].name);
    for(int i = 0; i < 3; i++) {
        printf("%d. %s (%s) - Rs.%d\n",
            i + 1,
            dept[dChoice].docs[i].name,
            dept[dChoice].docs[i].timing,
            dept[dChoice].docs[i].fee
        );
    }

    printf("Doctor No: ");
    scanf("%d", &docChoice);
    docChoice--;

    if(docChoice < 0 || docChoice >= 3) {
        printf("Invalid choice!\n");
        return;
    }

    // Save appointment
    strcpy(appList[totalApps].pName, pname);
    strcpy(appList[totalApps].dName, dept[dChoice].docs[docChoice].name);
    strcpy(appList[totalApps].slot, dept[dChoice].docs[docChoice].timing);
    appList[totalApps].fee = dept[dChoice].docs[docChoice].fee;
    strcpy(appList[totalApps].deptName, dept[dChoice].name);

    totalApps++;

    printf("\n-> Appointment booked successfully!\n");
    printf("Patient: %s\nDoctor: %s\nDepartment: %s\nTime: %s\nFee: Rs.%d\n",
        pname,
        dept[dChoice].docs[docChoice].name,
        dept[dChoice].name,
        dept[dChoice].docs[docChoice].timing,
        dept[dChoice].docs[docChoice].fee
    );
}

void findDoctor(struct Department dept[], int n) {
    char dname[50];

    printf("\n--- Search Doctor ---\n");
    printf("Enter doctor name: ");
    scanf(" %[^\n]", dname);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            if(strcasecmp(dname, dept[i].docs[j].name) == 0) {

                printf("\nDoctor Found!\n");
                printf("Name: %s\n", dept[i].docs[j].name);
                printf("Department: %s\n", dept[i].name);
                printf("Timing: %s\n", dept[i].docs[j].timing);
                printf("Fee: Rs.%d\n", dept[i].docs[j].fee);
                return;
            }
        }
    }

    printf("No such doctor found!\n");
}


