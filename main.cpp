

//#include <stdio.h>
#include <iostream>
#include <sstream>
#include "algorytmClara.h"
#include "algorytmClarans.h"
#include "readingModule.h"
#include "algorytmPam.h"

std::vector<punkt> generujDane();


using namespace std;

int main() {
	std::vector<punkt> dane=generujDane();
	AlgorytmClara algClara=AlgorytmClara(dane,3);
	std::cout<<"[INFO] wspolczynnik Silhouette dla alg. Clara: "<<algClara.silhouette_score(dane,algClara.wyliczenieMedodoidow())<<endl;

//	AlgorytmPam algPam=AlgorytmPam(generujDane(),2);
//	algPam.pam();
    return 0;
}

std::vector<punkt> generujDane(){
//    testy alg. pam
//	int n=3;
//	int dl_wektora=2;


//    testy alg. clara
	int n=100;
	int dl_wektora=2;
	std::vector<punkt> dane;
	for(int i=0;i<n;i++){
		punkt punktNr (dl_wektora,1+i);
		dane.push_back(punktNr);
	}

	for(int i=0;i<n;i++){
		punkt punktNr (dl_wektora,550+i);
		dane.push_back(punktNr);
	}
	return dane;
}



