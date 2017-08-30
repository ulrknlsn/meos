
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is generated by the Perl script custom.pl. Please do 
// not modify this file directly. Change the script instead.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef MYSQLPP_CUSTOM_H
#define MYSQLPP_CUSTOM_H

#include "common.h"
#include "tiny_int.h"

#include <string>

#if defined(_MSC_VER) && (_MSC_VER < 1400)
#	error Please run the MySQL++ script lib/custom.pl with the -v compatibility flag.
#endif

#ifdef MYSQLPP_SSQLS_NO_STATICS
#	define MYSQLPP_SSQLS_EXPAND(...)
#else
#	define MYSQLPP_SSQLS_EXPAND(...) __VA_ARGS__
#endif

namespace mysqlpp {

enum sql_dummy_type {sql_dummy};

inline int sql_cmp(const std::string &a, const std::string &b) {
  return a.compare(b);
}

inline int sql_cmp(char a,char b) {
  return a-b;
}

inline int sql_cmp(unsigned char a,unsigned char b) {
  return a-b;
}

inline int sql_cmp(tiny_int a,tiny_int b) {
  return a-b;
}

inline int sql_cmp(int a,int b) {
  return a-b;
}

inline int sql_cmp(unsigned int a,unsigned int b) {
  return a-b;
}

inline int sql_cmp(short int a,short int b) {
  return a-b;
}

inline int sql_cmp(unsigned short int a,unsigned short int b) {
  return a-b;
}

inline int sql_cmp(unsigned long a,unsigned long b) {
  return a-b;
}

inline int sql_cmp(long a,long b) {
  return a-b;
}

inline int sql_cmp(double a,double b) {
  if (a == b) return 0;
  if (a <  b) return -1;
  return 1;
}

inline int sql_cmp(float a,float b) {
  if (a == b) return 0;
  if (a <  b) return -1;
  return 1;
}

inline int sql_cmp(longlong a,longlong b) {
  if (a == b) return 0;
  if (a <  b) return -1;
  return 1;
}

inline int sql_cmp(ulonglong a,ulonglong b) {
  if (a == b) return 0;
  if (a <  b) return -1;
  return 1;
}

#include "custom-macros.h"

} // end namespace mysqlpp

#endif

