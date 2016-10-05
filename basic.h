#include <stdio.h>

int sum(int a,int b){
  return (a+b);}

int difference(int a,int b){
  return (a-b);}

int product(int a,int b){
  return (a*b);}

int division(int a,int b){
  if(b==0) return -1;
  return (a/b);}

int remainder(int a,int b){
  return (a%b);}

int negative(int a){
  return (-a);}

int increment(int a){
  return (++a);}

int decrement(int a){
  return (--a);}
