/*
 * VelocityProfile_NonZeroInit.hpp
 *
 *  Created on: Apr 7, 2011
 *      Author: Gajan
 */

#ifndef VELOCITYPROFILE_NONZEROINIT_H_
#define VELOCITYPROFILE_NONZEROINIT_H_

namespace trajectory_generators {

class VelocityProfile_NonZeroInit{
public:
	VelocityProfile_NonZeroInit(double maxAcc, double maxVel, double finalPos, double initPos, double initVel);
	virtual ~VelocityProfile_NonZeroInit();
	double getDuration(void);
	bool setDuration(double newDuration);
	double getPos(double time);
	double getVel(double time);
private:
	double t1, t2, t3, duration, timeScale;
	// Profile mode in order
	std::vector< std::vector<double> > subVelocityProfiles;
	void subProfileBuilder(double maxAcc, double maxVel, double finalPos, double initPos, double initVel);
};

} //end of namespace

#endif /* VELOCITYPROFILE_NONZEROINIT_H_ */
