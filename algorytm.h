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
	 std::vector<double> intra_cluster_distance(std::vector<punkt> medoidy,std::vector<punkt> data);
protected:
	std::vector<punkt> dane_;

	double cij(punkt i,punkt j);
	std::vector<double> silhouette_samples(std::vector<punkt> data,std::vector<punkt> medoids);
	std::vector<double> maximum(std::vector<double> A, std::vector<double> B);
	std::vector<double> roznica(std::vector<double> A, std::vector<double> B);
	std::vector<double> iloraz(std::vector<double> A, std::vector<double> B);
public:
	double odlegloscEuklidesowa(punkt i,punkt j);
	void wypiszPunkt(punkt punkt_);
	std::vector<int> klasyfikacja_punktow(std::vector<punkt> metodoidy,std::vector<punkt> dane_do_klasyfikacji);
	double silhouette_score(std::vector<punkt> data,std::vector<punkt> medoids);
//	Algorytm(const std::vector<punkt> &dane){dane_=dane;}
};




#endif /* ALGORYTM_H_ */
