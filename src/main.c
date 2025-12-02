// main.c
struct Department dept[6] = {

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
    }},

    {"ENT", {
        {"Dr. A. K. Nair",   "9 AM - 12 PM", 400},
        {"Dr. R. Chawla",    "1 PM - 4 PM", 500},
        {"Dr. M. Deshmukh",  "4 PM - 7 PM", 600}
    }},

    {"Pediatrics", {
        {"Dr. Prashant Jain", "10 AM - 1 PM", 1450},
        {"Dr. Ketan Parikh",  "2 PM - 5 PM", 1550},
        {"Dr. Baldeep Singh", "5 PM - 8 PM", 1650}
    }},

    {"Pulmonology", {
        {"Dr. S. Khanna",   "9 AM - 12 PM", 750}, 
        {"Dr. J. Patel",    "12 PM - 3 PM", 850},
        {"Dr. R. Saxena",   "3 PM - 6 PM", 950}
    }}
};
int opt;

while(1) { 
    printf("\n====== HOSPITAL MENU ======\n"); 
    printf("1. Register Patient\n");
    printf("2. Book
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


    
