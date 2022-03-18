#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
  if(l > 0)
     length = l;
  else
     length = 10;
}
void Box::setWidth(int w){
  if(w>0)
    width = w;
  else
    width=5;
}
void Box::setHeight(int h){
  if(h>0)
    height = h;
  else
    height = 5;
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
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  float volume;
  volume = length * width * height ;
  return volume;
}
