/*
 *  THIS IS THE ASSIGNMENT 3 LIB
 *  Program: error library
 *  Description: A library containing a bunch of functions that may be useful int the future. This cpp defines all functions
 *  Author: Thomas Snyder
 *  Date: 2/2/2018
 *  Input: will input ints, chars, floats, and strings
 *  Output: will output bools, ints, strings, and floats
 */
#include "useful_functions.h"
#include <climits>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;


/*
 *  Function: clear screen
 *  Description: clears terminal with tons of \n's
 *  Parameters: number of lines to print 
 *  Pre-conditions: none
 *  Post-conditions: terminal cleared
 */
void clear_screen()
{
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    for(int i = 0; i < size.ws_col; i++)
        cout << "\n";
}


/*
 *  Function: Check range
 *  Description: Indicates if the provided num is in specific range
 *  Parameters: int lower bound, int upper bound, int test val
 *  Pre-conditions: input has been taken, lower and upper val have been declared
 *  post-condition: false if test value isn't in between the bounds, true if test is
 */
bool check_range(int lower_bound, int upper_bound, int test_value)
{/*works if you have already checked for correct input*/
    if(upper_bound > lower_bound)
    {
        if(test_value <= upper_bound && test_value >= lower_bound)
        {
            return true;
        }
    }
    else
        if(test_value >= upper_bound && test_value <= lower_bound)
            return true;
    return false;
}


/*
 *  Function: is int
 *  Description: Indicates if a given string is an integer
 *  Parameters: string num
 *  Pre-conditions: string has been input
 *  Post-conditions: false if string is not just or not int, true if string is only int
 */
bool is_int(string num)
{/*WORKS*/
    int len = num.length();
    for(int i = 0; i < len; i++)
    {
        if((num[i] >= 58 || num[i] <= 47) && num[i] != '-')
        {
            return false;    
        }
        if(num[i] == '-' && i != 0)
        {
            return false;
        }
    }
    return true;
}


/*
 *  Function: is float
 *  Description: Indicades if a given string is a float
 *  Parameters: string num
 *  Pre-conditions: input taken
 *  Post-Conditions: true or false if float or not float
 *  
 */
bool is_float(string num)
{/*works*/
    int len = 0;
    int dec_count = 0;
    while(num[len])
    {
        len++;
    }
    for(int i = 0; i < len; i++ )
    {
        if(num[i] <= '/')
        {
            if(num[i] == '.')
            {
                dec_count++; 
            }
            else if(num[i] == '-')
            {
                if(i != 0)
                    return false;
            }
            else
            {
                return false;
            }
        }else if(num[i] >= ':')
        {
            return false;
        }
    }
    if(dec_count > 1)
    {
        return false;
    }
    return true;
}


/*  
 *  Function: is capital
 *  Description: indicates if a letter is capital, checks range in ascii
 *  Parameters: char input
 *  Pre-conditions: input taken
 *  Post-conditions: if char is capital, return true, else return false
 */
bool is_capital(char letter)
{/*Works, but also with more than one letter. Only checks first letter*/
    if(letter <= 90 && letter >= 65)
    {
        return true;
    }
    return false;
}


/*
 *  Function: is even
 *  Description: indicates if number is even
 *  Parameters: int num
 *  Pre-conditions: input taken
 *  Post-conditions: return false if not even, true if is
 */
