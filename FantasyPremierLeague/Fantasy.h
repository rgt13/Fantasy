#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class Fantasy {
public:

	/*----------------------VIRTUAL FUNCTIONS----------------------*/
	virtual void scoreGoal()								= 0;
	virtual void cleanSheet()								= 0;
	virtual void makeAssist()								= 0;
	virtual	void makeKeyPass()								= 0;
		
	virtual void winAerial()								= 0;
	virtual void makeEffectiveClearance()					= 0;
	/*----------------------=================----------------------*/



	/*----------------------DEFAULT FUNCTIONS----------------------*/
	/*POINTS FOR*/
	void makeSuccessfulDribble() { totalScore += 1; }
	void makeAccurateCross()	 { totalScore += 1; }
	void makeInterception()		 { totalScore += 1; }
	void makeSave()				 { totalScore += 2; }
	void makePenaltySave()		 { totalScore += 8; }
	void makeTackle()			 { totalScore += 1; }
	void shotOnTarget()			 { totalScore += 2; }

	/*POINTS AGAINST*/
	void concedeGoal()			 { totalScore -= 2; }
	void scoreOwnGoal()			 { totalScore -= 9; }
	void receiveRed()			 { totalScore -= 7; }
	void receiveYellow()		 { totalScore -= 3; }
	void receiveSecondYellow()   { totalScore -= 4; }
	
	
	void getDispossessed()	   	 { totalScore -= 0.5; }
	/*----------------------=================----------------------*/
	

private:
	double totalScore;
};