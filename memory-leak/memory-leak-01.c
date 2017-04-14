/*
 * file: memory-leak-01.c
 *
 * program with a sample memory leak, track the o/p using valgrind
 *
 */


/* Function with memory leak */
#include <stdlib.h>
 
int main()
{
	/* sample malloc call to get some memory on board*/
   int *ptr = (int *) malloc(sizeof(int)); 
 
   /* our usual routines */
 
 /* oops execution completed without freeing the allocated bytes */
}


/* o/p:-

execute like $ valgring ./exe

==31339== Memcheck, a memory error detector
==31339== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==31339== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==31339== Command: ./a.out
==31339== 
==31339== 
==31339== HEAP SUMMARY:
==31339==     in use at exit: 4 bytes in 1 blocks
==31339==   total heap usage: 1 allocs, 0 frees, 4 bytes allocated
==31339== 
==31339== LEAK SUMMARY:
==31339==    definitely lost: 4 bytes in 1 blocks
==31339==    indirectly lost: 0 bytes in 0 blocks
==31339==      possibly lost: 0 bytes in 0 blocks
==31339==    still reachable: 0 bytes in 0 blocks
==31339==         suppressed: 0 bytes in 0 blocks
==31339== Rerun with --leak-check=full to see details of leaked memory
==31339== 
==31339== For counts of detected and suppressed errors, rerun with: -v
==31339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

Observe the logs we have 4 byte(int) memory leak

*/
