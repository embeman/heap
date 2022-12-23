#ifndef HEAP_H
#define HEAP_H

#include <stdint.h>
#include <stddef.h>


#define HEAP_BLOCK_TABLE_ENTRY_TAKEN 0b00000001
#define HEAP_BLOCK_TABLE_ENTRY_FREE  0b00000000

#define HEAP_BLOCK_HAS_NEXT 0b10000000
#define HEAP_BLOCK_IS_FIRST 0b01000000


#define HEAP_BLOCK_SIZE 10
#define HEAP_SIZE_BYTES 100

typedef uint8_t HEAP_BLOCK_TABLE_ENTRY; 

// heap_table contains all entries in our heap
struct heap_table{
    HEAP_BLOCK_TABLE_ENTRY* entries;
    size_t total_entries;
};

// heap contains our heap_table and the start address of the heap memory
struct heap{
    struct heap_table* table;
    void* heap_start_addr;
};



int kheap_init();
void* kmalloc(size_t size);
void* kzalloc(size_t size);
void kfree(void* ptr);


#endif