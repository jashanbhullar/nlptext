// basic mathe functions
#include <stdio.h>

// sum function return upto -2,147,483,648 to 2,147,483,647
int sum(int a,int b){
  return (a+b);}
// difference function
int difference(int a,int b){
  return (a-b);}
// multiplication function
int product(int a,int b){
  return (a*b);}
// division function which return -1 if value of b is zero
// else retun the a/b
int division(int a,int b){
  if(b==0) return -1;
  return (a/b);}
// function for modulus
int remainder(int a,int b){
  return (a%b);}
// function to return the negative value of the given value
int negative(int a){
  return (-a);}
// function to pre increment the vaule
int pincrement(int a){
  return (++a);}
// function to pre decrement the value
int pdecrement(int a){
  return (--a);}
// function to post increment the value
int incrementp(int a){
  return (a++);}
// function to post decrement the value
int decrementp(int a){
  return (a--);}
