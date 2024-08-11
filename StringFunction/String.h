#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

size_t MyStrlen(const char* str);
char* MyStrcpy(char* dest, const char* src);
char* MyStrcat(char* dest, const char* src);
int MyStrcmp(const char* str1, const char* str2);
const char* MyStrstr(const char* str1, const char* str2);
char* MyStrncpy(char* dest, const char* src, size_t num);
char* MyStrncat(char* dest, const char* src, size_t num);


