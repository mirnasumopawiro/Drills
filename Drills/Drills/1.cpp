//
//  main.cpp
//  Drills
//
//  Created by Mirna Sumopawiro on 11/1/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include <string>
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
    
    string toString(string name, string email, char gender)
    {
        return "Name: " + name + "\nEmail: " + email + "\nGender: " + gender + "\n";
    }
};

int main()
{
    string name;
    string email;
    char gender;
    
    cout << "Enter the author's details: \n";
    cout << "Name: " << endl;
    cin >> name;
    cout << "Email: " << endl;
    cin >> email;
    cout << "Gender (M/F): ";
    cin >> gender;
    
    
    Author data {name, email, gender};
    
    cout << data.toString(name, email, gender);
}











































