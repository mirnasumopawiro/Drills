//
//  2.cpp
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
    
    string toString(string name, Author data, int price, int qty)
    {
        return "Book Title: " + name + + "\n" + author.toString() + "Price: " + to_string(price) + "\nQuantity: " + to_string(qty) + "\n";
    }
};

int main()
{
    string name;
    Author author;
    double price;
    int qty;
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
    
    cout << "Please enter the book details" << endl;
    cout << "Title: " << endl;
    cin >> name;
    cout << "Price: " << endl;
    cin >> price;
    cout << "Quantity: " << endl;
    cin >> qty;
    
    Book details {name, data, price, qty};
    
    
    
    
    cout << details.toString(name, data, price, qty);
    
}





























