//
//  3.cpp
//  Drills
//
//  Created by Mirna Sumopawiro on 11/2/16.
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
    Author()
    {
        
    }
    Author(string name, string email, char gender)
    {
        this-> name = name;
        this-> email = email;
        this->gender = gender;
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
        return "Name: " + name + "\nEmail: " + email + "\nGender: " + gender + "\n";
    }
    
};


class Book
{
private:
    string name;
    Author authors[2];
    double price;
    int qty;
public:
    Book (string name, Author authors[2], double price)
    {
        this->name = name;
        this->authors[2] = authors[2];
        this-price = price
        qty = 0;
    }
    Book (string name, Author author[2], double price, int qty)
    {
        this->name = name;
        this->authors[2] = authors[2];
        this->price = price;
        this->qty = qty;
    }
    string getName()
    {
        return name;
    }
    Author getAuthors
    double getPrice()
    {
        return price;
    }
    int getQty()
    {
        return qty;
    }
    void setQty(int qty)
    {
        qty = qty;
    }
    string toString(name, authors, price, qty)
    {
        return "Book title: " + name + "\n" + authors.toString + "\nPrice: " + price + "\nQuantity: " + qty + "\n";
    }
};






































