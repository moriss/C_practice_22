
bool	1 bite  // EG:if(x > y), is boolean since it can only be either yes or no or true or false
char	1 bite //  A single character like 'a' or 't'
int	4 bites // roughly up to 2 billion (taking into account negative numbers)
float	4 bites // A floating-point value, or real number with a decimal value
double	8 bites // A floating-point value roughly double in size of a float.
long 	8 bites // To 4 billion and beyond
string  An indeterminate number of bytes since it can be a whole book


//Types, formats, 
//And the CS50 library has corresponding functions to get input of various types:
// Its best to declare a variable just when you need it (scope).
get_char  //: only 1 byte of memory for individual characters.
get_float  //:real (decimal) numbers contained in 4 bytes of memory
get_double // For storing floating point numbers. Double precision compared to floats. So: are contained in 8 bytes of data.
get_int //: 4 bytes of memory or 32 bits, 50% pos numbs, 50% negatives -2 to the 31st and 2 to the 31st - 1
// range= approx negative 2 billion to positive 2 billion
// unsigned int : Only allows positive numbers thus doubling positive's range to approx 4 billion 

 void //, a type but not a data type. For functions that don't return a value eg printf. The Result is not caputered and stored,  just printed on screen 
//as a side event. Therefore, printf is a void function.

// void my(void)  : parameters can also be void. EG: no arguments get passed into main.

//############################
// get_string, is from the cs59 library
//############################

//Placeholders
// For printf, too, there are different placeholders for each type:
%c //for chars
%f //for floats, doubles
%i // for ints
%li // for longs
%s // for strings

