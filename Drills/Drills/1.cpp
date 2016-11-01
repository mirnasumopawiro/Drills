//
//  main.cpp
//  Drills
//
//  Created by Mirna Sumopawiro on 11/1/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

class Author
{
private:
    string name;
    string email;
    char gender;
    
public:
    Author (string name, string email, char gender)
    {
        name = " ";
        email = " ";
        gender = ' ';
    }
    
    string getName()
    {
        return name;
    }
    
    string getEmail()
    {
        return email;
    }
    
    void setEmail(string email)
    {
        this->email = email;
    }
    
    char getGender()
    {
        return gender;
    }
    
    string toString()
    {
        string message;
        return message;
    }
};













