bool is_even(int num)
{/*WORKING*/
    if(num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
 *  Function: is odd
 *  Description: indicates if number is odd, reverse from if even
 *  Parameters: int num
 *  Pre-conditions: input taken
 *  Post-conditions: return false if even, true of odd
 */
bool is_odd(int num)
{/*WORKING*/
    if(num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
 *  Function: equality test
 *  Description: indicates if num1 is greater, equal, or less than num2
 *  Parameters: int num1, num2
 *  Pre-conditions: input taken
 *  Post-conditions: return -1, 0, 1 for num1 <, >, == num2 respectively
 */
int equality_test(int num1, int num2)
{/*works*/
    if(num1 > num2){
        return 1;
    }else if(num1 == num2){
        return 0;
    }else{
        return -1;
    }
}


/*
 *  Function: float is equal
 *  Description: checks if floats are within a certain range of each other
 *  Parameters: float num1, num2, precision
 *  Pre-conditions: num1, num2, precision are input and are floats
 *  Post-conditions: bool false returned if not close enough, true if they are
 */
bool float_is_equal(float num1, float num2, float precision)
{/*doesnt't work if params are 5.9 3.8 2.1*/ 
    if(num1 > num2)
    {
        if((num1 - num2) <= precision)
            return true;
        else
            return false;
    }else{
        if((num2 - num1) <= precision)
            return true;
        else
            return false;
    }
}


/*
 *  Function: numbers present
 *  Description: checks if numbers are in a string
 *  Parameters: String sentence
 *  Pre-conditions: string input and correct object
 *  Post-conditions: Return true of string contains numbers, else return false
 */
bool numbers_present(string sentence)
{/*WORKS*/
    int len = 0;
    while(sentence[len])
    {
        len++;
    }
    for(int i = 0; i < len; i++)
    {
        if(sentence[i] <= 57 && sentence[i] >= 48)
        {
            return true;
        }
    }
    return false;
}


/*
 *  Function: letters present
 *  Description: checks if the string contains letters
 *  Parameters: string sentence
 *  Pre-conditions: string input and correct object
 *  Post-conditions: Returns false if no letters present, else true
 */
bool letters_present(string sentence)
{/*WORKING*/
    int len = 0;
    while(sentence[len])
    {
        len++;
    }
    for(int i = 0; i < len; i++)
    {
        if((sentence[i] <= 91 && sentence[i] >= 65) ||
                (sentence[i] >= 97 && sentence[i] <= 122))
        {
            return true;
        }
    }
    return false;
}


/*
 *  Function: contains sub string
 *  Description: Checks to see if a given substring is within a given string
 *  Parameters: string sentence, sun_string
 *  Pre-conditions: string and substring input and correct objects
 *  Post-conditions: return true if sentence contains sub string, else false
 */
bool contains_substring(string sentence, string sub_string)
{/*WORKS*/
    //get len of sentence and substring
    int sentence_len = 0;
    int sub_sen_len = 0;
    while(sentence[sentence_len])
    {
        sentence_len++;
    }
    while(sub_string[sub_sen_len])
    {
        sub_sen_len++;
    }//got len of sentence and sub_string
    for(int i = 0; i < sentence_len; i++)
    {
        if(sub_string[0] == sentence[i])
        {
            for(int j = 0; j < sub_sen_len; j++)
            {
                if(sub_string[j] == sentence[i+j])
                {
                }else{
                    break;
                }
                if(j == sub_sen_len - 1)
                {
                    return true;
                }
            }
        }
    }
    return false;
}



/*
 *  Function: word count
 *  Description: counts the words in a string by adding 1 to the number of spaces
 *  Parameters: string senttence
 *  Pre-conditions: string declared as string object and input
 *  Post-conditions: return word cound int
 */
int word_count(string sentence)
{/*WORKING*/
    int len = 0;
    while(sentence[len])
    {
        len++;
    }
    //check if only spaces
    bool only_spaces = true;
    for(int i = 0; i < len; i++)
    {
        if(sentence[i] != ' ')
        {
            only_spaces = false;
        }
    }
    if(only_spaces)
    {
        return 0;
    }
    int space_count = 0;
    for(int i = 0; i < len; i++)
    {
        if(sentence[i] == ' ' && 
           i != 0 && 
           i != len - 1 && 
           sentence[i-1] != ' ')
        {
            space_count++;
        }
    }
    return space_count + 1;
}


/*
 *  Function: to upper
 *  Description: make all the non-uppercase letters uppercase
 *  Paramters: string sentence
 *  Pre-conditions: string input
 *  Post-conditions: returns upper-case string with things that aren't letters left alone
 */
string to_upper(string sentence)
{/*WORKS*/
    int len = 0;
    while(sentence[len])
    {
        len++;
    }
    for(int i = 0; i < len; i++)
    {
        if(sentence[i] <= 122 && sentence[i] >= 97)
        {
            sentence[i] -= ('a' - 'A');
        }
    }

    return sentence;
}


/*
 *  Function: to lower
 *  Description: makes all letters into lower case, ignores non-letters
 *  Parameters: string sentence
 *  Pre-condtitions: string input
 *  Post-conditions: return string with all letters lower case
 */
string to_lower(string sentence)
{/*WORKS*/
    int len = 0;
    while(sentence[len])
    {
        len++;
    }
    for(int i = 0; i < len; i++)
    {
        if(sentence[i] <= 90 && sentence[i] >= 65)
        {
            sentence[i] += ('a' - 'A');
        }
    }

    return sentence;
}


/*
 *  Function: get int
 *  Description: get the int from the string. If not an int, print invalid input, reprompt for int
 *  Parameters: string input
 *  Pre-conditions: string input
 *  Post-conditions: int returned
 */
int get_int(string input)
{/*WORKS*/
    int len = 0;
    while(input[len])
    {
        len++;
    }
    int value = 0;
    int char_val = 0;
    int multiplier = 1;
    for(int i = 0; i < len; i++)
    {
        if(input[i] != '-')
        {
            char_val = input[i] - 48;
            //for power
            value += char_val * pow(10, (len - 1 - i));
        }else{
            multiplier = -1;
        }
       
    }
    return value * multiplier;
}


/*
 *  Function: get float
 *  Description: get float from float
 *  Parameters: float input
 *  Pre-conditions: float input
 *  Post-conditions: float returned
 */
float get_float(float input)
{
    return input;
}


/*
 *  Function: get float
 *  Description: get float from a string
 *  Parameters: string input
 *  Pre-conditions: string entered in
 *  Post-conditions: float of string returned
 */
float get_float(string input)
{/*SO FAR NOT WORKING*/
    float value = 0;
    int str_len = 0;
    while(input[str_len])
    {
        str_len++;
    }
    int dec_ind = -1;
    float char_val = 0;
    for(int i = 0; i < str_len; i++)
    {
        if(input[i] == '.')
        {
            dec_ind = i;
        }
        if(dec_ind == -1 && i == (str_len - 1))
        {
            input += '.';
            str_len++;
            dec_ind = str_len;
        }
    }
    float multiplier = 1.0;
    for(int i = 0; i < str_len; i++)
    {
        if(input[i] == '-')
        {
            multiplier = -1.0;
        }
        else if(i != dec_ind)
        {
            char_val = input[i] - 48;
            //for power
            if(i < dec_ind)
                value += (char_val * pow((float)10, (float)(dec_ind - 1 - i)));
            else
                value += (char_val * pow((float)10, (float)(dec_ind - i)));
        }
    }
    return value * multiplier;
}


/*
 *  Function: is_int
 *  Description: checks if a char is an int
 *  Parameters: char
 *  Pre-conditions: given char
 *  Post-conditions: returns false if within outside int range
 */
bool is_int(char input)
{
    if(input <= '9' && input >= '0')
        return true;
    return false;
}


/*
 *  Function: yes/no question
 *  Description: ask a yes or no question
 *  Parameters: string question
 *  Pre-conditiosn: none
 *  Post-conditions: true returned if answer yes, else false returned
 */
bool yes_no_question(string question)
{
    string input = "";
    do{
        cout << question << " (y/n): ";
        getline(cin, input);
        input = to_lower(input);
    }while(input[0] != 'n' && input[0] != 'y');
    if(input[0] == 'n') return false;
    return true;
}


/*
 *  Function: delete array
 *  Description: simple function for deleting arrays and setting their pointers to NULL
 *  Parameters: double pointer
 *  Pre-conditions: array made
 *  Post-conditions: array destroyed
 */
void delete_arr(int** arr, int len)
{
    delete [] *arr;
    *arr = NULL;
}


/*
 *  Function: delete array
 *  Description: simple function for deleting arrays and setting their pointers to NULL
 *  Parameters: double pointer
 *  Pre-conditions: array made
 *  Post-conditions: array destroyed
 */
void delete_arr(string** arr)
{
    delete [] *arr;
    *arr = NULL;
}



/*
 *  Function: is int
 *  Description: takes a cstring and determines if it's an int or not
 *  Parameters: char array
 *  Pre-conditions: none
 *  Post-conditions: return true if int, else false
 */
bool is_int(char* str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] > '9' || str[i] < '0')
            return false;
    }
    return true;
}


/*
 *  Function: get int
 *  Description: get the int from a char array/cstring
 *  Parameters: char array
 *  Pre-conditions: none
 *  Post-conditions: return int
 */
int get_int(char* str)
{
    int total = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        int temp = str[i] - '0';
        temp = temp * pow(10, strlen(str) - 1 - i);
        total += temp;
    }
    return total;
}



