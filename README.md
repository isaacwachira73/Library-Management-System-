# Online Library Management System

## Design Choices
* **Object-Oriented Design:** The system is built using three primary classes: `Book`, `User`, and `Library`. 
* **Data Privacy:** Encapsulation is enforced by keeping attributes private and providing access through getters and setters.
* **Storage:** I used `std::vector` for its dynamic sizing and ease of iteration during search operations.
* **Error Handling:** Negative test cases ensure that the system handles edge cases like searching for non-existent books or double-borrowing.
