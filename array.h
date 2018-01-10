#ifndef ARRAY_H_
#define ARRAY_H_

class Array {
  private:
    int value;
    int* headValues;
    Array* next;
  
  public:
    Array(int);
    ~Array();
    void push(int);
    int length();
    int* get();
};

#endif