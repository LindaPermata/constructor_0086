#include <iostream>
#include <string>
using namespace std;

class buku
{
    string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; //chain function
    }
    string getJudul()
    {
        return this->juduk;
    }
} bukunya;