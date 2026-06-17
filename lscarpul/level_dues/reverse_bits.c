#include <stdio.h>
#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;
    while(i > 0)
    {
        result = result << 1;
        result = result | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (result);
}






















#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;
    while((i--) > 0)
    {
        result = (octet >> i & 1) + '0';
        write(1, &result, 1);
    }
}


// Metti qui la tua funzione print_bits corretta
void print_bits(unsigned char octet);
unsigned char reverse_bits(unsigned char octet);

int main(void)
{
    unsigned char originale = 0x26; // 00100110
    unsigned char invertito = reverse_bits(originale); // Dovrebbe essere 01100100
    
    printf("Originale: ");
    print_bits(originale);
    printf("\n");
    
    printf("Invertito: ");
    print_bits(invertito);
    printf("\n");
    
    return (0);
}