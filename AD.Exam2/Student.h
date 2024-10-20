#pragma once


#include <iostream>
#include <string>

class Student
{

private:

    std::string m_name;
    float m_gpa = 0;

public:

    Student()
    {
        m_name = "unknown";
        m_gpa = 0;
    }
    Student(const std::string name, const float gpa)
    {
        SetName(name);
        SetGpa(gpa);
    }

    // mutator methods (setters)
    void SetName(const std::string name) { m_name = name; }
    void SetGpa(const float gpa) { if (gpa >= 0) m_gpa = gpa; }

    std::string GetName() const { return m_name; }
    int GetGpa() const { return m_gpa; }

    void Display() const
    {
        std::cout << GetName() << " has a GPA of " << GetGpa() << ".";
    }

};
