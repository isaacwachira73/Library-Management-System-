#ifndef USER_H
#define USER_H
#include <string>
#include <vector>

class User {
private:
    std::string name;
    int userID;
    std::vector<std::string> borrowedIsbns;

public:
    User(std::string n, int id) : name(n), userID(id) {}

    std::string getName() const { return name; }
    int getId() const { return userID; }
    
    void borrowBook(std::string isbn) { borrowedIsbns.push_back(isbn); }
    // Logic to remove from vector could be added for returning
};
#endif
