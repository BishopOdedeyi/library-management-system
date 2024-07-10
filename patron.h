#include <iostream>
#include <vector>
#include "book.h"

#ifndef PATRON_H
#define PATRON_H

class Patron
{
    private:
        std::string Name;
        std::vector <Book> borrowedBooks;

    public:
        Patron(std::string name);

        void borrowBook(Book &book);

        void returnBook(Book &book);

        std::string getName();
};

#endif 