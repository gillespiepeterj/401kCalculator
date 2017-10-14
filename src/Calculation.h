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
	int m_age{0};
	int m_retAge{0};
	int m_years{0};
	double m_employerCont{0};
	double m_yearlyCont{0};
	double m_YC{0};
	double m_MC{0};
	double m_indCont{0};
	double m_salary{0};
	double m_raiseSize{0};
	double m_retGoal{0};
	double m_retRate{0};
	double m_startAcctSize{0};
	double m_startAcctSize1{0};
	double m_total{0};
	float m_indContRate{0};
	float m_matchRate{0};
	float m_taxBracket{0};
	string m_employerMatch{};
public:
	void monthlySavings();
	void endingBalance();
};

#endif /* CALCULATION_H_ */
