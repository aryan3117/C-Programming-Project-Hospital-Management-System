// hospital.h
#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <stdio.h>
#include <string.h>

struct Doctor {
    char name[50];
    char timing[30];
    int fee;
};

struct Department {
    char name[50];
    struct Doctor docs[3];
};

struct Patient {
    char name[50];
    int age;
    char gender[10];
    char problem[100];
};

extern struct Patient patientList[100];
extern int totalPatients;

struct Appointment {
    char pName[50];
    char dName[50];
    char slot[30];
    int fee;
};

extern struct Appointment appList[100];
extern int totalApps;

void addPatient();
void book(struct Department dept[], int n);
void findDoctor(struct Department dept[], int n);

#endif
