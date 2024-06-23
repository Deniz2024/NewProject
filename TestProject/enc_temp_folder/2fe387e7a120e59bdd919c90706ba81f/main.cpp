#include <Windows.h> // Include the windows header

#include <stdint.h> //cheader

#include <string> // STL header
#include <iostream>

// extern "external linkage specifies the linker to link in C
extern "C" {
    declspec(dllimport) void soSomething(void)
{

}
}

uint32_t main(void) 
{
    // STL (C++)

    #define INPUT_STRING "asdfasdfasdf\0"

    const std::string test(INPUT_STRING);
    test.size();

    std::cout << test << std::endl;

    std::string *stringPtr = nullptr;
    //*1stringPtr = new (std::string("test"));


    // 8bit == 1 byte


    // string 'a' 11110000 (1 byte) 
    // 'asdfasdf\0'



    // C
    // Preprocessor symbol: 
    #define MAX_STR_SIZE 128 // replacing MAX_STR_SIZE to 128 in the pre-processor




    // Allocating memory the stack
    /*
    * There are two places you can allocate memory: heap and stack. 
    *  The stack is the most critical memory, it contains the state of functions (wh
    *  C++14 everything after 2014 is shitttttt
    *  'auto'
    */

    // C, C++ (increment of c) by OOP paradigm object-oriented programming

    auto stringgg = L"siodfjaosidfjioasdjf";
    //char newStr = 'a';
    //char newStr = 97;

    //32 bits = 4 bytes (IP)
    //64 bits = 8 bytes (ipv6) (stack 

    // operator precedence (logic)
    // & (and logic) 
    // && (comparison, if clause)
    // | (logical or)
    // || (logical or comparison) if a || b then c, so either a or b must be true for c to be true
    // ^ (XOR logic)
    // ! (negation)
    // ~ (invertion, logical bitwise inversion)
    // << (register shift left)
    // >> (register shift right)
    // + (addition)
    // * (multiplication) or scaling
    // % (modulus, remainder of the division operation)
    // / (division, remember, if you divide by 0 C will crash. Specifically a soft exception will happen and WIndows will crash your program). C++ recovers using exception handling
    // - (subtraction)

    // 1001 & 1010 = 1000;
    // 1001 && 1010 == true (1)
    if (a && b) { //comparisons use ||, &&
        //asdf
    }

    //2 * 2 = 4;
    //10 * 10 = 1000
    uint8_t q = 2;
    q = q << 2; // same as q * 2. Why? because we're shifting the register/variable q, which is 2 (binary 10), towards the left by two, making 1000 (4).
    // So shifting is equal to multiplication, in binary!
    q = q >> 2; // divide by 2, but this may produce arbitrary results as no remainder is returned (i.e. you can lose bits going either too far left or right)

    char *ptr2 = (char *)0x05;
    !(*ptr2 << 2);
    ~*ptr2; 
    *ptr2 ^= *ptr2; //a ^ a = 0; // equal to *ptr2 = 0;
    ptr2 = NULL;

    typedef struct a {
        int a;
        char b;
        char c[245];
        void *ptr;
    };

    //32bits in size, it just depends on how the CPU interprets it. As an int32, or a float, what about a double? That's why we
    // explicitly declare variables with a type. Also why 'auto' is shit, even though it's not c++.
    float asdf; //0.00041141 64-bits
    double asdfasdf; //234234.98002394234 32-bits

    // Monetary dollars?
    // do you need more than 0.00?
    // use a double? Why? Optimization mother fugggggaaaa


    typedef enum _state {
        STATE_ON = 0,
        STATE_OFF,
        STATE_CONTINUE
    } STATE, *PSTATE;


    typedef uint32_t nigga;

    // char is guaranteed to be 8 bits (1 byte) across all compilers and architectures. C99 standard. 
    char cStr; //8bit or 1 byte, not a pointer!!!!!
    char cStr2[32] = { 'a' }; // 1 byte (8-bits) * 32, all arrays are considered (loosely) as pointers

    for (uint16_t i = 0; i <= sizeof(cStr2) / sizeof(char); i++) {
        cStr2[i] = 'a';
        break;
    }

    if (cStr2[5] == 'a') {
        printf("ok");
    }

    printf("hello world!!!"); //ASLR Address Space Layout Randomization (Windows), look up smashin' the stack


    char *ptr = &cStr2[9]; //syntax candy. C doesn't need it cuse u have ptr arthimetic, but it's handy
    ptr = (char *)0x012FFDD8;//(char *)((uint8_t)cStr2 + 9); //pointer arthimetic [9] 
    ptr = (char *)(char *)((uint8_t)cStr2 + 9); 
    *ptr = 0; // disabled the byte at address 0x012FFDD8
    ptr++; //cStr2[10];
    *ptr = 0x62;

    // look up virtual and physical memory (important!!!) and what makes a process, how is a processes memory space
    //  resereved and how is it converted to physical memory? (i'll tell you; it is the MMU (memory management unit -- CPU) + the OS that
    //  have tables (arrays) of pages that are essentially conversions between virtual and physical memory.
    for (uint8_t i = 0x00; i <= sizeof(uint64_t); ++i) {
        int8_t randNum = rand();
        *(uint8_t *)(i) = randNum;
        const uint8_t randNumOut = *(uint8_t *)(i);
        if (randNum != randNumOut) {
            return false; //error in memory because the value of a byte has changed
        }
    }


    struct a i; //32bits in size (unsigned)
    uint8_t b; //8bits integer in size (unsigned)
    int8_t d = 'c'; //8bit interger that is signed 10101010 1111010101 10101010
    //0/1 (sign) 111 1111
    //1111 1111



    // C function (CRL)
    memcpy(cStr2, INPUT_STRING, strlen(INPUT_STRING));

    char cOutput[MAX_STR_SIZE * 2] = { 0 };
    //vsnprintf(cOutput, MAX_STR_SIZE, "format string niggazzzz: %s", cStr2);

    printf(cOutput);

    Sleep(INFINITE);


    return 0;
}
