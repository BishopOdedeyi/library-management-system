#include <iostream>
#include <vector>
#include "book.h"
#include "patron.h"

class Library
{
    private:
        std::string Name;
        std::vector <Book> books;
        std::vector <Patron> patrons;

    public:
        Library(std::string name);

        void addBook(Book &book);

        void addPatron(Patron &patron);

        void searchBook(std::string title);

        void searchPatron(std::string name);
};