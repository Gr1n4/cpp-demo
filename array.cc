#include <iostream>
#include "array.h"

Array::Array(int value) {
  this->value = value;
  this->next = 0;
};

Array::~Array() {
  std::cout << "destructor" << std::endl;
  delete [] this->headValues;
  if (this->next != 0) {
    delete this->next;
  }
};

void Array::push(int value) {
  Array* current = this;
  while (current->next != 0) {
    current = current->next;
  }
  current->next = new Array(value);
};

int Array::length() {
  Array* current = this;
  int count = 1;
  while (current->next != 0) {
    current = current->next;
    count++;
  }
  return count;
};

int* Array::get() {
  int count = this->length();
  int i = 0;
  this->headValues = new int[count];
  Array* current = this;
  this->headValues[i] = current->value;
  while (current->next != 0) {
    current = current->next;
    i++;
    this->headValues[i] = current->value;
  }
  return this->headValues;
}