/*
TATU REIJONEN IIO14S1

Harjoitus 13 (Palautus vko 44)
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka
*/



#include <iostream>
#include <cstring>
using namespace std;
void main()
{

	char etunimi[20];
	char sukunimi[20];

	cout << "Anna etunimi: ";
	cin >> etunimi;

	cout << "Anna sukunimi: ";
	cin >> sukunimi;

	strcat_s(etunimi, " ");
	strcat_s(etunimi, sukunimi);
	cout << "Nimesi oli " << etunimi;


}
