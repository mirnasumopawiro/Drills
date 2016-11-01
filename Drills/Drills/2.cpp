//
//  2.cpp
//  Drills
//
//  Created by Mirna Sumopawiro on 11/1/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

class Author
{
    string name;
    string email;
    char gender;
};

class Book
{
private:
    string name;
    Author author;
    double price;
    int qty;
    
public:
    Book (string name, Author author, double price)
    {
        this->name = name;
        this->author = author;
        this->price = price;
        qty = 0;
    }
    
    Book (string name, Author author, double price, int qty)
    {
        this->name = name;
        this->author = author;
        this->price = price;
        this->qty = qty;
    }
    
    string getname()
    {
        return name;
    }
    
    Author getAuthor()
    {
        return author;
    }
    
    double getPrice()
    {
        return price;
    }
    
    void setPrice (double price)
    {
        this->price = price;
    }
    
    int getQty()
    {
        return qty;
    }
    
    void setQty (int qty)
    {
        this->qty = qty;
    }
    
    string toString()
    {
        string message;
        return message;
    }
};































