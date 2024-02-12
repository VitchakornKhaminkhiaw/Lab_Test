#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Student {
    char firstname[30];
    char lastname[30];
    char id[11];
    double score;
};

typedef int cm;

typedef struct __Student Student;

void print_student(Student student);
void addScore(Student *student, double score);

int main(){
    Student students[10];
    struct __Student student;
    cm length = 18;

    strcpy(students[0].firstname, "John");
    sprintf(students[0].lastname, "%s", "Wick");
    strcpy(students[0].id, "6610451117");

    students[0].score = 200;
    addScore(students, 80);

    for (int i=1; i<10; ++i) {
        students[i].score = i * 10.5;
        sprintf(students[i].firstname, "First%d", i);
        sprintf(students[i].lastname, "Last%d", i);
        sprintf(students[i].id, "%010d", i);
    }

}
void print_student(Student student){
    printf("Name: %s %s (%s)\n", student.firstname, student.lastname, student.id);
    printf("Score: %2lf\n", student.score);
}

void addScore(Student* student, double score){
    if (score > 0){
        student->score += score;
    }
}
