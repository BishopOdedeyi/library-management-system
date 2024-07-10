#include "book.h"
#include "patron.h"
#include "library.h"
#include <iostream>

int main()
{
    // Create Library instance
    Library library("Beebs Library");

    // Create Book instances
    Book book1("Book1", "Author1", 123456, 2000);
    Book book2("Book2", "Author2", 987654, 2010);

    // Create Patron instance
    Patron patron1("Patron1");
    Patron patron2("Patron2");

    // Add books to library
    library.addBook(book1);
    library.addBook(book2);

    // Add patrons to library
    library.addPatron(patron1);
    library.addPatron(patron2);

    // Patron borrows a book
    patron1.borrowBook(book1);

    // Patron returns a book
    patron1.returnBook(book1);

    // Search for a book
    library.searchBook("Book1");

    // Search for a patron
    library.searchPatron("Patron1");

    return EXIT_SUCCESS;
}