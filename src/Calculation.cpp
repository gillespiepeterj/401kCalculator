/*
 * Calculation.cpp
 *
 *  Created on: Jun 4, 2017
 *      Author: P3DR0
 */

#include "Calculation.h"

void Calculation::monthlySavings(){
	cout << "How old are you?" << endl;
	cin >> m_age;
	cout << "What age do you plan on retiring?" << endl;
	cin >> m_retAge;
	cout << "How much money do you want at retirement ($)?" << endl;
	cin >> m_retGoal;
	cout << "What is your starting account size ($)?" << endl;
	cin >> m_startAcctSize;
	cout << "What is your expected average rate of return (in %)? The market historically averages about 6-7% per year if you are unsure." << endl;
	cin >> m_retRate;

	m_startAcctSize1 = m_startAcctSize;
	m_retRate = m_retRate / 100;
	m_years = m_retAge - m_age;
	for (int i = 0; m_total < m_retGoal; i++){
	    m_total = 0;
	    m_startAcctSize = m_startAcctSize1;
	    m_YC = m_YC + 1;
	    for (int j = 0; j < m_years; j++){
	        m_total = (m_startAcctSize + m_YC) * (1.00 + m_retRate);
	        m_startAcctSize = m_total;
	    }
	}
	m_MC = m_YC / 12;
	cout << "You need to save $" << m_MC << " per month to meet your retirement goal." << endl;
	cout << "Yearly Contributions: $" << m_YC << endl;
	cout << "Total account size: $" << m_total << endl;
}

void Calculation::endingBalance(){
	cout << "How old are you?" << endl;
	cin >> m_age;
	cout << "What age do you plan on retiring?" << endl;
	cin >> m_retAge;
	cout << "What is your starting account size ($)?" << endl;
	cin >> m_startAcctSize;

	cout << "What is your current salary ($)?" << endl;
	cin >> m_salary; //Assumes only single filers 2013 brackets for now!!!
	if (m_salary <= 8925.00)
		m_taxBracket = .10;
	else if ( m_salary > 8925.00 && m_salary <= 36250.00)
	    m_taxBracket = .15;
	else if ( m_salary > 36250.00 && m_salary <= 87850.00)
	    m_taxBracket = .25;
	else if ( m_salary > 87850.00 && m_salary <= 183250.00)
	    m_taxBracket = .28;
	else if ( m_salary > 183250.00 && m_salary <= 398350.00)
	    m_taxBracket = .33;
	else if ( m_salary > 398350.00 && m_salary <= 400000.00)
	    m_taxBracket = .35;
	else if ( m_salary > 400000.00)
	    m_taxBracket = .396;
	else
	    cout << "Salary Invalid!" << endl;

	cout << "How much do you contribute to your 401k? (in %)?" << endl;
	cin >> m_indContRate;
	cout << "Does your employer match? (y or n) " << endl;
	cin >> m_employerMatch;
	if (m_employerMatch == "y"){
		cout << "How Much (in %)?" << endl;
	    cin >> m_matchRate;
	    m_matchRate = m_matchRate / 100;
	}
	cout << "What is your expected average annual raise size (in %)?" << endl;
	cin >> m_raiseSize;
	cout << "What is your expected average rate of return (in %)? The market historically averages about 6-7% per year if you are unsure." << endl;
	cin >> m_retRate;

	m_indContRate = m_indContRate / 100;
	m_raiseSize = m_raiseSize / 100;
	m_retRate = m_retRate / 100;
	m_years = m_retAge - m_age;
	for (int i = m_years; i > 0; i--){
		m_indCont = m_salary * m_indContRate;
		if (m_indCont > 18000){
			m_indCont = 18000;
		}
		m_employerCont = m_salary * m_matchRate;
		m_yearlyCont = m_employerCont + m_indCont;
		if (m_yearlyCont > 54000){
			m_yearlyCont = 54000;
		}
	    m_total = (m_startAcctSize + m_yearlyCont) * (1.00 + m_retRate);
	    m_salary = m_salary * (1.00 + m_raiseSize);
	    m_startAcctSize = m_total;
	}
	cout << "Your ending balance at retirement is: $" << m_total << endl;
}


