#include "include/driver_framebuffer.h"
const uint8_t ipane7x5Bitmaps[] = {
  0x00, 0xFA, 0x00, 0xB6, 0x80, 0x52, 0xBE, 0xAF, 0xA9, 0x40, 0x23, 0xE8, 
  0xE2, 0xF8, 0x80, 0xC6, 0x44, 0x44, 0x4C, 0x60, 0x64, 0xA8, 0x8A, 0xC9, 
  0xA0, 0xD8, 0x00, 0x2A, 0x48, 0x88, 0x00, 0x88, 0x92, 0xA0, 0x00, 0x51, 
  0x3E, 0x45, 0x00, 0x21, 0x3E, 0x42, 0x00, 0xD8, 0x00, 0xE0, 0xF0, 0x08, 
  0x88, 0x88, 0x00, 0x74, 0x67, 0x5C, 0xC5, 0xC0, 0x59, 0x24, 0xB8, 0x00, 
  0x74, 0x42, 0x22, 0x23, 0xE0, 0xF8, 0x88, 0x20, 0xC5, 0xC0, 0x11, 0x95, 
  0x2F, 0x88, 0x40, 0xFC, 0x3C, 0x10, 0xC5, 0xC0, 0x32, 0x21, 0xE8, 0xC5, 
  0xC0, 0xF8, 0x44, 0x44, 0x21, 0x00, 0x74, 0x62, 0xE8, 0xC5, 0xC0, 0x74, 
  0x62, 0xF0, 0x89, 0x80, 0xF3, 0xC0, 0xF3, 0x60, 0x12, 0x48, 0x42, 0x10, 
  0xF8, 0x3E, 0x00, 0x84, 0x21, 0x24, 0x80, 0x74, 0x42, 0x22, 0x00, 0x80, 
  0x74, 0x42, 0xDA, 0xD5, 0xC0, 0x74, 0x63, 0x1F, 0xC6, 0x20, 0xF4, 0x63, 
  0xE8, 0xC7, 0xC0, 0x74, 0x61, 0x08, 0x45, 0xC0, 0xE4, 0xA3, 0x18, 0xCB, 
  0x80, 0xFC, 0x21, 0xE8, 0x43, 0xE0, 0xFC, 0x21, 0xC8, 0x42, 0x00, 0x74, 
  0x61, 0x09, 0xC5, 0xC0, 0x8C, 0x63, 0xF8, 0xC6, 0x20, 0xE9, 0x24, 0xB8, 
  0x00, 0x38, 0x84, 0x21, 0x49, 0x80, 0x8C, 0xA9, 0x8A, 0x4A, 0x20, 0x84, 
  0x21, 0x08, 0x43, 0xE0, 0x8E, 0xEB, 0x18, 0xC6, 0x20, 0x8C, 0x73, 0x59, 
  0xC6, 0x20, 0x74, 0x63, 0x18, 0xC5, 0xC0, 0xF4, 0x63, 0xE8, 0x42, 0x00, 
  0x74, 0x63, 0x1A, 0xC9, 0xA0, 0xF4, 0x63, 0xEA, 0x4A, 0x20, 0x7C, 0x20, 
  0xE0, 0x87, 0xC0, 0xF9, 0x08, 0x42, 0x10, 0x80, 0x8C, 0x63, 0x18, 0xC5, 
  0xC0, 0x8C, 0x63, 0x18, 0xA8, 0x80, 0x8C, 0x63, 0x5A, 0xD5, 0x40, 0x8C, 
  0x54, 0x45, 0x46, 0x20, 0x8C, 0x54, 0x42, 0x10, 0x80, 0xF8, 0x44, 0x44, 
  0x43, 0xE0, 0xF2, 0x49, 0x38, 0x00, 0x82, 0x08, 0x20, 0x80, 0xE4, 0x92, 
  0x78, 0x00, 0x22, 0xA2, 0x00, 0xF8, 0x00, 0x88, 0x80, 0x70, 0x5F, 0x17, 
  0x80, 0x84, 0x2D, 0x98, 0xC7, 0xC0, 0x74, 0x21, 0x17, 0x00, 0x08, 0x5B, 
  0x38, 0xC5, 0xE0, 0x74, 0x7F, 0x07, 0x00, 0x32, 0x51, 0xC4, 0x21, 0x00, 
  0x7C, 0x5E, 0x13, 0x00, 0x84, 0x2D, 0x98, 0xC6, 0x20, 0x43, 0x24, 0xB8, 
  0x00, 0x10, 0x31, 0x19, 0x60, 0x88, 0x9A, 0xCA, 0x90, 0xC9, 0x24, 0xB8, 
  0x00, 0xD5, 0x6B, 0x5A, 0x80, 0xB6, 0x63, 0x18, 0x80, 0x74, 0x63, 0x17, 
  0x00, 0xF4, 0x7D, 0x08, 0x00, 0x6C, 0xDE, 0x10, 0x80, 0xB6, 0x61, 0x08, 
  0x00, 0x74, 0x1C, 0x1F, 0x00, 0x42, 0x38, 0x84, 0x24, 0xC0, 0x8C, 0x63, 
  0x36, 0x80, 0x8C, 0x62, 0xA2, 0x00, 0x8C, 0x6B, 0x55, 0x00, 0x8A, 0x88, 
  0xA8, 0x80, 0x8C, 0x5E, 0x17, 0x00, 0xF8, 0x88, 0x8F, 0x80, 0x29, 0x44, 
  0x88, 0x00, 0xFE, 0x00, 0x89, 0x14, 0xA0, 0x00, 0x20, 0xBE, 0x22, 0x00, 
  0x22, 0x3E, 0x82, 0x00
};

