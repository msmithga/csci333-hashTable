#ifndef __HASH_H__
#define __HASH_H__

#include "Entry.h"

#include <string>

using std::string;

template <typename V>
class Hash {
 private:
  V* hashTable;
  int hashFunction(string k);

 public:
  Hash(int initialSize = 10);
  ~Hash();
  void insert(string  k, V v);
  V lookUp(string k, V v);
  void remove(string k, V v);

);

#endif
