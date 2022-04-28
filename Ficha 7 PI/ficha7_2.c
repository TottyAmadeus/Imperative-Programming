#include <stdio.h>
#include <ctype.h>

int main()
{
    int letras[26] = {0};  // letras [Z, Y, X, W ,V ...]
    char in;
    scanf(" %c", &in);
    getchar();
    switch(in)
    {
        case 'A':
            letras[0] += 1;
            break;

        case 'B':
            letras[1] += 1;
            break;

        case 'C':
            letras[2] += 1;
            break;
        
        case 'D':
            letras[3] += 1;
            break;

        case 'E':
            letras[4] += 1;
            break;

        case 'F':
            letras[5] += 1;
            break;
        
        case 'G':
            letras[6] += 1;
            break;

        case 'H':
            letras[7] += 1;
            break;

        case 'I':
            letras[8] += 1;
            break;
        
        case 'J':
            letras[9] += 1;
            break;

        case 'K':
            letras[10] += 1;
            break;

        case 'L':
            letras[11] += 1;
            break;

        case 'M':
            letras[12] += 1;
            break;

        case 'N':
            letras[13] += 1;
            break;
        
        case 'O':
            letras[14] += 1;
            break;

        case 'P':
            letras[15] += 1;
            break;
        
        case 'Q':
            letras[16] += 1;
            break;
        
        case 'R':
            letras[17] += 1;
            break;
        
        case 'S':
            letras[18] += 1;
            break;
        

        default:
            break;
    }

    printf("%c", in);

    
}