/*
 *  Function: get text
 *  Description: gets text without knowing size by using dynamic arrays and cin.peek
 *  Parameters: none
 *  Pre-conditions: You have indicated to user the type of text wanting to be input
 *  Post-conditions: char arr of text input returned
 *  Code from Week 10 3/12/18 lecture demo
 */
char * get_text()
{
    char* str = new char[1];
    int count = 0;
    while(cin.peek() != '\n'){
        if(cin.peek() >= 32 && cin.peek() <=126)
        {
            char* temp = new char[strlen(str)+1];
            strcpy(temp, str);
            temp[count] = cin.get();
            delete[]str;
            str = new char[strlen(temp)];
            strcpy(str, temp);
            delete[]temp; count++;
        }
    }
    cin.ignore();
    cin.clear();
    return str;
}


/*
 *  Function: is positive int
 *  Description: checks if a cstring number is positive
 *  Parameters: char* string
 *  Pre-conditions: none
 *  Post-conditions: return true if positive int, else false
 */
bool is_pos_int(char* str)
{
    if(str[0] == '0')
        return false;
    for(int c = 0; c < strlen(str); c++)
        if(str[c] < '0' || str[c] > '9')
            return false;
    return true;

}

/*
 *  Function: smallest length
 *  Description: return the length of the shorter string
 *  Parameters: two strings
 *  Pre-conditions: none
 *  Post-conditions: int shortest length returned
 */
