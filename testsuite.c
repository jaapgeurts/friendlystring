/*
 * Test suite for friendly string
 * 
 * 
 * (c) 2017 Jaap Geurts
 * 
 * Date: 13 October 2017
 */

#include <assert.h>

#include "friendlystring.h"

static void create_string()
{
    
    fstring str = fs_alloc();
    
    assert(str != NULL);   
    
    fs_free(str);
    
}

static void create_destroy_string()
{
    
    fstring str = fs_alloc();
   
    fs_free(str);
    
}



int main(int argc, char* argv[])
{

    create_string();
    
    return 0;
}
