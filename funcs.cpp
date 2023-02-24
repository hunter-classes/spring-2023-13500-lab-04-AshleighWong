//Spring 2023 - Lab 04 - funcs.cpp
//Last name: Wong
//First name: Ashleigh
//GitHub username: AshleighWong


#include <iostream>
#include "funcs.h"


//Task A
std::string box(int width, int height)
{
  std::string shape = "";
  for (int i = 0; i < height; i++)
    {
      for(int j = 0; j < width; j++)
        {
          shape = shape + "*";
        }
      shape = shape + "\n";
    }
  return shape;
}



//Task B
std::string checkerboard(int width, int height)
{
  std::string shape = "";
  for (int i = 0; i < height; i++) //height(column). loop goes through the columns first 
    {
      for(int j = 0; j < width; j++) //width(row)
        {
          if (i % 2 == 0 && j % 2 == 0) //If column is even and the row coordinate is even.
          {
            shape = shape + "*";
          }
          else if (i % 2 == 0 && j % 2 != 0) //If the column is even and the row coordinate is odd
          {
            shape = shape +" ";
          }
          else if (i % 2 != 0 && j % 2 != 0) //If column and row is coordinate is odd
          {
            shape = shape + "*";
          }
          else if (i % 2 != 0 && j % 2 == 0) //If column is odd and row coordinate is even.
          {
            shape = shape + " ";
          }
        }
      shape = shape + "\n";
    }
  return shape;
}



//Task C
std::string cross(int size)
{
  std::string shape = "";
  for (int i = 0; i < size; i++) 
  {
    for (int j = 0; j < size; j++) 
    {
      if (i == j || i == (size - j - 1)) 
      {
        shape = shape + "*";
      } 
      else 
      {
        shape = shape + " ";
      }
    }
    shape = shape + "\n";
  }
  return shape;
}




//Task D
std::string lower(int length)
{
  std::string shape = "";
  for (int i = 0; i < length; i++)
    {
      for (int j = 0; j <= i; j++)
        {
          shape = shape + "*";
        }
      shape = shape + "\n";
    }
  return shape;
}





//Task E
std::string upper(int length)
{
  std::string shape = "";
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < i; j++)
      {
        shape = shape + " ";
      }
    for (int j = 0; j < length - i; j++)
      {
        shape = shape + "*";
      }
    shape = shape + "\n";
  }
  return shape;
}



//Task F

std::string trapezoid(int width, int height)
{
  std::string shape = "";
  std::string imp = "Impossible Shape!";
  int character = width; //
  int spaces = 0; //spaces initialized to 0
  if(width / 2 <= height) /*checks condition of if the trapezoid dimentions are possible or not. If width/2 should not be less than the height or else there will be 0 stars printed.*/
  {
    return imp; //returns that its not possible and breaks
  }
    
  for (int i = height; i > 0; i--) //starts from height and decreases
  {
    for (int j = 0; j < spaces; j++) //will print space if j < spaces. spaces will increase by one. (give the illusion that the stars are centered)
    { 
      shape = shape + " ";
    }
    for (int k = 0; k < character; k++) // prints the stars after the spaces. Decreases by 2 each row
    {
      shape = shape + "*";
    }
    spaces++;
    character = character - 2;
    shape = shape + "\n";
  }
  return shape;
}

