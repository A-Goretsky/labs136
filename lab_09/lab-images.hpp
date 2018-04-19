#include <iostream>

const int MAX_H = 512;
const int MAX_W = 512;

using std::string;

void readImage(int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(int image[MAX_H][MAX_W], int height, int width, string filenames);