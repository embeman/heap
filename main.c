#include <stdio.h>
#include "heap.h"

int main(){
    if (kheap_init() < 0)
    {
        printf("Can't Create Heap Error Allocating free memory from OS...\n");   
        return -1;     
    }

    void* ptr1 = kmalloc(9);
    void* ptr2 = kmalloc(1);
    void* ptr3 = kmalloc(19);
    void* ptr4 = kmalloc(1);
    printf("ptr1 : %p\nptr2 : %p\nptr3 : %p\nptr4 : %p\n",ptr1,ptr2,ptr3,ptr4);

    return 0;
}