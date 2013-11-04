#include <stdio.h>

unsigned short grayToBinary(unsigned short num)
{
    unsigned short mask;
    for (mask = num >> 1; mask != 0; mask = mask >> 1)
    {
        num = num ^ mask;
    }
    return num;
}

int main(void)
{
  unsigned short buf[4];
  int len, i;
  FILE *fin;
  FILE *fout;

  fin = fopen( "stream_Shon_gray.bin", "rb");
  fout = fopen( "stream_Shon_binary.bin", "wb");
 
  while ( (len = fread( buf, 2, 4, fin)) != 0 ) {

    for ( i=0; i < len; i++)
      buf[i] = grayToBinary( buf[i] );

    fwrite( buf, 2, len, fout);
  }
  fclose(fin);
  fclose(fout);
}
