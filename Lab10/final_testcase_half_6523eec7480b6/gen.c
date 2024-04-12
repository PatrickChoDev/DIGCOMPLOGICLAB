#include <stdio.h>
int main(int argc, const char **argv) {
   const int N = 4;
   unsigned char buf[] = {0x01, 0x03, 0x04, 0x00};
   FILE *fo = fopen("t0.bin", "wb");
   fwrite(buf, N, 1, fo );
   fclose(fo);
   return 0;
}
