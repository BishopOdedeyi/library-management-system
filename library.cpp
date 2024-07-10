#include "library.h"
#include "book.h"
#include <iostream>
#include <vector>

Library::Library(std::string name) : Name(name){}

void Library::addBook(Book &book)
{
    books.push_back(book);
    std::cout << "Book " << book.getTitle() << " has been added to the library" << std::endl;
}

void Library::addPatron(Patron &patron)
{
    patrons.push_back(patron);
    std::cout << "Welcome Patron " << patron.getName() << " to the library" << std::endl;
}

void Library::searchBook(std::string title)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (title == books[i].getTitle())
        {
            std::cout << "Title: [" << books[i].getTitle() << "] Author: [" << books[i].getAuthor() << "] ISBN: [" << books[i].getISBN() << "] Year: [" << books[i].getYear() << "] Status [" << books[i].getStatus() << "]" << std::endl;
        }
    }
}

void Library::searchPatron(std::string name)
{
    for (int i = 0; i < patrons.size(); i++)
    {
        if (name == patrons[i].getName())
        {
            std::cout << "Name: [" << patrons[i].getName() << "]" << std::endl;
        }
    }
}