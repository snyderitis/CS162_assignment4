/*  
 *  Name: Error library header
 *  Description: This header file declares all the needed functions for the error library.
 *  Author: Thomas Snyder
 *  Date: 2/2/2018
 *  Input: none
 *  Output: none
 */
#ifndef USEFUL_FUNCTIONS_H
#define USEFUL_FUNCTIONS_H
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <fstream>
#include <sstream>
#include <sys/ioctl.h>
#include <unistd.h>
using namespace std;

void clear_screen();
bool check_range(int, int, int);
bool is_int(string);
bool is_int(char*);
bool is_int(char);
bool is_float(string);
bool is_capital(char);
bool is_even(int);
bool is_odd(int);
int equality_test(int, int);
bool float_is_equal(float, float, float);
bool numbers_present(string);
bool letters_present(string);
bool contains_substring(string, string);
int word_count(string);
string to_upper(string);
string to_lower(string);
int get_int(string);
int get_int(char*);
float get_float(string);
float get_float(float);
bool yes_no_question(string);
void delete_arr(int**);
void delete_arr(string**);
char* get_text();
bool is_pos_int(char* str);
int smallest_len(string, string);
void sort_alphabetically(string*, int, bool*, int);
string ask_question(string);
#endif