int smallest_len(string one, string two)
{
    int sizeOne = one.length();
    int sizeTwo = two.length();
    if(sizeOne > sizeTwo)
        return sizeTwo;
    else
        return sizeOne;
}


/*
 *  Function: sort_alphabetically
 *  Description: sort a string array alphabetically
 *  Pre-conditions: Call structure:
 *      bool sort = false;
 *      do{
 *          sort = true;
 *          for(int i = 0; i < strarrlen -1; i++)
 *          {
 *              sort_alphabetically(srtarr, i, &sort, 0);
 *          }
 *      }while{!sort};
 *  Post- conditions: string array sorted alphabetically
 */
void sort_alphabetically(string* sorted, int i, bool* sort, int str_ind)
{
    if(sorted[i][str_ind] > sorted[i+1][str_ind])
    {
        *sort = false;
        string temp = sorted[i];
        sorted[i] = sorted[i+1];
        sorted[i+1] = temp;
    }
    else if(sorted[i][str_ind] == sorted[i+1][str_ind] && str_ind < smallest_len(sorted[i],sorted[i+1]))
    {
        sort_alphabetically(sorted, i, sort, str_ind+1);
    }
    
}


string ask_question(string q)
{
    string input = "";
    cout << q << endl;
    getline(cin, input);
    return input;
}
