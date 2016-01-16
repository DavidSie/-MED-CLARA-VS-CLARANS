/*
 * algorytm.h
 *
 *  Created on: 12 gru 2015
 *      Author: davidsiecinski
 */

#ifndef ALGORYTM_H_
#define ALGORYTM_H_


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <math.h>
#include <limits.h>
#include <cfloat>
#include <map>

// definiujemy nowe zmienne
typedef std::vector<double> punkt;
typedef std::vector<std::vector<double> > wektorPunktow;

class Algorytm {
protected:
	std::vector<punkt> dane_;

	double cij(punkt i,punkt j);
	std::vector<double> silhouette_samples(std::vector<punkt> data,std::vector<punkt> medoids);
public:
	void wypiszPunkt(punkt punkt_);
	std::vector<int> klasyfikacja_punktow(std::vector<punkt> metodoidy,std::vector<punkt> dane_do_klasyfikacji);
//	Algorytm(const std::vector<punkt> &dane){dane_=dane;}
};




#endif /* ALGORYTM_H_ */
