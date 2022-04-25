//Exercício derivado do 2.4
#include <assert.h>

int mediana(int a, int b, int c)
{
    unsigned int max, min, r;
    if ((a <= b) && (b <= c)) {min = a; r = b; max = c;}  // a b c
    if ((a <= c) && (c <= b)) {min = a; r = c; max = b;}  // a c b
    if ((b <= a) && (a <= c)) {min = b; r = a; max = c;}  // b a c
    if ((b <= c) && (c <= a)) {min = b; r = c; max = a;}  // b c a
    if ((c <= a) && (a <= b)) {min = c; r = a; max = b;}  // c a b
    if ((c <= b) && (b <= a)) {min = c; r = b; max = a;}  // c b a
    assert((min <= r) && (r <= max)); 
}