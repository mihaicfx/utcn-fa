#include "hash_table.h"

#include "catch2.hpp"

#include <iostream>

namespace lab05
{
    struct HashTable
    {
        // TODO: add members here
    };

    HashTable* createHashTable(int size)
    {
        // TODO: Allocate and initialize a new HashTable.
        // The 'items' array should be allocated and all entries initialized to NULL.
        return NULL;
    }

	void destroyHashTable(HashTable* table)
    {
        // TODO: Deallocate the table here
    }

    bool insert(HashTable* table, int id, const char* name)
    {
        // TODO: Implement the insert operation with quadratic probing.
        // Don't forget to handle table full situations.
        return false;
    }

    Entry* search(HashTable* table, int id)
    {
        // TODO: Implement the search operation with quadratic probing.
        // The search should stop on a NULL entry.
        return NULL;
    }

    bool remove(HashTable* table, int id)
    {
        // TODO: Implement the delete operation.
        // Remember to use a special marker for deleted entries to not break search chains.
        return false;
    }

    void evaluateSearch(int size)
    {
        // TODO: Implement the evaluation for multiple fill factors as described in the readme.
    }

    void evaluateSearchAfterDeletion(int size)
    {
        // TODO: Implement the evaluation after deletion as described in the readme.
    }


    TEST_CASE("Hash Table Operations")
    {
        // TODO: Write your unit tests here.
        // Use REQUIRE( [condition] ); to perform checks.

        SECTION("Create and Destroy") {
            // TODO: Test hash table creation and destruction.
        }

        SECTION("Insert, Search, and Remove") {
            // TODO: Test basic insert, search, and remove operations.
            // - Insert an element, search for it, check if found.
            // - Search for a non-existent element, check if not found.
            // - Remove an element, search for it, check if not found.
        }
    }

} // namespace lab05
