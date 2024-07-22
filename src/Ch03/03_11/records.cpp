#include "records.h"

using namespace std;

Student::Student(int the_id, string the_name){
    id = the_id;
    name = the_name;
}
int Student::get_id() const{
    return id;
}
string Student::get_name() const{
    return name;
}
Course::Course(int the_id, string the_name, unsigned char the_credits){
    id = the_id;
    name = the_name;
    credits = the_credits;
}
int Course::get_id() const{
    return id;
}
string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}
Grade::Grade(int sid, int cid, char grd){
    int student_id = sid;
    int course_id = cid;
    char grade = grd;
}
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}