#include <iostream>
using namespace std;
int main()
{
	cout << "\tAzerbaijan | Semed Vurgun\n";
	cout << "El bilir ki, sən mənimsən, \nYurdum, yuvam, məskənimsən,\nAnam doğma vətənimsən!\nAyrılarmı könül candan ?\nAzərbaycan, Azərbaycan!\n";
	cout << "\t\t\tSemed Vurgun \n\n\n";
	cout << "\t\t Satilir Rotveller\n adi: Ili\n Olcusu 100x250x50\ncekisi=150kq\n xarakteri komekcil\n ve agili, trenir olunmusdur\n yasi: 5\n qiymeti: 200$\n telefon nomresi:507 786 6755\n";



	double R1;
	cout << "yazin R1 qiymeti = ";
	cin >> R1;
	double R2;
	cout << "yazin R2 qiymeti = ";

	cin >> R2;
	double R3;
	cout << "yazin R3 qiymeti = ";

	cin >> R3;
	double R0=(R1 * R2 *R3)/ (R1 * R2 + R1 * R3 + R3 * R2);
	cout << "yazin R0 qiymeti = ";
	cout << R0<<endl;



	double L;
	cout << "dairenin uzunlugu = ";
	cin >> L;
	double p = 3.14;
	double r = (L / 2 / p);
	double S = (r * r * p);
	cout << "daireenin sahesi = " << S<<endl;

	double v;
	cout << "masinin ilkin syreti = ";
	cin >> v;

	double a;
	cout << "masinin tecili = ";
	cin >> a;

	double t;
	cout << "masinin ne qeder surub zamanla = ";
	cin >> t;
	double s = v * t + (a * t * t) / 2;
	cout << "Getdiyi mesafe = " << s << endl;


	double t1;
	cout << "Ne qeder vaxta qet etmelisen";
	cin >> t1;
	double s2;
	cout << "ne qeder yol qet etmelisen = ";
	cin >> s2;
	cout << "Lazim olan suret =" << s2 / t1 << endl;


	cout << "baslama vaxti qeyd edin(saat, deqiqe, saqniye):";
	double bsa;
	cin >> bsa;
	double bd;
	cin >> bd;
	double bs;
	cin >> bs;
	cout << "qutarma vaxti qeyd edin(saat, deqiqe, saqniye):";
	double qsa;
	cin >> qsa;
	double qd;
	cin >> qd;
	double qs;
	cin >> qs;
	double tarif = 0.3;
	double danisvaxt = (qsa*3600+qd*60+qs - (bsa * 3600 + bd * 60 + bs))/60;
	double qiymet = danisvaxt*tarif; 
	cout << "qiymetin = " << qiymet;
}
