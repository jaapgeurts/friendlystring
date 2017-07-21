#ifndef __FRIENDLY_STRINGS_H
#define __FRIENDLY_STRINGS_H
/*
 * Friendly String Library (c) 2017 Jaap Geurts
 * 
 * Date: 8 July 2017
 *
 * Friendly Strings is a string library which aims to make it east to use
 * strings in the C language.
 * Friendly string is compatible with standard C strings.
 *
 * Some things to remember:
 * 1. Do not free strings with the c library but with friendly strings.
 *
 * Strings are allocated and managed by the library. You don't have to worry 
 * about reallocating a string.
 */

 
 typedef char* fstring;
 
 
 fstring fstring_alloc();
 
 void fstring_retain(fstring);
 
 void fs_release(fstring);

 void fs_free(fstring);

 int fs_len(fstring);
 
 void fs_copy(fstring, fstring);
 
 int fs_compare(fstring, fstring);
 
 void fs_concat(fstring, fstring);
 
 int fs_find(fstring, char);
 
 int fs_find(fstring, fstring);
 
 fstring[] fs_split(fstring, char);
 
 
 #endif