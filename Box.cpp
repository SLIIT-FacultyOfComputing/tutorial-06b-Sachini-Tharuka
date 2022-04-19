#include<iostream>
#include "Box.h"

void Box::setLength(int L){
  length=L;
}
void Box::setWidth(int W){
  width=W;
}
void Box::setHeight(int H){
  height=H;
}
int Box::getLength(){
  return length;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}
int Box::calcVolume(int l,int w, int h) {
  return l*w*h;
}
