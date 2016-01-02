//
//  Gradebook.h
//  GradeBook Arrays
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Gradebook Arrays. All rights reserved.
//

#ifndef Gradebook_h
#define Gradebook_h
#include <array>
#include <string>
using namespace std;


class GradeBook{
    public:
    
    static const size_t students = 10;
    
    GradeBook(const std::string &, const std::array<int, students> &);
    
    
    void setCourseName(const std::string &);
    string getCourseName()const;
    
    void displayMessage()const;
    void processGrades()const;
    int getMinimum()const;
    int getMaximum()const;
    double getAverage()const;
    void OutputBarChart()const;
    void outputGrades()const;
    
    
    
    
    
    private:
    
    std::string courseName;
    std::array<int, students >grades;
    
};


#endif /* Gradebook_h */
