#include "book.h"
#include <iostream>

Book::Book(std::string title, std::string author, int isbn, int year) 
: Title(title), Author(author), ISBN(isbn), Year(year), Status(true)
{}

void Book::borrowBook(Book &book)
{
    book.Status = false;
}

void Book::returnBook(Book &book)
{
    book.Status = true;
}

std::string Book::getTitle()
{
    return Title;
}

std::string Book::getAuthor()
{
    return Author;
}

int Book::getYear()
{
    return Year;
}

int Book::getISBN()
{
    return ISBN;
}

std::string Book::getStatus()
{
    if(Status)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}