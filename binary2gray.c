#include <stdio.h>

int main(void)
{
  unsigned short buf[4];
  int len, i;
  FILE *fin;
  FILE *fout;

  fin = fopen( "stream_Shon_persist.bin", "rb");
  fout = fopen( "stream_Shon_gray.bin", "wb");
 
  while ( (len = fread( buf, 2, 4, fin)) != 0 ) {

    for ( i=0; i < len; i++)
      buf[i] ^= (buf[i] >> 1);

    fwrite( buf, 2, len, fout);
  }
  fclose(fin);
  fclose(fout);
}
