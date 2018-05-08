#include "GlobalFunctions.h"
#include <string>
using namespace std;
string ^ encryption(string ^ x)
{
	string ^ encrypted;
	char key = 'x';
	for (int i = 0; i <12; ++i) {
		encrypted +=x[i] ^ (int(key) + i) % 20;
    return encrypted;
}
string ^ decryption(string ^ x)
{
		string ^ decrypted;
		char key = 'x';
		for (int i = 0; i <12; ++i) {
			decrypted += x[i] ^ (int(key) + i) % 20;
			return decrypted;
}
int main()
{
return 0;
}