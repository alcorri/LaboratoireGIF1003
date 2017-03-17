/**
 * \file SphereTest.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-17
 */

#include "Sphere.h"
#include <gtest/gtest.h>
#include "cmath"
#include <sstream>

using namespace labo8;
using namespace std;

TEST(Sphere, SphereConstructeurParDefaut) {
	Sphere test;
	ASSERT_EQ(0, test.reqRayon());
}

TEST(Sphere, SphereConstructeurUnParam) {
	double rayonEnvoye = 5;
	Sphere test(rayonEnvoye);
	ASSERT_EQ(rayonEnvoye, test.reqRayon());
}

class SphereTest: public ::testing::Test {
protected:
	Sphere sphere;
	double rayon;

	virtual void SetUp() {
		rayon = 5;
		sphere = Sphere(rayon);
	}
};

TEST_F(SphereTest, VolumeCoherent) {
	ASSERT_EQ(4.0 / 3.0 * M_PI * pow(rayon, 3), sphere.reqVolume());
}

TEST_F(SphereTest, SphereFormate) {
	ostringstream os;
	os << "Sphere de rayon " << rayon << " et de volume " << 4.0 / 3.0 * M_PI * pow(rayon, 3);
	string valeurAttendue = os.str();
	ASSERT_EQ(valeurAttendue, sphere.reqSphereFormate());
}