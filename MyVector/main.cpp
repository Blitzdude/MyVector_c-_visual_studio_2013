#include "MyVector.cpp"

/*
Tee luokka omaVektori, jolla on attribuuttina taulukko, jonka koko varataan dynaamisesti.Tehd��n aluksi int - lukuja sy�v� omaVektori - luokka.

Luokalla on metodit :
void lisaa(int uusiAlkio)
	tarkista, onko taulukko jo t�ynn�.Jos on, varaa tilaa uudelle taulukolle ja kopio vanhat arvot uuteen taulukkoon.
void tulosta()
sek� ainakin yksi konstruktori, joka ottaa parametrina taulukon alkukoon.
Lis�teht�v� : toteuta metodit
			  void poista(int indeksi)
			  bool onkoTaulukossa(int luku)
Mit� attribuutteja luokka tarvitsee ? (vinkki : ainakin kolme...)
*/

int main(int argc, char* argv[])
{
	MyVector myVec(10);
	myVec.add(2);
	myVec.add(3);
	myVec.print();
	return 0;
}