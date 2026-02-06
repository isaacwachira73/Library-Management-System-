#include "Library.h"
#include <cassert>
#include <iostream>

void runTests() {
    Library lib;
    Book b1("The Great Gatsby", "F. Scott Fitzgerald", "123");
    lib.addBook(b1);

    // POSITIVE: Search for existing book
    assert(lib.searchByTitle("The Great Gatsby") != nullptr);
    std::cout << "Test 1 Passed: Search functionality works.\n";

    // POSITIVE: Borrow book
    assert(lib.processBorrow(1, "123") == true);
    assert(lib.searchByTitle("The Great Gatsby")->getAvailability() == false);
    std::cout << "Test 2 Passed: Borrowing logic works.\n";

    // NEGATIVE: Borrow already borrowed book
    assert(lib.processBorrow(1, "123") == false);
    std::cout << "Test 3 Passed: Prevents double borrowing.\n";

    // NEGATIVE: Search non-existent book
    assert(lib.searchByTitle("Moby Dick") == nullptr);
    std::cout << "Test 4 Passed: Handles missing books gracefully.\n";
}

int main() {
    runTests();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
