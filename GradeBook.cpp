
//
//  GradeBook.cpp
//  GradeBook Arrays
//
//  Created by newuser on 1/2/16.
//  Copyright © 2016 Gradebook Arrays. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include<iomanip>
#include "GradeBook.h"

using namespace std;


GradeBook::GradeBook (const string &name, const array<int, students>&gradesArray)
: courseName(name), grades(gradesArray)
{
    
}

void GradeBook::setCourseName(const string &name)
{
    courseName = name;
    
}

string GradeBook::getCourseName()const


{
    return courseName;
    
}

void GradeBook::displayMessage()const{
    cout<<"welcome to gradebook for\n" << getCourseName()<< "!"
    <<endl;
    
}

void GradeBook::processGrades()const
{
    outputGrades();
    
    cout<<setprecision(2)<<fixed;
    cout<<"nClass average is" <<getAverage() <<endl;
    
    cout<<"lowest grade is" <<getMinimum() <<"nHighest Grade is " <<getMaximum() <<endl;
    
    OutputBarChart();
}


int GradeBook::getMinimum()const
{
    int lowGrade = 100;
    
    
    for(int grade: grades)
    {
        
        if(grade < lowGrade)
            lowGrade = grade;
        
    }
    
    return lowGrade;
}

int GradeBook::getMaximum()const{
    
    int highGrade = 0;
    
    for(int grade: grades){
        
        if(grade > highGrade)
            highGrade = grade;

    }
    
    

    return highGrade;
}

double GradeBook::getAverage()const
{
    int total = 0;
    for (int grade: grades)
        total += grade;
    
        

    return static_cast<double>(total) /grades.size();
}

void GradeBook::OutputBarChart()const
{
    cout<<"\nGrade distribution:" <<endl;
    
    const size_t freuencySize = 11;
    array<unsigned int, freuencySize> frequency = {};
    
    
    for(int grade :grades)
        ++frequency[grade /10];
    
    
    for(size_t  count = 0; count <freuencySize; ++count)
    {
        if (0 == count)
            cout<<"0-9";
        else
            cout<< count * 10 << "-" << (count * 10) + 9 <<":";
        
        
        for(unsigned int stars =0; stars < frequency[count];++stars)
            cout<<'*';
        
        cout<<endl;
        
        

        
    }
}


void GradeBook::outputGrades()const
{
    cout<<"\nThe grades are:\n\n";
    
    for(size_t student =0; student < grades.size(); ++student)
        cout<<"Student" <<setw(2) <<student + 1 << ":" <<setw(3)
        <<grades[student]<<endl;
    
}
