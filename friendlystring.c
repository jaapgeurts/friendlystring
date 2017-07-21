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

#include <stdlib.h>
#include "friendlystring.h"

typedef struct fs_string_info;

typedef struct {
  struct fs_string_info* info;
  char c1;
} fs_string;

typedef struct {
	fs_string* fs_string;
	int ref_count;
	int length;
} fs_string_info;

fstring fstring_alloc() {
	struct fs_string_info* fs_info = malloc(sizeof(struct fs_string_info));
	fs_info->ref_count = length = 0;
	fs_info->fs_string = malloc(sizeof(char) + sizeof(struct fs_string_info*));
	fs_info->fs_string += sizeof(fs_string_info*);
	fs_info->fs_string.c1 = 0;
	fs_info->fs_string->info = info;
	return &(fs_info->c1);
}
 
 void fstring_retain(fstring fstr)
 {
 	 fs_string* fs_str = (fs_string)(fstr - sizeof(struct fs_string_info*));
 	 fs_string_info* fs_info = fs_str->info;
 	 fs_string_info->ref_count++;
 }
 
 void fs_release(fstring fstr)
 {
 	 fs_string* fs_str = (fs_string)(fstr - sizeof(struct fs_string_info*));
 	 fs_string_info* fs_info = fs_str->info;
 	 fs_string_info->ref_count--;
 	 if (fs_string_info->ref_count == 0)
 	 	 fs_free(fstring);
 }

 void fs_free(fstring fstr)
 {
 	 fs_string* fs_str = (fs_string)(fstr - sizeof(struct fs_string_info*));
 	 fs_string_info* fs_info = fs_str->info;
 	 free(fs_info->fs_string);
 	 free(fs->info);
 }

 int fs_len(fstring fstr)
 {
 	 fs_string* fs_str = (fs_string)(fstr - sizeof(struct fs_string_info*));
 	 fs_string_info* fs_info = fs_str->info;
 	 return fs_info->length;
 }
 
 void fs_concat(fstring fstr1, fstring fstr2)
 {
 }
 
 int fs_find(fstring, char);
 
 int fs_find(fstring, fstring);
 
 fstring[] fs_split(fstring, char);
 