const GFXglyph ipane7x5Glyphs[] = {
  {     0,   1,   1,   6,    0,   -3 }   // ' '
 ,{     1,   1,   7,   6,    2,   -3 }   // '!'
 ,{     3,   3,   3,   6,    1,   -3 }   // '"'
 ,{     5,   5,   7,   6,    0,   -3 }   // '#'
 ,{    10,   5,   7,   6,    0,   -3 }   // '$'
 ,{    15,   5,   7,   6,    0,   -3 }   // '%'
 ,{    20,   5,   7,   6,    0,   -3 }   // '&'
 ,{    25,   2,   3,   6,    1,   -3 }   // '''
 ,{    27,   3,   7,   6,    1,   -3 }   // '('
 ,{    31,   3,   7,   6,    1,   -3 }   // ')'
 ,{    35,   5,   5,   6,    0,   -2 }   // '*'
 ,{    39,   5,   5,   6,    0,   -2 }   // '+'
 ,{    43,   2,   3,   6,    1,    1 }   // ','
 ,{    45,   3,   1,   6,    1,    0 }   // '-'
 ,{    46,   2,   2,   6,    1,    1 }   // '.'
 ,{    47,   5,   5,   6,    0,   -2 }   // '/'
 ,{    51,   5,   7,   6,    0,   -3 }   // '0'
 ,{    56,   3,   7,   6,    1,   -3 }   // '1'
 ,{    60,   5,   7,   6,    0,   -3 }   // '2'
 ,{    65,   5,   7,   6,    0,   -3 }   // '3'
 ,{    70,   5,   7,   6,    0,   -3 }   // '4'
 ,{    75,   5,   7,   6,    0,   -3 }   // '5'
 ,{    80,   5,   7,   6,    0,   -3 }   // '6'
 ,{    85,   5,   7,   6,    0,   -3 }   // '7'
 ,{    90,   5,   7,   6,    0,   -3 }   // '8'
 ,{    95,   5,   7,   6,    0,   -3 }   // '9'
 ,{   100,   2,   5,   6,    1,   -2 }   // ':'
 ,{   102,   2,   6,   6,    1,   -2 }   // ';'
 ,{   104,   4,   7,   6,    0,   -3 }   // '<'
 ,{   108,   5,   3,   6,    0,   -1 }   // '='
 ,{   111,   4,   7,   6,    0,   -3 }   // '>'
 ,{   115,   5,   7,   6,    0,   -3 }   // '?'
 ,{   120,   5,   7,   6,    0,   -3 }   // '@'
 ,{   125,   5,   7,   6,    0,   -3 }   // 'A'
 ,{   130,   5,   7,   6,    0,   -3 }   // 'B'
 ,{   135,   5,   7,   6,    0,   -3 }   // 'C'
 ,{   140,   5,   7,   6,    0,   -3 }   // 'D'
 ,{   145,   5,   7,   6,    0,   -3 }   // 'E'
 ,{   150,   5,   7,   6,    0,   -3 }   // 'F'
 ,{   155,   5,   7,   6,    0,   -3 }   // 'G'
 ,{   160,   5,   7,   6,    0,   -3 }   // 'H'
 ,{   165,   3,   7,   6,    1,   -3 }   // 'I'
 ,{   169,   5,   7,   6,    0,   -3 }   // 'J'
 ,{   174,   5,   7,   6,    0,   -3 }   // 'K'
 ,{   179,   5,   7,   6,    0,   -3 }   // 'L'
 ,{   184,   5,   7,   6,    0,   -3 }   // 'M'
 ,{   189,   5,   7,   6,    0,   -3 }   // 'N'
 ,{   194,   5,   7,   6,    0,   -3 }   // 'O'
 ,{   199,   5,   7,   6,    0,   -3 }   // 'P'
 ,{   204,   5,   7,   6,    0,   -3 }   // 'Q'
 ,{   209,   5,   7,   6,    0,   -3 }   // 'R'
 ,{   214,   5,   7,   6,    0,   -3 }   // 'S'
 ,{   219,   5,   7,   6,    0,   -3 }   // 'T'
 ,{   224,   5,   7,   6,    0,   -3 }   // 'U'
 ,{   229,   5,   7,   6,    0,   -3 }   // 'V'
 ,{   234,   5,   7,   6,    0,   -3 }   // 'W'
 ,{   239,   5,   7,   6,    0,   -3 }   // 'X'
 ,{   244,   5,   7,   6,    0,   -3 }   // 'Y'
 ,{   249,   5,   7,   6,    0,   -3 }   // 'Z'
 ,{   254,   3,   7,   6,    1,   -3 }   // '['
 ,{   258,   5,   5,   6,    0,   -2 }   // '\'
 ,{   262,   3,   7,   6,    1,   -3 }   // ']'
 ,{   266,   5,   3,   6,    0,   -3 }   // '^'
 ,{   269,   5,   1,   6,    0,    3 }   // '_'
 ,{   271,   3,   3,   6,    0,   -3 }   // '`'
 ,{   273,   5,   5,   6,    0,   -1 }   // 'a'
 ,{   277,   5,   7,   6,    0,   -3 }   // 'b'
 ,{   282,   5,   5,   6,    0,   -1 }   // 'c'
 ,{   286,   5,   7,   6,    0,   -3 }   // 'd'
 ,{   291,   5,   5,   6,    0,   -1 }   // 'e'
 ,{   295,   5,   7,   6,    0,   -3 }   // 'f'
 ,{   300,   5,   5,   6,    0,   -1 }   // 'g'
 ,{   304,   5,   7,   6,    0,   -3 }   // 'h'
 ,{   309,   3,   7,   6,    1,   -3 }   // 'i'
 ,{   313,   4,   7,   6,    0,   -3 }   // 'j'
 ,{   317,   4,   7,   6,    0,   -3 }   // 'k'
 ,{   321,   3,   7,   6,    1,   -3 }   // 'l'
 ,{   325,   5,   5,   6,    0,   -1 }   // 'm'
 ,{   329,   5,   5,   6,    0,   -1 }   // 'n'
 ,{   333,   5,   5,   6,    0,   -1 }   // 'o'
 ,{   337,   5,   5,   6,    0,   -1 }   // 'p'
 ,{   341,   5,   5,   6,    0,   -1 }   // 'q'
 ,{   345,   5,   5,   6,    0,   -1 }   // 'r'
 ,{   349,   5,   5,   6,    0,   -1 }   // 's'
 ,{   353,   5,   7,   6,    0,   -3 }   // 't'
 ,{   358,   5,   5,   6,    0,   -1 }   // 'u'
 ,{   362,   5,   5,   6,    0,   -1 }   // 'v'
 ,{   366,   5,   5,   6,    0,   -1 }   // 'w'
 ,{   370,   5,   5,   6,    0,   -1 }   // 'x'
 ,{   374,   5,   5,   6,    0,   -1 }   // 'y'
 ,{   378,   5,   5,   6,    0,   -1 }   // 'z'
 ,{   382,   3,   7,   6,    1,   -3 }   // '{'
 ,{   386,   1,   7,   6,    2,   -3 }   // '|'
 ,{   388,   3,   7,   6,    1,   -3 }   // '}'
 ,{   392,   5,   5,   6,    0,   -2 }   // '->'
 ,{   396,   5,   5,   6,    0,   -2 }   // '<-'
};

const GFXfont ipane7x5 = {
  (uint8_t  *)ipane7x5Bitmaps,
  (GFXglyph *)ipane7x5Glyphs,
  0x20, 0x7F, 7 };

// Approx. 1090 bytes