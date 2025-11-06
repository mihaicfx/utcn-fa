#ifndef __HASH_TABLE_H__
#define __HASH_TABLE_H__

#include "commandline.h"

namespace lab05
{
	typedef struct {
		int id;
		char name[30];
	} Entry;

	/**
	 * @brief Forward declaration of the hash table class
	 * Provide the definition of this in the cpp file.
	*/
	struct HashTable;

	/**
	 * @brief Create a newly allocated hash table for the given size
	 *
	 * @param size The size of the hash table.
	 * @return A pointer to the newly created hash table.
	 */
	HashTable* createHashTable(int size);

	/**
	 * @brief Deallocate the hash table
	 *
	 * @param table A pointer to the hash table.
	 */
	void destroyHashTable(HashTable* table);

	/**
	 * @brief Inserts a new entry into the hash table.
	 *
	 * @param table A pointer to the hash table.
	 * @param id ID of the new entry.
	 * @param name Name of the new entry.
	 * @return true if the element could be added, false otherwise
	 */
	bool insert(HashTable* table, int id, const char* name);

	/**
	 * @brief Searches for an entry in the hash table by ID.
	 *
	 * @param table A pointer to the hash table.
	 * @param id The ID of the entry to search for.
	 * @return A pointer to the found entry, or NULL if not found.
	 */
	Entry* search(HashTable* table, int id);

	/**
	 * @brief Deletes an entry in the hash table by ID.
	 *
	 * @param table A pointer to the hash table.
	 * @param id The ID of the entry to remove.
	 * @return true if the element could be deleted, false otherwise
	 */
	bool remove(HashTable* table, int id);

	/**
	 * @brief Evaluates the search operation for multiple fill factors.
	 *
	 * @param size The size of the hash table.
	 */
	void evaluateSearch(int size = 10007);

	/**
	 * @brief Evaluates the search operation after deletion.
	 *
	 * @param size The size of the hash table.
	 */
	void evaluateSearchAfterDeletion(int size = 10007);

} // namespace lab05

#endif // __HASH_TABLE_H__