//  döndüreceğin değer için bellekten dinamik yer ayırma
//  sonuçları çıktıya ata, ardından çıktıyı döndür
//  çıkıt null yada önceden tahsis edilmemeli

#include <string.h>

char *vowel_one(const char *input, char *output) {
    unsigned long i;
    for(i = 0; i < strlen(input); i++)
    {
      if(input[i] == 'a' ||
         input[i] == 'e' ||
         input[i] == 'i' ||
         input[i] == 'o' ||
         input[i] == 'u' ||
         input[i] == 'A' ||
         input[i] == 'E' ||
         input[i] == 'I' ||
         input[i] == 'O' ||
         input[i] == 'U' )
         output[i] = '1';
      else
        output[i] = '0';
    }
    output[i] = '\0';
    return output;
}