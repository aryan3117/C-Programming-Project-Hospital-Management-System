// main.c
#include "hospital.h"

int main() {

    struct Department dept[3] = {

        {"Cardiology", {
            {"Dr. A. Sharma", "10 AM - 1 PM", 500},
            {"Dr. R. Mehta",  "2 PM - 5 PM", 600},
            {"Dr. S. Verma",  "5 PM - 8 PM", 700}
        }},

        {"Orthopedics", {
            {"Dr. K. Gupta", "9 AM - 12 PM", 450},
            {"Dr. T. Singh", "1 PM - 4 PM", 550},
            {"Dr. V. Kumar", "4 PM - 7 PM", 650}
        }},

        {"Neurology", {
            {"Dr. N. Rana",    "10 AM - 12 PM", 700},
            {"Dr. H. Mahajan", "12 PM - 3 PM", 800},
            {"Dr. P. Joshi",   "3 PM - 6 PM", 900}
        }}
    };

    int opt;

    while(1) {
        printf("\n====== HOSPITAL MENU ======\n");
        printf("1. Register Patient\n");
        printf("2. Book Appointment\n");
        printf("3. Search Doctor\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &opt);

        if(opt == 1) addPatient();
        else if(opt == 2) book(dept, 3);
        else if(opt == 3) findDoctor(dept, 3);
        else if(opt == 4) {
            printf("Goodbye!\n");
            break;
        }
        else printf("Invalid!\n");
    }

    return 0;
}
