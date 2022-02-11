#include "tabhash.h"

// Simple Tabulation Hash function

void init_table(){
    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 256; j++){
            T[i][j] = (uint64_t) rand();
        };
    }

}
uint64_t hash(uint64_t x) {

    
   
   uint64_t res = 0;
   for (int i = 0; i < 8; i++)
      res ^= T[i][(char)(x >> 8*i)];
   return res;
}


