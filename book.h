#include <iostream>

#ifndef BOOK_H
#define BOOK_H

class Book
{
    private:
        std::string Title;
        std::string Author;
        int ISBN;
        int Year;
        bool Status;

    public:
        Book(std::string title, std::string author, int isbn, int year);

        void borrowBook(Book &book);

        void returnBook(Book &book);

        std::string getTitle();

        std::string getAuthor();

        int getYear();

        int getISBN();

        std::string getStatus();
};

#endif