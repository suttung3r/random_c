using namespace std;

#include <stdio.h>
#include <sstream>
#include <vector>

int main(int argc, char** argv)
{
  const char * test = "00112233";
  stringstream ss;
  string res;
  vector<char> bytes;
  ss << hex << test;
  ss >> bytes;
  printf("test %s\n", ss.str().c_str());
  printf("test %d\n", bytes[0]);
}
