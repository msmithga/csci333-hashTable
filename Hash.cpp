#include "Hash.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename V>
Hash<V>::Hash(int initialSize) {
  hashTable = new Entry<V>[initialSize];
}

template <typename V>
Hash<V>::~Hash() {

}

template <typename V>
int Hash<V>::hashFunction(string k) {
  int hash;
  int sum = 0;

  for(int i = 0; i < (int) k.size(); ++i) {
    sum += (int) k[i];
  }

  hash = sum % size;

  return hash;
}

template <typename V>
void Hash<V>::insert(string k, V v) {

}

template <typename V>
V Hash<V>::lookUp(string k, V v) {
  return entry;
}

template <typename V>
void Hash<V>::remove(string k, V v) {

}


template class Hash<int>;
template class Hash<double>;
template class Hash<string>;
