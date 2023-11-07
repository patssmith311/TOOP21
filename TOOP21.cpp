//Patrick Smith TOOP 21

#include <iostream>
using namespace std; 

class grades
{
private:
    double grade1, grade2, grade3;

public:

void setGrade (double, double, double);

double average() {return (grade1+grade2+grade3)/3;}

};

void grades:: setGrade (double gradeA, double gradeB, double gradeC)
{   
    grade1 = gradeA;
    grade2 = gradeB;
    grade3 = gradeC;
}

int main()
{
    grades Cadet1;
    grades Cadet2;

    Cadet1.setGrade(95, 96, 92);
    Cadet2.setGrade(70,70,76);

    cout<< "Cadet1 Avg: "<<Cadet1.average()<<"\n";
    cout<< "Cadet2 Avg: "<<Cadet2.average()<<"\n";
    return 0;

}
