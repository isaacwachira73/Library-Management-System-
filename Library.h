#include "Book.h"
#include "User.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book& b) { books.push_back(b); }

    void removeBook(std::string isbn) {
        auto it = std::remove_if(books.begin(), books.end(), [&](const Book& b) {
            return b.getIsbn() == isbn;
        });
        books.erase(it, books.end());
    }

    Book* searchByTitle(std::string title) {
        for (auto &book : books) {
            if (book.getTitle() == title) return &book;
        }
        return nullptr;
    }

    bool processBorrow(int userId, std::string isbn) {
        for (auto &book : books) {
            if (book.getIsbn() == isbn && book.getAvailability()) {
                book.setAvailability(false);
                return true;
            }
        }
        return false; // Book not found or unavailable
    }
};
