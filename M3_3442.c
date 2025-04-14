//sorawit chaithong 67070503442
#include <stdio.h>
#include <string.h>
#include <math.h>
#define max 1000

struct subject{
    char code[7];
    char subject_name[30];
    double credit;
    double grade;
} subject[max];

int main(){
    struct subject subject[] = {
        {"T31101", "Thai", 1.0, 3.5},
        {"M31101", "Math1", 1.0, 4},
        {"M31201", "Sub math1", 2.0, 3.5},
        {"S31101", "Astronomy and Space", 1.5, 3},
        {"S31102", "Physics", 1.5, 3},
        {"S31103", "Chemistry", 1.5, 3},
        {"S31104", "Biology", 1.5, 4},
        {"S31111", "Computer", 1.0, 4},
        {"S31281", "Research", 0.5, 4},
        {"H31101", "social studies", 1.0, 3},
        {"H31201", "citizen job", 0.5, 4},
        {"P31101", "health education1", 0.5, 4},
        {"P31201", "physical education1", 0.5, 4},
        {"A31101", "Art1", 0.5, 4},
        {"O31102", "Occupation2", 0.5, 4},
        {"E30206", "English for mass communication", 1.0, 4},
        {"E31101", "English1", 1.0, 4},
        {"E31201", "English listen and speak1", 0.5, 4},
        //s2
        {"T31102", "Thai2", 1.0, 4},
        {"M31102", "Math2", 1.0, 4},
        {"M31202", "Sub math2", 2.0, 4},
        {"S30281", "I-Robot", 1.0, 4},
        {"S31201", "Physics1", 2.0, 3},
        {"S31221", "Chemistry1", 1.5, 4},
        {"S31241", "Biology1", 1.5, 4},
        {"S31282", "Research", 0.5, 4},
        {"S31291", "Design and technology", 1.0, 4},
        {"H31102", "Social studies2", 1.0, 4},
        {"H31202", "Citizen job", 0.5, 4},
        {"P31102", "Health education2", 0.5, 4},
        {"P31202", "Physical education2", 0.5, 4},
        {"A31102", "Art2", 0.5, 4},
        {"O31101", "Occupation1", 0.5, 4},
        {"E31102", "English2", 1.0, 4},
        {"E31202", "English listen and speak2", 0.5, 4},
        //m5
        {"T32101", "Thai3", 1.0, 4},
        {"M32101", "Math3", 1.0, 3.5},
        {"M32201", "Sub math3", 2.0, 3},
        {"S32291", "web dev", 1.0, 3.5},
        {"S32242", "Biology2", 1.5, 3},
        {"S32283", "Science project", 0.5, 3},
        {"S30202", "Physics engineer", 1.0, 4},
        {"S32202", "Physics2", 2.0, 2.5},
        {"S32202", "Chemistry2", 1.5, 3},
        {"H32101", "social studies3", 1.0, 4},
        {"H32103", "History1", 0.5, 4},
        {"H32201", "citizen job", 0.5, 4},
        {"P32201", "health education3", 0.5, 4},
        {"P32201", "physical education3", 0.5, 4},
        {"A32101", "Art3", 0.5, 4},
        {"O32102", "Occupation4", 0.5, 4},
        {"E32102", "English3", 1.0, 3.5},
        {"E32201", "English listen and speak3", 0.5, 4},
        {"C32221", "China", 0.5, 4},
        //m5s2
        {"T32102", "Thai4", 1.0, 4},
        {"M32102", "Math4", 1.0, 3},
        {"M32202", "Sub math4", 2.0, 3},
        {"S32203", "Physics3", 2.0, 4},
        {"S32243", "Biology3", 1.5, 3},
        {"S32284", "Science project", 0.5, 3.5},
        {"S32292", "Programing", 1.0, 4},
        {"S30222", "Chemistry factory", 1.0, 4},
        {"S32223", "Chemistry3", 1.5, 3.5},
        {"H32102", "social studies4", 1.0, 4},
        {"H32202", "citizen job", 0.5, 4},
        {"H32104", "History2", 0.5, 4},
        {"P32102", "health education4", 0.5, 4},
        {"P32202", "physical education2", 0.5, 4},
        {"A32102", "Art4", 0.5, 4},
        {"O32101", "Occupation3", 0.5, 4},
        {"E32102", "English4", 1.0, 4},
        {"E32202", "English listen and speak4", 0.5, 4},
        {"C32222", "China", 0.5, 3.5},
        //m6
        {"T33101", "Thai5", 1.0, 3.5},
        {"M33101", "Math5", 1.0, 4},
        {"M33201", "Sub math5", 2.0, 4},
        {"S30290", "IOT", 1.0, 4},
        {"S33224", "Chemistry4", 1.5, 3},
        {"S33291", "APPdev", 1.0, 4},
        {"S33204", "Physics4", 2.0, 2.5},
        {"S33244", "Biology4", 1.5, 3},
        {"S33285", "Science project", 0.5, 4},
        {"H33101", "social studies5", 1.0, 4},
        {"H33103", "History3", 0.5, 4},
        {"P33101", "health education", 0.5, 4},
        {"P33201", "physical education5", 0.5, 4},
        {"A33101", "Art5", 0.5, 4},
        {"E33101", "English5", 1.0, 4},
        {"E33201", "English listen and speak5", 0.5, 4},
        {"C33221", "China", 0.5, 4},
        {"I30201", "IS", 1.0, 4},
        //m6 2
        {"T33102", "Thai6", 1.0, 3.5},
        {"M33102", "Math6", 1.0, 4},
        {"M33202", "Sub math6", 2.0, 3},
        {"S30297", "Computer design", 1.0, 4},
        {"S30297", "Science project1", 1.0, 4},
        {"S33292", "Physics5", 2.0, 3},
        {"S33205", "Chemistry5", 1.5, 3.5},
        {"S33245", "Biology5", 1.5, 3},
        {"S33286", "Science for body", 0.5, 4},
        {"H33102", "social studies6", 1.0, 4},
        {"H33104", "History4", 0.5, 4},
        {"P33102", "health education", 0.5, 4},
        {"P33202", "physical education6", 0.5, 4},
        {"A33102", "Art6", 0.5, 4},
        {"E33102", "English6", 1.0, 4},
        {"E33202", "English listen and speak6", 0.5, 4},
        {"C33222", "China", 0.5, 4},
        {"I33202", "Present", 1.0, 4}

        


    };

    double GPA = 0, credit_GPA = 0;
    double sci_sum = 0, sci_credit = 0,math_sum = 0, math_credit = 0,eng_sum = 0,eng_credit = 0;
    int num_subjects = sizeof(subject) / sizeof(subject[0]);

    for(int i = 0; i < num_subjects; i++) {
        GPA += subject[i].credit * subject[i].grade;
        credit_GPA += subject[i].credit;
        
        if (strncmp(subject[i].code, "S", 1) == 0) {
            sci_sum += subject[i].credit * subject[i].grade;
            sci_credit += subject[i].credit;
        }
        if (strncmp(subject[i].code, "M", 1) == 0) {
            math_sum += subject[i].credit * subject[i].grade;
            math_credit += subject[i].credit;
        }
        if (strncmp(subject[i].code, "E", 1) == 0) {
            eng_sum += subject[i].credit * subject[i].grade;
            eng_credit += subject[i].credit;
        }
    }
    double ansGPA = GPA / credit_GPA;
    double anssci = sci_sum / sci_credit;
    double ansmath = math_sum / math_credit;
    double anseng = eng_sum / eng_credit;
    printf("math GPA: %.2lf\n",floor(ansmath * 100) / 100.0);
    printf("Science GPA: %.2lf\n",floor(anssci * 100) / 100.0);
    printf("English GPA: %.2lf\n",floor(anseng * 100) / 100.0);
    printf("GPA: %.2lf\n",floor(ansGPA * 100) / 100.0 );

    return 0;
}