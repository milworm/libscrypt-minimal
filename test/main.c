//scrypt_hash_password(const uint8_t * passwd, size_t passwdlen,
//  const uint8_t * salt, size_t saltlen, uint64_t N, uint32_t r, uint32_t p

#include <stdio.h>
#include <stdint.h>
#include "../src/scrypt.h"

void main () {
  uint8_t salt[32];
  int status;
  uint8_t source[64];
  uint8_t res[64];

  status = scrypt(source, 64, salt, 32, 8, 8, 8, res, 64);
  printf("%x", res);
}
