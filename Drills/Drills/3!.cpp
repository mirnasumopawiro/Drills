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
    Author *authors;
    double price;
    int qty;
public:
    Book (string name, Author authors[], double price)
    {
        this->name = name;
        this->authors = new Author[2];
        for (int i = 0; i < 2; i++)
        {
            this-> authors[i] = authors[i];
        }
        this->price = price;
        qty = 0;
    }
    Book (string name, Author author[], double price, int qty)
    {
        this->name = name;
        this->authors = new Author[2];
        for (int i = 0; i < 2; i++)
        {
            this-> authors[i] = authors[i];
        }
        this->price = price;
        this->qty = qty;
    }
    string getName()
    {
        return name;
    }
    Author getAuthor()
    {
        return *authors;
    }
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
        this->qty = qty;
    }
    void setPrice (double price)
    {
        this->price = price;
    }
    string toString()
    {
        return "Book title: " + name + "\n" + authors[0].toString() + authors[1].toString() + "\nPrice: " + to_string(price) + "\nQuantity: " + to_string(qty) + "\n";
    }
    string getAuthorNames()
    {
        return authors[0].getName() + " & " + authors[1].getName();
    }
};

int main()
{
    string name;
    string email;
    string bookName;
    string name2;
    string email2;
    string bookName2;
    char gender;
    char gender2;
    int qty;
    double price;
    
    cout << "Please enter the authors' details" << endl;
    cout << "First Author" << endl;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Email: " << endl;
    cin >> email;
    cout << "Gender (M/F): " << endl;
    cin >> gender;
    cout << "Second Author" << endl;
    cout << "Name: " << endl;
    cin >> name2;
    cout << "Email: " << endl;
    cin >> email2;
    cout << "Gender (M/F): " << endl;
    cin >> gender2;
    
    cout << "Please enter the book's details" << endl;
    cout << "Book name: " << endl;
    cin >> bookName;
    cout << "Price: " << endl;
    cin >> price;
    cout << "Quantity: " << endl;
    cin >> qty;
    cout << endl;
    
    Author authors[2] = {Author(name, email, gender), Author(name2, email2, gender2)};
    Book book (bookName, authors, price, qty);
    
    cout << book.toString();
    cout << book.getAuthorNames();
}



































