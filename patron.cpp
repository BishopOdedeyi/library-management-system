#include "patron.h"
#include "book.h"
#include <vector>
#include <iostream>

Patron::Patron(std::string name)
: Name(name){}

std::string Patron::getName()
{
    return Name;
}

void Patron::borrowBook(Book &book)
{
    book.borrowBook(book);
    borrowedBooks.push_back(book);
    std::cout << book.getTitle() << " has been borrowed by " << getName() << std::endl;
}

void Patron::returnBook(Book &book)
{
    bool found = false;
    // Iterate over borrowedBooks to find the book to return
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it)
    {
        if (it->getTitle() == book.getTitle())
        {
            borrowedBooks.erase(it); // Remove the book from borrowedBooks
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Error: " << book.getTitle() << " not found in borrowed books." << std::endl;
        return;
    }

    book.returnBook(book); // Assuming Book::returnBook() just updates book status

    std::cout << book.getTitle() << " has been returned by " << getName() << std::endl;
}