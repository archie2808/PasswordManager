#include <iostream>
#include <SQLiteCpp/SQLiteCpp.h>
//ffff
int main() {

        try {
            // Open a database file in read/write mode
            SQLite::Database db("password_manager.db", SQLite::OPEN_READWRITE|SQLite::OPEN_CREATE);
            std::cout << "Connected to the database successfully\n";
        } catch (const std::exception& e) {
            std::cerr << "Connection failed: " << e.what() << std::endl;
            return 1; // Return a non-zero number to indicate error
        }
    return 0;
}


