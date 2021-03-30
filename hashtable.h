#ifndef HASHTABLE_H
#define HASHTABLE_H

struct key {
	const void *key;
	int len;
};

struct hashtable_elem {
	char used;

	struct key key;
	void *value;
	struct hashtable_elem *next;
};

struct hashtable {
	int size;
	struct hashtable_elem *table;
};

struct hashtable *create_hashtable(int size);
void free_hashtable(struct hashtable *hashtable);
void hashtable_inserts(struct hashtable *hashtable, const char *key, void *value);
void hashtable_insert(struct hashtable *hashtable, const void *key, int keylen, void *value);
void *hashtable_gets(struct hashtable *hashtable, const char *key);
void *hashtable_get(struct hashtable *hashtable, const void *key, int keylen);
void hashtable_removes(struct hashtable *hashtable, const char *key);
void hashtable_remove(struct hashtable *hashtable, const void *key, int keylen);

void dump_hashtable(struct hashtable *hashtable);

#endif
