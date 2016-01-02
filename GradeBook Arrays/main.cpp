//
//  main.cpp
//  GradeBook Arrays
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Gradebook Arrays. All rights reserved.
//

#include <iostream>
#include<array>
#include<string>
#include "GradeBook.h"
using namespace std;


int main(int argc, const char * argv[]) {
    
    const array<int, GradeBook::students> grades = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    string courseName = "CS101 Introduction to C++ Progamming";
    
    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    return 0;
}
