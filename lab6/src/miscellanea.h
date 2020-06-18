#ifndef MISCELLANEA_H
#define MISCELLANEA_H
#include <netinet/ip.h>

struct Args {
  uint64_t begin;
  uint64_t end;
  uint64_t mod;
};

uint64_t MultModulo(uint64_t a, uint64_t b, uint64_t mod);

#endif