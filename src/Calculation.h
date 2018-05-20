/*
 * Calculation.h
 *
 *  Created on: Jun 4, 2017
 *      Author: P3DR0
 */

#ifndef CALCULATION_H_
#define CALCULATION_H_

#include <iostream>

using namespace std;

class Calculation {
public:
	int m_age;
	int m_retAge;
	int m_years;
	double m_employerCont;
	double m_yearlyCont;
	double m_YC;
	double m_MC;
	double m_indCont;
	double m_salary;
	double m_raiseSize;
	double m_retGoal;
	double m_retRate;
	double m_startAcctSize;
	double m_startAcctSize1;
	double m_total;
	float m_indContRate;
	float m_matchRate;
	string m_employerMatch;

public:
	Calculation();
	void monthlySavings();
	void endingBalance();
};

#endif /* CALCULATION_H_ */
