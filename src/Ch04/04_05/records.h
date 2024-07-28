#pragma once

#include <string>

/**class to create a student object takes student id and student name */
class Student{
private:
    int id;
    std::string name;

public:
    Student(int the_id, std::string the_name);
    int get_id() const;
    std::string get_name() const;
};
/**class to create an object of course takes course id, course name and credits for a course*/
class Course{
private:
    int id;
    std::string name;
    unsigned char credits;

public:
    Course(int the_id, std::string the_name, unsigned char the_credits);
    int get_id() const;
    std::string get_name() const;
    int get_credits() const;
};
/**class to create a grade object takes student id, course id and grade as a letter */
class Grade{
private:
    int student_id;
    int course_id;
    char grade;

public:
    Grade(int sid, int cid, char grd);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;
};
