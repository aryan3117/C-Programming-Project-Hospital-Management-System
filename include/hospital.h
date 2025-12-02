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

struct Appointment {
    char patientName[50];
    char doctorName[50];
    char deptName[50];
};

extern struct Patient patientList[100];
extern int totalPatients;

void addPatient();
void book(struct Department dept[], int deptCount);
void findDoctor(struct Department dept[], int deptCount);

#endif
