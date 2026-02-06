#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    Book(std::string t, std::string a, std::string i) 
        : title(t), author(a), isbn(i), isAvailable(true) {}

    // Getters
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getIsbn() const { return isbn; }
    bool getAvailability() const { return isAvailable; }

    // Logic
    void setAvailability(bool status) { isAvailable = status; }
};
#endif
